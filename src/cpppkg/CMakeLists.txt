cmake_minimum_required(VERSION 3.8)
project(cpppkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(cpp_node src/firstnode.cpp)
ament_target_dependencies(cpp_node rclcpp)

install(TARGETS
  cpp_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()