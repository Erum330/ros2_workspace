import rclpy
from rclpy.node import Node
from new_interfaces.srv import AddTwoInts

class MinimalServer(Node):
    def __init__(self):
        super().__init__('minimal_server')
        self.srv = self.create_service(AddTwoInts, 'add_two_ints', self.callback)
        self.get_logger().info('Service "add_two_ints" ready.')

    def callback(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info(f'a={request.a}, b={request.b} -> sum={response.sum}')
        return response

def main(args=None):
    rclpy.init(args=args)
    node = MinimalServer()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
