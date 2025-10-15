#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <functional>

class myNode : public rclcpp::Node {
    public:
        myNode() : Node("cpp_test"), counter_(0){
            RCLCPP_INFO(this->get_logger(), "Hello World");
            timer_ = this->create_wall_timer(
                std::chrono::seconds(1),
                std::bind(&myNode::timerCallback, this));
        }

    private:
    void timerCallback() {
        RCLCPP_INFO(this->get_logger(), "Hello %d", counter_);
        counter_++;
    }
        rclcpp::TimerBase::SharedPtr timer_;
        int counter_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv); // inisiasi komunikasi ros2

    // membuat node manual (tanpa OOP)
    // auto node = std::make_shared<rclcpp::Node>("cpp_test");
    // RCLCPP_INFO(node->get_logger(), "Hello world"); 
    
    // membuat node dengan OOP
    auto node = std::make_shared<myNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}