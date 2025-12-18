#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import PoseStamped
from cv_bridge import CvBridge
import cv2
import numpy as np

class TrackerNode(Node):
    def __init__(self):
        super().__init__('tracker_node')
        
        # 1. Initialize CvBridge for ROS-to-OpenCV conversion
        self.bridge = CvBridge()
        
        # 2. Subscribe to the camera feed bridged from Gazebo
        self.img_sub = self.create_subscription(
            Image, '/camera/image_raw', self.image_callback, 10)
        
        # 3. Publisher to send goals to the Nav2 stack
        self.goal_pub = self.create_publisher(PoseStamped, 'goal_pose', 10)

        # 4. Define HSV color ranges for Red, Green, and Blue spheres
        self.color_ranges = {
            'red':   {'lower': [0, 150, 50],   'upper': [10, 255, 255]},
            'green': {'lower': [35, 100, 50],  'upper': [85, 255, 255]},
            'blue':  {'lower': [100, 150, 50], 'upper': [130, 255, 255]}
        }

        self.get_logger().info("Ball Tracker Node initialized. Searching...")

    def image_callback(self, msg):
        # Convert ROS Image to OpenCV BGR format
        frame = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

        for color, limits in self.color_ranges.items():
            mask = cv2.inRange(hsv, np.array(limits['lower']), np.array(limits['upper']))
            contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

            if contours:
                # Target the largest visible blob of that color
                largest = max(contours, key=cv2.contourArea)
                if cv2.contourArea(largest) > 400: # Noise filter
                    M = cv2.moments(largest)
                    if M['m00'] > 0:
                        # Find the horizontal center (cx) of the ball in pixels
                        cx = int(M['m10'] / M['m00'])
                        
                        # Logic: If the ball is roughly centered (frame is 640px wide)
                        if 300 < cx < 340:
                            self.get_logger().info(f"Aligned with {color} ball. Sending goal.")
                            self.send_approach_goal()
                            break

        # Debug window for your video presentation
        cv2.imshow("Detection View", frame)
        cv2.waitKey(1)

    def send_approach_goal(self):
        # Create a Goal Pose relative to the robot itself (base_link)
        goal = PoseStamped()
        goal.header.stamp = self.get_clock().now().to_msg()
        goal.header.frame_id = "base_link" 
        
        # Move 0.6 meters forward toward the detected ball
        goal.pose.position.x = 0.6
        goal.pose.orientation.w = 1.0
        
        self.goal_pub.publish(goal)

def main(args=None):
    rclpy.init(args=args)
    node = TrackerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()