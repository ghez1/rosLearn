#include "rclcpp/rclcpp.hpp"
#include "finalprojectinterfaces/srv/catch_turtle.hpp"
#include "turtlesim/srv/kill.hpp"
#include "turtlesim/srv/spawn.hpp"
#include <random>
#include <map>


using namespace std::placeholders;

class turtle_spawner : public rclcpp::Node
{
public:
    turtle_spawner() : Node("turtle_spawner")
    {
        server_ = this->create_service<finalprojectinterfaces::srv::CatchTurtle>(
            "turtle_catch",
            std::bind(&turtle_spawner::turtleCatchCallback, this, _1, _2));

        client_ = this->create_client<turtlesim::srv::Kill>("kill");
        client_spawn = this->create_client<turtlesim::srv::Spawn>("spawn");


        float lower_bound = 0.0;
        float upper_bound = 11.0;

        std::uniform_real_distribution<float> unif2(lower_bound, upper_bound);

        unif = unif2; // Initialize the uniform distribution with the bounds
        re = std::default_random_engine(std::random_device{}()); // Initialize the random engin

        //client_ = this->create_client<turtlesim::srv::Spawn>("turtle_spawn");

        

        RCLCPP_INFO(this->get_logger(), "turtle spawner has been started.");
    }


    std::uniform_real_distribution<float> unif; 
    std::default_random_engine re;
    std::map<std::string, std::pair<float,float>> aliveTurtles;
    int turtleCount = 10;

    void killTurtle(const std::string &name)
    {
        while (!client_->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for the server...");
        }
        
        auto request = std::make_shared<turtlesim::srv::Kill::Request>();
        request->name = name;

        auto result = client_->async_send_request(request);

        if (result.wait_for(std::chrono::seconds(1)) == std::future_status::ready)
        {
            RCLCPP_INFO(this->get_logger(), "Turtle %s killed.", name.c_str());
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to kill turtle %s.", name.c_str());
        }
    }

    void spawnTurtle()
    {
        while (!client_spawn->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for the spawn service...");
        }
        auto request = std::make_shared<turtlesim::srv::Spawn::Request>();

        // randomly choose numbers between 0.0 and 11.0 for x, y, and theta

        request->x = unif(re);
        request->y = unif(re);
        request->theta = unif(re);
        request->name = "turtle_" + std::to_string(turtleCount++);

        aliveTurtles[request->name] = std::make_pair(request->x, request->y);

        auto result = client_spawn->async_send_request(request);

        if (result.wait_for(std::chrono::seconds(2)) == std::future_status::ready)
        
        {
            RCLCPP_INFO(this->get_logger(), "Turtle spawned successfully.");
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to spawn turtle.");
        }
    }

    void turtleCatchCallback(const finalprojectinterfaces::srv::CatchTurtle::Request::SharedPtr request,
                            const finalprojectinterfaces::srv::CatchTurtle::Response::SharedPtr response)
    {
        response->success = true;
        killTurtle(request->name);
        spawnTurtle(); // Spawn a new turtle after killing the old one
    }

    rclcpp::Service<finalprojectinterfaces::srv::CatchTurtle>::SharedPtr server_;
    rclcpp::Client<turtlesim::srv::Kill>::SharedPtr client_;
    rclcpp::Client<turtlesim::srv::Spawn>::SharedPtr client_spawn;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<turtle_spawner>();
    node->spawnTurtle(); // Spawn an initial turtle
    node->spawnTurtle(); // Spawn another turtle
    
    rclcpp::spin(node);

    rclcpp::shutdown();
    return 0;
}
