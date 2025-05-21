// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from finalprojectinterfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "finalprojectinterfaces/msg/detail/turtle__rosidl_typesupport_introspection_c.h"
#include "finalprojectinterfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "finalprojectinterfaces/msg/detail/turtle__functions.h"
#include "finalprojectinterfaces/msg/detail/turtle__struct.h"


// Include directives for member types
// Member `debug_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void finalprojectinterfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  finalprojectinterfaces__msg__Turtle__init(message_memory);
}

void finalprojectinterfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_fini_function(void * message_memory)
{
  finalprojectinterfaces__msg__Turtle__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember finalprojectinterfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_member_array[3] = {
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(finalprojectinterfaces__msg__Turtle, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "are_motors_ready",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(finalprojectinterfaces__msg__Turtle, are_motors_ready),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "debug_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(finalprojectinterfaces__msg__Turtle, debug_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers finalprojectinterfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_members = {
  "finalprojectinterfaces__msg",  // message namespace
  "Turtle",  // message name
  3,  // number of fields
  sizeof(finalprojectinterfaces__msg__Turtle),
  false,  // has_any_key_member_
  finalprojectinterfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_member_array,  // message members
  finalprojectinterfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_init_function,  // function to initialize message memory (memory has to be allocated)
  finalprojectinterfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t finalprojectinterfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_type_support_handle = {
  0,
  &finalprojectinterfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_members,
  get_message_typesupport_handle_function,
  &finalprojectinterfaces__msg__Turtle__get_type_hash,
  &finalprojectinterfaces__msg__Turtle__get_type_description,
  &finalprojectinterfaces__msg__Turtle__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_finalprojectinterfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, msg, Turtle)() {
  if (!finalprojectinterfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_type_support_handle.typesupport_identifier) {
    finalprojectinterfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &finalprojectinterfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
