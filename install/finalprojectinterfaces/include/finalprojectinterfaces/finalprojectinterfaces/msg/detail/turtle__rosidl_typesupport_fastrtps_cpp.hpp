// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from finalprojectinterfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "finalprojectinterfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "finalprojectinterfaces/msg/detail/turtle__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace finalprojectinterfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_finalprojectinterfaces
cdr_serialize(
  const finalprojectinterfaces::msg::Turtle & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_finalprojectinterfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  finalprojectinterfaces::msg::Turtle & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_finalprojectinterfaces
get_serialized_size(
  const finalprojectinterfaces::msg::Turtle & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_finalprojectinterfaces
max_serialized_size_Turtle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_finalprojectinterfaces
cdr_serialize_key(
  const finalprojectinterfaces::msg::Turtle & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_finalprojectinterfaces
get_serialized_size_key(
  const finalprojectinterfaces::msg::Turtle & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_finalprojectinterfaces
max_serialized_size_key_Turtle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace finalprojectinterfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_finalprojectinterfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, finalprojectinterfaces, msg, Turtle)();

#ifdef __cplusplus
}
#endif

#endif  // FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
