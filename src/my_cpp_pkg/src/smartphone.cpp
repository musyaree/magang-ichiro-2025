#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"

using namespace std::placeholders;

class smartphoneNode : public rclcpp::Node {
    public:
        smartphoneNode() : Node("smartphone") {
            subscriber_ = this->create_subscription<example_interfaces::msg::String>(
                "robot_news", 10, 
                std::bind(&smartphoneNode::callbackRobotNews, this, _1));
            RCLCPP_INFO(this->get_logger(), "Smartphone started");
        }

    private:
        void callbackRobotNews(const example_interfaces::msg::String::SharedPtr msg) {
            RCLCPP_INFO(this->get_logger(), "I heard '%s'", msg->data.c_str());
        } 

        rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr subscriber_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<smartphoneNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}