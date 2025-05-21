cmake_minimum_required(VERSION 3.8)
project(finalproject)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(turtle_controller src/turtle_controller.cpp)
ament_target_dependencies(turtle_controller rclcpp example_interfaces)

add_executable(turtle_spawner src/turtle_spawner.cpp)
ament_target_dependencies(turtle_spawner rclcpp example_interfaces)


install(TARGETS
  turtle_spawner
  turtle_controller
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()
