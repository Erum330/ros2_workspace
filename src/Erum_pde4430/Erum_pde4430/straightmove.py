import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class StraightMover(Node):
    def __init__(self):
        super().__init__('straight_mover')
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.move_straight)
        self.get_logger().info("StraightMover node started!")

    def move_straight(self):
        msg = Twist()
        msg.linear.x = 2.0   # speed forward
        msg.angular.z = 0.0  # no rotation
        self.publisher_.publish(msg)
        self.get_logger().info('Moving straight...')

def main(args=None):
    rclpy.init(args=args)
    node = StraightMover()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
