import sys
import rclpy
from rclpy.node import Node
from new_interfaces.srv import RectangleArea  # Make sure the import matches your srv location

class RectangleAreaClient(Node):
    def __init__(self):
        super().__init__('rect_client')
        self.client = self.create_client(RectangleArea, 'calculate_area')

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for service...')

        self.request = RectangleArea.Request()

    def send_request(self, length, width):
        self.request.length = length
        self.request.width = width
        self.future = self.client.call_async(self.request)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):  # ← THIS FUNCTION MUST EXIST
    rclpy.init(args=args)

    if len(sys.argv) != 3:
        print("Usage: ros2 run rect_area_pkg rect_client <length> <width>")
        return

    length = float(sys.argv[1])
    width = float(sys.argv[2])

    client = RectangleAreaClient()
    response = client.send_request(length, width)
    print(f"Area of rectangle: {response.area}")

    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
