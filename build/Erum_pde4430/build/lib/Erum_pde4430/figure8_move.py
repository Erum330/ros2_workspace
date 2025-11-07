#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from turtlesim.srv import TeleportAbsolute
import math

# ==== CONFIG: tune these if needed ====
CENTER_X = 5.5
CENTER_Y = 5.5
A = 1.8             # horizontal half-width (X variation)
B = 2.0             # vertical half-height (Y variation)
LOOP_RATE =    20.0    # Hz
SPEED_SCALE = 1.2   # base multiplier for linear command
LOOKAHEAD = 0.5     # seconds ahead on the path to aim for (smooth turning)
MAX_LIN = 2.0       # max linear speed
MAX_ANG = 3.0       # max angular speed (rad/s)
T_SPEED = 0.8       # parametric speed (controls how fast turtle moves along path)
# =====================================


def desired_point(t):
    # ✅ Upright figure-8 (two circular loops stacked vertically)
    # Equation: x = A * sin(2t)/2, y = B * sin(t)
    x = CENTER_X + A * math.sin(2 * t) / 2.0
    y = CENTER_Y + B * math.sin(t)
    return x, y


class Figure8Move(Node):
    def __init__(self):
        super().__init__('figure8_move')
        self.pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.pose_sub = self.create_subscription(Pose, '/turtle1/pose', self.pose_cb, 10)
        self.pose = None
        self.centered = False
        self.t = 0.0
        self.dt = 1.0 / LOOP_RATE
        self.timer = self.create_timer(self.dt, self.update)
        self.get_logger().info("figure8_move starting — teleporting to center...")
        self.teleport_to_center()

    def teleport_to_center(self):
        client = self.create_client(TeleportAbsolute, '/turtle1/teleport_absolute')
        while not client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for teleport service...")
        req = TeleportAbsolute.Request()
        req.x = CENTER_X
        req.y = CENTER_Y
        req.theta = 0.0
        future = client.call_async(req)
        future.add_done_callback(self._centered_cb)

    def _centered_cb(self, future):
        self.centered = True
        self.get_logger().info("Teleported to center; beginning upright figure-8...")

    def pose_cb(self, msg: Pose):
        self.pose = msg

    def normalize_angle(self, ang):
        return math.atan2(math.sin(ang), math.cos(ang))

    def update(self):
        if not self.centered or self.pose is None:
            return

        # Advance along the parametric curve
        self.t += T_SPEED * self.dt

        # Compute lookahead target for smoother following
        t_target = self.t + (T_SPEED * LOOKAHEAD)
        x_target, y_target = desired_point(t_target)

        # Vector from current position to target point
        dx = x_target - self.pose.x
        dy = y_target - self.pose.y
        dist = math.hypot(dx, dy)

        # Desired heading
        desired_yaw = math.atan2(dy, dx)
        yaw_error = self.normalize_angle(desired_yaw - self.pose.theta)

        # Proportional control
        k_lin = 1.0 * SPEED_SCALE
        k_ang = 4.0
        lin = k_lin * dist
        ang = k_ang * yaw_error

        # Limit speeds
        lin = min(lin, MAX_LIN)
        if abs(yaw_error) > 0.7:
            lin *= 0.4  # slow down on sharp turns
        ang = max(min(ang, MAX_ANG), -MAX_ANG)

        # Publish velocity command
        msg = Twist()
        msg.linear.x = lin
        msg.angular.z = ang
        self.pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = Figure8Move()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
