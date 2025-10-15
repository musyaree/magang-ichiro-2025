#!/usr/bin/env pyhton3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String


class smartphoneNode(Node):
    def __init__(self):
            super().__init__("smartphone")
            self.subscriber_ = self.create_subscription(
                  String, "robot_news", self.callback_robot_news, 10)
            self.get_logger().info("Start listening robot_news topic")

    def callback_robot_news(self, msg: String):
          self.get_logger().info("i heard \'" + msg.data + "\'")

def main(args=None):
      rclpy.init(args=args)
      node = smartphoneNode()
      rclpy.spin(node)
      rclpy.shutdown()


if __name__ == "__main__":
      main()