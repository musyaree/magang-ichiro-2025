#!/usr/bin/env pyhton3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String


class robotNewStationNode(Node):
    def __init__(self):
            super().__init__("robot_news_station")
            self.robot_name_ = "ambatron"
            self.counter_ = 0
            self.publisher_ = self.create_publisher(String, "robot_news", 10)
            self.timer_ = self.create_timer(0.5, self.publish_news)
            self.get_logger().info("Robot News Station started")

    def publish_news(self):
          msg = String()
          msg.data = "Hello this is " + self.robot_name_+ " from ngawi station " + str(self.counter_) 
          self.publisher_.publish(msg)
          self.counter_ += 1


def main(args=None):
      rclpy.init(args=args)
      node = robotNewStationNode()
      rclpy.spin(node)


      rclpy.shutdown()


if __name__ == "__main__":
      main()