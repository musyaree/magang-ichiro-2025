#include "rclcpp/rclcpp.hpp"

class customNode : public rclcpp::Node {
    public:
        customNode() : Node("node_name") {
            //
        }

    private:
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<customNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}