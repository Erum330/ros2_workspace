#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class TurtleDriver(Node):
    def __init__(self):
        super().__init__('turtle_driver')

        # Publisher to control turtle velocity
        self.pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        # Prompt user for speeds at startup
        print("Enter linear speed (e.g., 2.0): ")
        linear_input = input().strip()
        try:
            self.linear_speed = float(linear_input) if linear_input else 2.0
        except ValueError:
            self.get_logger().warn("Invalid linear speed, using default 2.0")
            self.linear_speed = 2.0

        print("Enter angular speed (e.g., 1.0 for turning): ")
        angular_input = input().strip()
        try:
            self.angular_speed = float(angular_input) if angular_input else 0.0
        except ValueError:
            self.get_logger().warn("Invalid angular speed, using default 0.0")
            self.angular_speed = 0.0

        # Timer to publish velocity at 10 Hz
        self.timer = self.create_timer(0.1, self.drive_turtle)

    def drive_turtle(self):
        msg = Twist()
        msg.linear.x = self.linear_speed
        msg.angular.z = self.angular_speed
        self.pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TurtleDriver()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
