#!/usr/bin/env python3
import sys
import select
import tty
import termios

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64

# Key definitions for flap control
#
#  - 'z' : close LEFT flap   (angle +)
#  - 'a' : open  LEFT flap   (angle -)
#  - 'x' : close RIGHT flap  (angle +)
#  - 's' : open  RIGHT flap  (angle -)
KEY_MAPPINGS = {
    'a': {'flap': 'left',  'delta': -1},   # open left
    'z': {'flap': 'left',  'delta': +1},   # close left
    's': {'flap': 'right', 'delta': -1},   # open right
    'x': {'flap': 'right', 'delta': +1},   # close right
}

# joint limits (same as xacro: 0 .. 1.2 rad)
MIN_FLAP_POSITION = 0.0    # fully open
MAX_FLAP_POSITION = 1.2    # fully closed
POSITION_INCREMENT = 0.1   # step per key press (rad)


class FlapTeleopNode(Node):
    def __init__(self):
        super().__init__('flap_teleop_node')

        # Publishers to ROS topics (bridged to Gazebo joint controllers)
        self.left_pub = self.create_publisher(Float64, 'left_flap_cmd', 10)
        self.right_pub = self.create_publisher(Float64, 'right_flap_cmd', 10)

        # Start with flaps half-open (you can change if you like)
        self.left_flap_pos = 0.6
        self.right_flap_pos = 0.6

        self.get_logger().info(
            'Flap Teleop Started:\n'
            '  a / z -> LEFT flap (open / close)\n'
            '  s / x -> RIGHT flap (open / close)\n'
            '  Ctrl+C to quit.'
        )

        # Save terminal settings and go to raw mode
        self.settings = termios.tcgetattr(sys.stdin)
        tty.setraw(sys.stdin.fileno())

        # Timer for polling keyboard
        self.create_timer(1.0 / 30.0, self.input_loop)

    def destroy_node(self):
        # Restore terminal settings safely
        try:
            termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.settings)
        except Exception:
            pass
        super().destroy_node()

    # -------- keyboard helpers --------
    def get_key(self):
        """Non-blocking key read"""
        if sys.stdin in select.select([sys.stdin], [], [], 0)[0]:
            return sys.stdin.read(1)
        return None

    @staticmethod
    def clamp(val):
        return max(MIN_FLAP_POSITION, min(MAX_FLAP_POSITION, val))

    # -------- main key handling loop --------
    def input_loop(self):
        key = self.get_key()
        if key is None:
            return

        # Ctrl+C
        if key == '\x03':
            self.get_logger().info('Ctrl+C pressed, shutting down.')
            rclpy.shutdown()
            return

        if key not in KEY_MAPPINGS:
            return

        control = KEY_MAPPINGS[key]
        flap = control['flap']
        delta = control['delta'] * POSITION_INCREMENT

        if flap == 'left':
            self.left_flap_pos = self.clamp(self.left_flap_pos + delta)
            msg = Float64()
            msg.data = self.left_flap_pos
            self.left_pub.publish(msg)
            state = "OPEN" if delta < 0 else "CLOSE"
            self.get_logger().info(
                f"[LEFT] {state} -> {self.left_flap_pos:.2f} rad")

        elif flap == 'right':
            self.right_flap_pos = self.clamp(self.right_flap_pos + delta)
            msg = Float64()
            msg.data = self.right_flap_pos
            self.right_pub.publish(msg)
            state = "OPEN" if delta < 0 else "CLOSE"
            self.get_logger().info(
                f"[RIGHT] {state} -> {self.right_flap_pos:.2f} rad")


def main(args=None):
    rclpy.init(args=args)
    node = FlapTeleopNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
