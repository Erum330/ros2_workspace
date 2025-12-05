#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from turtlesim.srv import SetPen, Spawn
import math

class MultiRoombaCleaner(Node):
    def __init__(self):
        super().__init__('multi_roomba_cleaner')

        # Client to spawn turtles
        self.spawn_client = self.create_client(Spawn, '/spawn')
        while not self.spawn_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for /spawn service...')

        # Number of turtles
        self.num_turtles = 4

        # Turtle data: list of dicts
        self.turtles = []
        self.timer = self.create_timer(0.1, self.update)  # 10 Hz update

        # Spawn turtles and set up their parameters
        spawn_positions = [
            (0.5, 0.5),   # Turtle 1: bottom-left
            (10.5, 3.0),  # Turtle 2: bottom-right, shifted up
            (0.5, 5.5),   # Turtle 3: mid-left
            (10.5, 8.0)   # Turtle 4: mid-right, shifted up
        ]
        y_ranges = [
            (0.5, 3.0),   # Turtle 1: y 0.5 to 3.0
            (3.0, 5.5),   # Turtle 2: y 3.0 to 5.5
            (5.5, 8.0),   # Turtle 3: y 5.5 to 8.0
            (8.0, 10.5)   # Turtle 4: y 8.0 to 10.5
        ]

        # Reduced step_size for smaller rectangles (denser vertical coverage)
        self.step_size = 0.5  # Smaller than 1.0 for narrower "rectangles"

        for i in range(self.num_turtles):
            turtle_name = f'turtle{i+1}'
            x, y = spawn_positions[i]
            min_y, max_y = y_ranges[i]

            # Spawn the turtle
            req = Spawn.Request()
            req.x = x
            req.y = y
            req.theta = 0.0
            req.name = turtle_name
            self.spawn_client.call_async(req)

            # Set up publishers, subscribers, clients
            pub = self.create_publisher(Twist, f'/{turtle_name}/cmd_vel', 10)
            pose_sub = self.create_subscription(Pose, f'/{turtle_name}/pose', self.create_pose_callback(i), 10)
            pen_client = self.create_client(SetPen, f'/{turtle_name}/set_pen')
            while not pen_client.wait_for_service(timeout_sec=1.0):
                self.get_logger().info(f'Waiting for /{turtle_name}/set_pen service...')

            # Initialize turtle data
            turtle_data = {
                'name': turtle_name,
                'pub': pub,
                'pose_sub': pose_sub,
                'pen_client': pen_client,
                'pose': Pose(),
                'state': 'initial',  # 'initial', 'horizontal', 'vertical'
                'row_direction': 1,  # 1 = right, -1 = left
                'target_x': x,
                'target_y': y,
                'min_y': min_y,
                'max_y': max_y,
                'cleaning_done': False
            }
            self.turtles.append(turtle_data)

            # Turn pen on with white color for cleaning
            self.set_pen(i, r=255, g=255, b=255, width=3, off=0)

    def create_pose_callback(self, index):
        def callback(msg):
            self.turtles[index]['pose'] = msg
        return callback

    def set_pen(self, index, r=255, g=255, b=255, width=3, off=0):
        req = SetPen.Request()
        req.r = r
        req.g = g
        req.b = b
        req.width = width
        req.off = off
        self.turtles[index]['pen_client'].call_async(req)

    def move_turtle(self, index, linear, angular):
        msg = Twist()
        msg.linear.x = linear
        msg.angular.z = angular
        self.turtles[index]['pub'].publish(msg)

    def update(self):
        for i, turtle in enumerate(self.turtles):
            if turtle['cleaning_done']:
                self.move_turtle(i, 0.0, 0.0)
                continue

            pose = turtle['pose']
            # Check if turtle reached target
            if abs(pose.x - turtle['target_x']) < 0.1 and abs(pose.y - turtle['target_y']) < 0.1:
                if turtle['state'] == 'initial':
                    # Reached start point, now start horizontal sweep
                    turtle['state'] = 'horizontal'
                    turtle['target_x'] = 10.5 if turtle['row_direction'] == 1 else 0.5
                    turtle['target_y'] = turtle['min_y']  # Start at min_y
                elif turtle['state'] == 'horizontal':
                    # Finished horizontal sweep, now move vertically to next row
                    turtle['state'] = 'vertical'
                    turtle['target_y'] += self.step_size  # Use the reduced step_size
                    turtle['target_x'] = pose.x  # Keep x the same
                    if turtle['target_y'] > turtle['max_y']:
                        turtle['cleaning_done'] = True
                        self.get_logger().info(f"Cleaning finished for {turtle['name']}!")
                        self.move_turtle(i, 0.0, 0.0)
                        # Turn pen off at end
                        self.set_pen(i, off=1)
                        continue
                elif turtle['state'] == 'vertical':
                    # Finished vertical move, now sweep horizontally in opposite direction
                    turtle['state'] = 'horizontal'
                    turtle['row_direction'] *= -1  # Flip direction
                    turtle['target_x'] = 10.5 if turtle['row_direction'] == 1 else 0.5

            # Move towards target using simple proportional controller
            dx = turtle['target_x'] - pose.x
            dy = turtle['target_y'] - pose.y
            angle_to_target = math.atan2(dy, dx)
            angle_diff = angle_to_target - pose.theta

            # Normalize angle
            while angle_diff > math.pi:
                angle_diff -= 2 * math.pi
            while angle_diff < -math.pi:
                angle_diff += 2 * math.pi

            # Rotate if angle difference is significant
            if abs(angle_diff) > 0.05:
                self.move_turtle(i, 0.0, 2.0 * angle_diff)  # proportional rotation
            else:
                self.move_turtle(i, 2.0, 0.0)  # move forward

def main(args=None):
    rclpy.init(args=args)
    node = MultiRoombaCleaner()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
