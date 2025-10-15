#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

# membuat class yang mewarisi class Node dari rclpy, sehingga dapat melakukan semua fungsionalitas di dalamnya
class myNode(Node):
    
    def __init__ (self):
        super().__init__("py_test")
        self.counter_ = 0
        self.get_logger().info("Halo Dunia")
        self.create_timer(1.0, self.timer_callback) # membuat timer

    def timer_callback(self):
        self.get_logger().info("Hello ke-" + str(self.counter_))
        self.counter_ += 1

def main(args=None):
    rclpy.init(args=args) # inisiasi komunikasi ros
    node = myNode() # membuat node dengan nama "py_test" menggunakan class yang diimport dari rclpy.node
    rclpy.spin(node) # membuat node tetap berjalan/ hidup sampai user memencet ctrl+c
    rclpy.shutdown()

if __name__ == "__main__":
    main()