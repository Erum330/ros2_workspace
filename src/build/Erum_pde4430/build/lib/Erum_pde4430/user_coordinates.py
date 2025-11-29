#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math

class TurtleMover(Node):
    def __init__(self):
        super().__init__('turtle_mover')

        # Publisher to control turtle velocity
        self.pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        # Subscriber to get turtle position
        self.pose_sub = self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)

        self.pose = Pose()
        self.timer = self.create_timer(0.1, self.update)  # 10 Hz update

        # Prompt user for target coordinates
        print("Enter target x coordinate (0.5 to 10.5): ")
        x_input = input().strip()
        try:
            self.target_x = float(x_input)
            if not (0.5 <= self.target_x <= 10.5):
                raise ValueError
        except ValueError:
            self.get_logger().warn("Invalid x coordinate, using default 5.5")
            self.target_x = 5.5

        print("Enter target y coordinate (0.5 to 10.5): ")
        y_input = input().strip()
        try:
            self.target_y = float(y_input)
            if not (0.5 <= self.target_y <= 10.5):
                raise ValueError
        except ValueError:
            self.get_logger().warn("Invalid y coordinate, using default 5.5")
            self.target_y = 5.5

        self.reached_target = False

    def pose_callback(self, msg):
        self.pose = msg

    def update(self):
        if self.reached_target:
            self.pub.publish(Twist())  # Stop the turtle
            return

        # Check if reached target
        if abs(self.pose.x - self.target_x) < 0.1 and abs(self.pose.y - self.target_y) < 0.1:
            self.reached_target = True
            self.get_logger().info(f"Reached target ({self.target_x}, {self.target_y})")
            return

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

    def move_turtle(self, linear, angular):
        msg = Twist()
        msg.linear.x = linear
        msg.angular.z = angular
        self.pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TurtleMover()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
