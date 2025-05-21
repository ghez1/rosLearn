// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from finalprojectinterfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "finalprojectinterfaces/msg/turtle_array.hpp"


#ifndef FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_
#define FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "finalprojectinterfaces/msg/detail/turtle_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace finalprojectinterfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TurtleArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: are_motors_ready
  {
    out << "are_motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.are_motors_ready, out);
    out << ", ";
  }

  // member: debug_message
  {
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: are_motors_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "are_motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.are_motors_ready, out);
    out << "\n";
  }

  // member: debug_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace finalprojectinterfaces

namespace rosidl_generator_traits
{

[[deprecated("use finalprojectinterfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const finalprojectinterfaces::msg::TurtleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  finalprojectinterfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use finalprojectinterfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const finalprojectinterfaces::msg::TurtleArray & msg)
{
  return finalprojectinterfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<finalprojectinterfaces::msg::TurtleArray>()
{
  return "finalprojectinterfaces::msg::TurtleArray";
}

template<>
inline const char * name<finalprojectinterfaces::msg::TurtleArray>()
{
  return "finalprojectinterfaces/msg/TurtleArray";
}

template<>
struct has_fixed_size<finalprojectinterfaces::msg::TurtleArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<finalprojectinterfaces::msg::TurtleArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<finalprojectinterfaces::msg::TurtleArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_
