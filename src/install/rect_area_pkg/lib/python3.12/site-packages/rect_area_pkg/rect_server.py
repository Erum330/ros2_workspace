import rclpy
from rclpy.node import Node
from new_interfaces.srv import RectangleArea

class RectangleAreaServer(Node):
    def __init__(self):
        super().__init__('rect_server')
        self.srv = self.create_service(RectangleArea, 'calculate_area', self.calculate_area_callback)
        self.get_logger().info('Rectangle Area Service Server is ready.')

    def calculate_area_callback(self, request, response):
        response.area = request.length * request.width
        self.get_logger().info(f'Received length={request.length}, width={request.width} -> area={response.area}')
        return response

def main(args=None):
    rclpy.init(args=args)
    node = RectangleAreaServer()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
