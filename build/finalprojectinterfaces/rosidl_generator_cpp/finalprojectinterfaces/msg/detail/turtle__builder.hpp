// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from finalprojectinterfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "finalprojectinterfaces/msg/turtle.hpp"


#ifndef FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_
#define FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "finalprojectinterfaces/msg/detail/turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace finalprojectinterfaces
{

namespace msg
{

namespace builder
{

class Init_Turtle_debug_message
{
public:
  explicit Init_Turtle_debug_message(::finalprojectinterfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  ::finalprojectinterfaces::msg::Turtle debug_message(::finalprojectinterfaces::msg::Turtle::_debug_message_type arg)
  {
    msg_.debug_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalprojectinterfaces::msg::Turtle msg_;
};

class Init_Turtle_are_motors_ready
{
public:
  explicit Init_Turtle_are_motors_ready(::finalprojectinterfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_debug_message are_motors_ready(::finalprojectinterfaces::msg::Turtle::_are_motors_ready_type arg)
  {
    msg_.are_motors_ready = std::move(arg);
    return Init_Turtle_debug_message(msg_);
  }

private:
  ::finalprojectinterfaces::msg::Turtle msg_;
};

class Init_Turtle_temperature
{
public:
  Init_Turtle_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turtle_are_motors_ready temperature(::finalprojectinterfaces::msg::Turtle::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Turtle_are_motors_ready(msg_);
  }

private:
  ::finalprojectinterfaces::msg::Turtle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalprojectinterfaces::msg::Turtle>()
{
  return finalprojectinterfaces::msg::builder::Init_Turtle_temperature();
}

}  // namespace finalprojectinterfaces

#endif  // FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_
