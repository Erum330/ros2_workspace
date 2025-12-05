import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
import sys
import select
import tty
import termios

# Key definitions for flap control
KEY_MAPPINGS = {
    'a': {'flap': 'left', 'direction': 1},   # Increase left flap
    'z': {'flap': 'left', 'direction': -1},  # Decrease left flap
    's': {'flap': 'right', 'direction': 1},  # Increase right flap
    'x': {'flap': 'right', 'direction': -1}, # Decrease right flap
}

MAX_FLAP_POSITION = 1.2
MIN_FLAP_POSITION = 0.0
POSITION_INCREMENT = 0.1


class FlapTeleopNode(Node):

    def __init__(self):
        super().__init__('flap_teleop_node')

        self.left_pub = self.create_publisher(Float64, 'left_flap_cmd', 10)
        self.right_pub = self.create_publisher(Float64, 'right_flap_cmd', 10)

        self.left_flap_pos = MIN_FLAP_POSITION
        self.right_flap_pos = MIN_FLAP_POSITION

        self.get_logger().info('Flap Teleop Started: a/z = left flap, s/x = right flap')

        # enable raw keyboard reading
        self.settings = termios.tcgetattr(sys.stdin)
        tty.setraw(sys.stdin.fileno())

        self.create_timer(1.0/30.0, self.input_loop)

    def __del__(self):
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.settings)

    def get_key(self):
        if sys.stdin in select.select([sys.stdin], [], [], 0)[0]:
            return sys.stdin.read(1)
        return None

    def clamp(self, val):
        return max(MIN_FLAP_POSITION, min(MAX_FLAP_POSITION, val))

    def input_loop(self):
        key = self.get_key()

        if key is None:
            return

        if key == '\x03':  # Ctrl+C
            rclpy.shutdown()
            return

        if key in KEY_MAPPINGS:
            control = KEY_MAPPINGS[key]
            flap = control['flap']
            direction = control['direction']

            if flap == 'left':
                self.left_flap_pos = self.clamp(self.left_flap_pos + direction * POSITION_INCREMENT)
                self.left_pub.publish(Float64(data=self.left_flap_pos))
                self.get_logger().info(f"Left Flap: {self.left_flap_pos:.2f} rad")

            elif flap == 'right':
                self.right_flap_pos = self.clamp(self.right_flap_pos + direction * POSITION_INCREMENT)
                self.right_pub.publish(Float64(data=self.right_flap_pos))
                self.get_logger().info(f"Right Flap: {self.right_flap_pos:.2f} rad")


def main(args=None):
    rclpy.init(args=args)
    node = FlapTeleopNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()


if __name__ == '__main__':
    main()
