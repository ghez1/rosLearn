// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from finalprojectinterfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "finalprojectinterfaces/msg/detail/turtle_array__functions.h"
#include "finalprojectinterfaces/msg/detail/turtle_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace finalprojectinterfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TurtleArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) finalprojectinterfaces::msg::TurtleArray(_init);
}

void TurtleArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<finalprojectinterfaces::msg::TurtleArray *>(message_memory);
  typed_message->~TurtleArray();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TurtleArray_message_member_array[3] = {
  {
    "temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(finalprojectinterfaces::msg::TurtleArray, temperature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "are_motors_ready",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(finalprojectinterfaces::msg::TurtleArray, are_motors_ready),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "debug_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(finalprojectinterfaces::msg::TurtleArray, debug_message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TurtleArray_message_members = {
  "finalprojectinterfaces::msg",  // message namespace
  "TurtleArray",  // message name
  3,  // number of fields
  sizeof(finalprojectinterfaces::msg::TurtleArray),
  false,  // has_any_key_member_
  TurtleArray_message_member_array,  // message members
  TurtleArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TurtleArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TurtleArray_message_members,
  get_message_typesupport_handle_function,
  &finalprojectinterfaces__msg__TurtleArray__get_type_hash,
  &finalprojectinterfaces__msg__TurtleArray__get_type_description,
  &finalprojectinterfaces__msg__TurtleArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace finalprojectinterfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<finalprojectinterfaces::msg::TurtleArray>()
{
  return &::finalprojectinterfaces::msg::rosidl_typesupport_introspection_cpp::TurtleArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, finalprojectinterfaces, msg, TurtleArray)() {
  return &::finalprojectinterfaces::msg::rosidl_typesupport_introspection_cpp::TurtleArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
