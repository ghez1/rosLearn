// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from finalprojectinterfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice
#ifndef FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "finalprojectinterfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "finalprojectinterfaces/msg/detail/turtle_array__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
bool cdr_serialize_finalprojectinterfaces__msg__TurtleArray(
  const finalprojectinterfaces__msg__TurtleArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
bool cdr_deserialize_finalprojectinterfaces__msg__TurtleArray(
  eprosima::fastcdr::Cdr &,
  finalprojectinterfaces__msg__TurtleArray * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
size_t get_serialized_size_finalprojectinterfaces__msg__TurtleArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
size_t max_serialized_size_finalprojectinterfaces__msg__TurtleArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
bool cdr_serialize_key_finalprojectinterfaces__msg__TurtleArray(
  const finalprojectinterfaces__msg__TurtleArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
size_t get_serialized_size_key_finalprojectinterfaces__msg__TurtleArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
size_t max_serialized_size_key_finalprojectinterfaces__msg__TurtleArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, finalprojectinterfaces, msg, TurtleArray)();

#ifdef __cplusplus
}
#endif

#endif  // FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
