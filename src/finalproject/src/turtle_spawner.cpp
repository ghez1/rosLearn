#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

using namespace std::placeholders;

class turtle_spawner : public rclcpp::Node
{
public:
    turtle_spawner() : Node("turtle_spawner")
    {
        server_ = this->create_service<example_interfaces::srv::AddTwoInts>(
            "add_two_ints",
            std::bind(&turtle_spawner::callbackAddTwoInts, this, _1, _2));
        RCLCPP_INFO(this->get_logger(), "Add Two Ints Service has been started.");
    }

private:
    void callbackAddTwoInts(const example_interfaces::srv::AddTwoInts::Request::SharedPtr request,
                            const example_interfaces::srv::AddTwoInts::Response::SharedPtr response)
    {
        response->sum = request->a + request->b;
        RCLCPP_INFO(this->get_logger(), "%d + %d = %d",
                    (int)request->a, (int)request->b, (int)response->sum);
    }

    rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr server_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<turtle_spawner>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
