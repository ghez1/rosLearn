// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from finalprojectinterfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "finalprojectinterfaces/msg/turtle_array.hpp"


#ifndef FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
#define FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "finalprojectinterfaces/msg/detail/turtle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace finalprojectinterfaces
{

namespace msg
{

namespace builder
{

class Init_TurtleArray_debug_message
{
public:
  explicit Init_TurtleArray_debug_message(::finalprojectinterfaces::msg::TurtleArray & msg)
  : msg_(msg)
  {}
  ::finalprojectinterfaces::msg::TurtleArray debug_message(::finalprojectinterfaces::msg::TurtleArray::_debug_message_type arg)
  {
    msg_.debug_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalprojectinterfaces::msg::TurtleArray msg_;
};

class Init_TurtleArray_are_motors_ready
{
public:
  explicit Init_TurtleArray_are_motors_ready(::finalprojectinterfaces::msg::TurtleArray & msg)
  : msg_(msg)
  {}
  Init_TurtleArray_debug_message are_motors_ready(::finalprojectinterfaces::msg::TurtleArray::_are_motors_ready_type arg)
  {
    msg_.are_motors_ready = std::move(arg);
    return Init_TurtleArray_debug_message(msg_);
  }

private:
  ::finalprojectinterfaces::msg::TurtleArray msg_;
};

class Init_TurtleArray_temperature
{
public:
  Init_TurtleArray_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleArray_are_motors_ready temperature(::finalprojectinterfaces::msg::TurtleArray::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_TurtleArray_are_motors_ready(msg_);
  }

private:
  ::finalprojectinterfaces::msg::TurtleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalprojectinterfaces::msg::TurtleArray>()
{
  return finalprojectinterfaces::msg::builder::Init_TurtleArray_temperature();
}

}  // namespace finalprojectinterfaces

#endif  // FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
