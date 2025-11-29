#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from turtlesim.srv import SetPen
import math

class RoombaCleaner(Node):
    def __init__(self):
        super().__init__('roomba_cleaner')

        # Publisher to control turtle velocity
        self.pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        # Subscriber to get turtle position
        self.pose_sub = self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)

        # Client to set pen color
        self.pen_client = self.create_client(SetPen, '/turtle1/set_pen')
        while not self.pen_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for /turtle1/set_pen service...')

        self.pose = Pose()
        self.timer = self.create_timer(0.1, self.update)  # 10 Hz update

        # Cleaning parameters
        self.width = 11.0      # TurtleSim width
        self.height = 11.0     # TurtleSim height
        self.step_size = 1.0   # Distance between rows (turtle diameter)
        self.state = 'initial'  # 'initial', 'horizontal', or 'vertical'
        self.row_direction = 1  # 1 = right, -1 = left
        self.target_x = 0.5    # Initial target: bottom-left corner
        self.target_y = 0.5
        self.cleaning_done = False

        # Turn pen on with white color for cleaning
        self.set_pen(r=255, g=255, b=255, width=3, off=0)

    def pose_callback(self, msg):
        self.pose = msg

    def set_pen(self, r=255, g=255, b=255, width=3, off=0):
        req = SetPen.Request()
        req.r = r
        req.g = g
        req.b = b
        req.width = width
        req.off = off
        self.pen_client.call_async(req)

    def move_turtle(self, linear, angular):
        msg = Twist()
        msg.linear.x = linear
        msg.angular.z = angular
        self.pub.publish(msg)

    def update(self):
        if self.cleaning_done:
            self.move_turtle(0.0, 0.0)
            return

        # Check if turtle reached target
        if abs(self.pose.x - self.target_x) < 0.1 and abs(self.pose.y - self.target_y) < 0.1:
            if self.state == 'initial':
                # Reached start point, now start horizontal sweep to the right
                self.state = 'horizontal'
                self.target_x = self.width - 0.5  # Sweep to the right end
                self.target_y = 0.5
            elif self.state == 'horizontal':
                # Finished horizontal sweep, now move vertically to next row
                self.state = 'vertical'
                self.target_y += self.step_size
                self.target_x = self.pose.x  # Keep x the same for vertical move
                if self.target_y > self.height - 0.5:
                    self.cleaning_done = True
                    self.get_logger().info("Cleaning finished!")
                    self.move_turtle(0.0, 0.0)
                    # Turn pen off at end
                    self.set_pen(off=1)
                    return
            elif self.state == 'vertical':
                # Finished vertical move, now sweep horizontally in opposite direction
                self.state = 'horizontal'
                self.row_direction *= -1  # Flip direction
                self.target_x = self.width - 0.5 if self.row_direction == 1 else 0.5

        # Move towards target using simple proportional controller
        dx = self.target_x - self.pose.x
        dy = self.target_y - self.pose.y
        angle_to_target = math.atan2(dy, dx)
        angle_diff = angle_to_target - self.pose.theta

        # Normalize angle
        while angle_diff > math.pi:
            angle_diff -= 2 * math.pi
        while angle_diff < -math.pi:
            angle_diff += 2 * math.pi

        # Rotate if angle difference is significant
        if abs(angle_diff) > 0.05:
            self.move_turtle(0.0, 2.0 * angle_diff)  # proportional rotation
        else:
            self.move_turtle(2.0, 0.0)  # move forward

def main(args=None):
    rclpy.init(args=args)
    node = RoombaCleaner()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
