// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from finalprojectinterfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "finalprojectinterfaces/msg/turtle.h"


#ifndef FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE__STRUCT_H_
#define FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'debug_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Turtle in the package finalprojectinterfaces.
typedef struct finalprojectinterfaces__msg__Turtle
{
  double temperature;
  bool are_motors_ready;
  rosidl_runtime_c__String debug_message;
} finalprojectinterfaces__msg__Turtle;

// Struct for a sequence of finalprojectinterfaces__msg__Turtle.
typedef struct finalprojectinterfaces__msg__Turtle__Sequence
{
  finalprojectinterfaces__msg__Turtle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalprojectinterfaces__msg__Turtle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE__STRUCT_H_
