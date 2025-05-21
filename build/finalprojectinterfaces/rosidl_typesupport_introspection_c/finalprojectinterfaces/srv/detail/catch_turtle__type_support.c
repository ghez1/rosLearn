// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from finalprojectinterfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "finalprojectinterfaces/srv/detail/catch_turtle__rosidl_typesupport_introspection_c.h"
#include "finalprojectinterfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "finalprojectinterfaces/srv/detail/catch_turtle__functions.h"
#include "finalprojectinterfaces/srv/detail/catch_turtle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  finalprojectinterfaces__srv__CatchTurtle_Request__init(message_memory);
}

void finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_fini_function(void * message_memory)
{
  finalprojectinterfaces__srv__CatchTurtle_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_member_array[2] = {
  {
    "led_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(finalprojectinterfaces__srv__CatchTurtle_Request, led_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(finalprojectinterfaces__srv__CatchTurtle_Request, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_members = {
  "finalprojectinterfaces__srv",  // message namespace
  "CatchTurtle_Request",  // message name
  2,  // number of fields
  sizeof(finalprojectinterfaces__srv__CatchTurtle_Request),
  false,  // has_any_key_member_
  finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_member_array,  // message members
  finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_type_support_handle = {
  0,
  &finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_members,
  get_message_typesupport_handle_function,
  &finalprojectinterfaces__srv__CatchTurtle_Request__get_type_hash,
  &finalprojectinterfaces__srv__CatchTurtle_Request__get_type_description,
  &finalprojectinterfaces__srv__CatchTurtle_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_finalprojectinterfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Request)() {
  if (!finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_type_support_handle.typesupport_identifier) {
    finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "finalprojectinterfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__functions.h"
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  finalprojectinterfaces__srv__CatchTurtle_Response__init(message_memory);
}

void finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_fini_function(void * message_memory)
{
  finalprojectinterfaces__srv__CatchTurtle_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(finalprojectinterfaces__srv__CatchTurtle_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_members = {
  "finalprojectinterfaces__srv",  // message namespace
  "CatchTurtle_Response",  // message name
  1,  // number of fields
  sizeof(finalprojectinterfaces__srv__CatchTurtle_Response),
  false,  // has_any_key_member_
  finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_member_array,  // message members
  finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_type_support_handle = {
  0,
  &finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_members,
  get_message_typesupport_handle_function,
  &finalprojectinterfaces__srv__CatchTurtle_Response__get_type_hash,
  &finalprojectinterfaces__srv__CatchTurtle_Response__get_type_description,
  &finalprojectinterfaces__srv__CatchTurtle_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_finalprojectinterfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Response)() {
  if (!finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_type_support_handle.typesupport_identifier) {
    finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "finalprojectinterfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__functions.h"
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "finalprojectinterfaces/srv/catch_turtle.h"
// Member `request`
// Member `response`
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  finalprojectinterfaces__srv__CatchTurtle_Event__init(message_memory);
}

void finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_fini_function(void * message_memory)
{
  finalprojectinterfaces__srv__CatchTurtle_Event__fini(message_memory);
}

size_t finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__size_function__CatchTurtle_Event__request(
  const void * untyped_member)
{
  const finalprojectinterfaces__srv__CatchTurtle_Request__Sequence * member =
    (const finalprojectinterfaces__srv__CatchTurtle_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__get_const_function__CatchTurtle_Event__request(
  const void * untyped_member, size_t index)
{
  const finalprojectinterfaces__srv__CatchTurtle_Request__Sequence * member =
    (const finalprojectinterfaces__srv__CatchTurtle_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__get_function__CatchTurtle_Event__request(
  void * untyped_member, size_t index)
{
  finalprojectinterfaces__srv__CatchTurtle_Request__Sequence * member =
    (finalprojectinterfaces__srv__CatchTurtle_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__fetch_function__CatchTurtle_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const finalprojectinterfaces__srv__CatchTurtle_Request * item =
    ((const finalprojectinterfaces__srv__CatchTurtle_Request *)
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__get_const_function__CatchTurtle_Event__request(untyped_member, index));
  finalprojectinterfaces__srv__CatchTurtle_Request * value =
    (finalprojectinterfaces__srv__CatchTurtle_Request *)(untyped_value);
  *value = *item;
}

void finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__assign_function__CatchTurtle_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  finalprojectinterfaces__srv__CatchTurtle_Request * item =
    ((finalprojectinterfaces__srv__CatchTurtle_Request *)
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__get_function__CatchTurtle_Event__request(untyped_member, index));
  const finalprojectinterfaces__srv__CatchTurtle_Request * value =
    (const finalprojectinterfaces__srv__CatchTurtle_Request *)(untyped_value);
  *item = *value;
}

bool finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__resize_function__CatchTurtle_Event__request(
  void * untyped_member, size_t size)
{
  finalprojectinterfaces__srv__CatchTurtle_Request__Sequence * member =
    (finalprojectinterfaces__srv__CatchTurtle_Request__Sequence *)(untyped_member);
  finalprojectinterfaces__srv__CatchTurtle_Request__Sequence__fini(member);
  return finalprojectinterfaces__srv__CatchTurtle_Request__Sequence__init(member, size);
}

size_t finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__size_function__CatchTurtle_Event__response(
  const void * untyped_member)
{
  const finalprojectinterfaces__srv__CatchTurtle_Response__Sequence * member =
    (const finalprojectinterfaces__srv__CatchTurtle_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__get_const_function__CatchTurtle_Event__response(
  const void * untyped_member, size_t index)
{
  const finalprojectinterfaces__srv__CatchTurtle_Response__Sequence * member =
    (const finalprojectinterfaces__srv__CatchTurtle_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__get_function__CatchTurtle_Event__response(
  void * untyped_member, size_t index)
{
  finalprojectinterfaces__srv__CatchTurtle_Response__Sequence * member =
    (finalprojectinterfaces__srv__CatchTurtle_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__fetch_function__CatchTurtle_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const finalprojectinterfaces__srv__CatchTurtle_Response * item =
    ((const finalprojectinterfaces__srv__CatchTurtle_Response *)
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__get_const_function__CatchTurtle_Event__response(untyped_member, index));
  finalprojectinterfaces__srv__CatchTurtle_Response * value =
    (finalprojectinterfaces__srv__CatchTurtle_Response *)(untyped_value);
  *value = *item;
}

void finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__assign_function__CatchTurtle_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  finalprojectinterfaces__srv__CatchTurtle_Response * item =
    ((finalprojectinterfaces__srv__CatchTurtle_Response *)
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__get_function__CatchTurtle_Event__response(untyped_member, index));
  const finalprojectinterfaces__srv__CatchTurtle_Response * value =
    (const finalprojectinterfaces__srv__CatchTurtle_Response *)(untyped_value);
  *item = *value;
}

bool finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__resize_function__CatchTurtle_Event__response(
  void * untyped_member, size_t size)
{
  finalprojectinterfaces__srv__CatchTurtle_Response__Sequence * member =
    (finalprojectinterfaces__srv__CatchTurtle_Response__Sequence *)(untyped_member);
  finalprojectinterfaces__srv__CatchTurtle_Response__Sequence__fini(member);
  return finalprojectinterfaces__srv__CatchTurtle_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(finalprojectinterfaces__srv__CatchTurtle_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(finalprojectinterfaces__srv__CatchTurtle_Event, request),  // bytes offset in struct
    NULL,  // default value
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__size_function__CatchTurtle_Event__request,  // size() function pointer
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__get_const_function__CatchTurtle_Event__request,  // get_const(index) function pointer
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__get_function__CatchTurtle_Event__request,  // get(index) function pointer
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__fetch_function__CatchTurtle_Event__request,  // fetch(index, &value) function pointer
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__assign_function__CatchTurtle_Event__request,  // assign(index, value) function pointer
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__resize_function__CatchTurtle_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(finalprojectinterfaces__srv__CatchTurtle_Event, response),  // bytes offset in struct
    NULL,  // default value
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__size_function__CatchTurtle_Event__response,  // size() function pointer
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__get_const_function__CatchTurtle_Event__response,  // get_const(index) function pointer
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__get_function__CatchTurtle_Event__response,  // get(index) function pointer
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__fetch_function__CatchTurtle_Event__response,  // fetch(index, &value) function pointer
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__assign_function__CatchTurtle_Event__response,  // assign(index, value) function pointer
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__resize_function__CatchTurtle_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_message_members = {
  "finalprojectinterfaces__srv",  // message namespace
  "CatchTurtle_Event",  // message name
  3,  // number of fields
  sizeof(finalprojectinterfaces__srv__CatchTurtle_Event),
  false,  // has_any_key_member_
  finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_message_member_array,  // message members
  finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_message_type_support_handle = {
  0,
  &finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_message_members,
  get_message_typesupport_handle_function,
  &finalprojectinterfaces__srv__CatchTurtle_Event__get_type_hash,
  &finalprojectinterfaces__srv__CatchTurtle_Event__get_type_description,
  &finalprojectinterfaces__srv__CatchTurtle_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_finalprojectinterfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Event)() {
  finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Request)();
  finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Response)();
  if (!finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_message_type_support_handle.typesupport_identifier) {
    finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "finalprojectinterfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers finalprojectinterfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_members = {
  "finalprojectinterfaces__srv",  // service namespace
  "CatchTurtle",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // finalprojectinterfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_type_support_handle,
  NULL,  // response message
  // finalprojectinterfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_type_support_handle
  NULL  // event_message
  // finalprojectinterfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_type_support_handle
};


static rosidl_service_type_support_t finalprojectinterfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_type_support_handle = {
  0,
  &finalprojectinterfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_members,
  get_service_typesupport_handle_function,
  &finalprojectinterfaces__srv__CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_type_support_handle,
  &finalprojectinterfaces__srv__CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_type_support_handle,
  &finalprojectinterfaces__srv__CatchTurtle_Event__rosidl_typesupport_introspection_c__CatchTurtle_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    finalprojectinterfaces,
    srv,
    CatchTurtle
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    finalprojectinterfaces,
    srv,
    CatchTurtle
  ),
  &finalprojectinterfaces__srv__CatchTurtle__get_type_hash,
  &finalprojectinterfaces__srv__CatchTurtle__get_type_description,
  &finalprojectinterfaces__srv__CatchTurtle__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_finalprojectinterfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle)(void) {
  if (!finalprojectinterfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_type_support_handle.typesupport_identifier) {
    finalprojectinterfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)finalprojectinterfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Event)()->data;
  }

  return &finalprojectinterfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_type_support_handle;
}
