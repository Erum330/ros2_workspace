import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
import sys
import select
import tty
import termios

# Key definitions for flap control
KEY_MAPPINGS = {
    'a': {'flap': 'left', 'direction': 1},  # Increase left flap position
    'z': {'flap': 'left', 'direction': -1}, # Decrease left flap position
    's': {'flap': 'right', 'direction': 1}, # Increase right flap position
    'x': {'flap': 'right', 'direction': -1},# Decrease right flap position
}

# The maximum position for the flaps (matching the 1.2 limit in robot.xacro)
MAX_FLAP_POSITION = 1.2
MIN_FLAP_POSITION = 0.0
POSITION_INCREMENT = 0.1 # Step size in radians

class FlapTeleopNode(Node):
    """
    A simple ROS 2 node to control two revolute flaps using keyboard input.
    """
    def __init__(self):
        super().__init__('flap_teleop_node')
        
        # Publishers for the two flap command topics
        self.left_pub = self.create_publisher(Float64, 'left_flap_cmd', 10)
        self.right_pub = self.create_publisher(Float64, 'right_flap_cmd', 10)
        
        # Current position state variables
        self.left_flap_pos = MIN_FLAP_POSITION
        self.right_flap_pos = MIN_FLAP_POSITION
        
        self.get_logger().info('Flap Teleop Node initialized.')
        self.get_logger().info('Use a/z for Left Flap and s/x for Right Flap.')
        self.get_logger().info('Position limits: 0.0 to 1.2 radians.')
        
        # Initialize terminal settings for non-blocking input
        self.settings = termios.tcgetattr(sys.stdin)
        tty.setraw(sys.stdin.fileno())

    def __del__(self):
        # Restore original terminal settings upon node shutdown
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.settings)

    def get_key(self):
        """Checks for keyboard input without blocking."""
        if sys.stdin in select.select([sys.stdin], [], [], 0)[0]:
            return sys.stdin.read(1)
        return None

    def clamp(self, value):
        """Clamps the value between the defined min and max position."""
        return max(MIN_FLAP_POSITION, min(MAX_FLAP_POSITION, value))

    def run(self):
        """Main loop for processing keyboard input and publishing commands."""
        
        # Set up a timer to continuously check for keyboard input at 30Hz
        self.create_timer(1.0/30.0, self.input_loop)

    def input_loop(self):
        key = self.get_key()
        
        if key is not None:
            if key == '\x03':  # Ctrl+C
                self.get_logger().info('Flap teleop shutting down...')
                rclpy.shutdown()
                return

            if key in KEY_MAPPINGS:
                control = KEY_MAPPINGS[key]
                flap = control['flap']
                direction = control['direction']
                
                # Determine which flap to move and calculate new position
                if flap == 'left':
                    new_pos = self.left_flap_pos + direction * POSITION_INCREMENT
                    self.left_flap_pos = self.clamp(new_pos)
                    msg = Float64(data=self.left_flap_pos)
                    self.left_pub.publish(msg)
                    self.get_logger().info(f"Left Flap Position: {self.left_flap_pos:.2f} rad")
                
                elif flap == 'right':
                    new_pos = self.right_flap_pos + direction * POSITION_INCREMENT
                    self.right_flap_pos = self.clamp(new_pos)
                    msg = Float64(data=self.right_flap_pos)
                    self.right_pub.publish(msg)
                    self.get_logger().info(f"Right Flap Position: {self.right_flap_pos:.2f} rad")
            
            # Reset non-blocking input mode after a key press
            tty.setraw(sys.stdin.fileno())


def main(args=None):
    rclpy.init(args=args)
    node = FlapTeleopNode()
    try:
        node.run()
        rclpy.spin(node)
    except Exception as e:
        node.get_logger().error(f"Error in main loop: {e}")
    finally:
        node.destroy_node()

if __name__ == '__main__':
    main()