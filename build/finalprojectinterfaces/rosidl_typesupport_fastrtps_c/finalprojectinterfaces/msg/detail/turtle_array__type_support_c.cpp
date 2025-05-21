// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from finalprojectinterfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice
#include "finalprojectinterfaces/msg/detail/turtle_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "finalprojectinterfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "finalprojectinterfaces/msg/detail/turtle_array__struct.h"
#include "finalprojectinterfaces/msg/detail/turtle_array__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // debug_message
#include "rosidl_runtime_c/string_functions.h"  // debug_message

// forward declare type support functions


using _TurtleArray__ros_msg_type = finalprojectinterfaces__msg__TurtleArray;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
bool cdr_serialize_finalprojectinterfaces__msg__TurtleArray(
  const finalprojectinterfaces__msg__TurtleArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: are_motors_ready
  {
    cdr << (ros_message->are_motors_ready ? true : false);
  }

  // Field name: debug_message
  {
    const rosidl_runtime_c__String * str = &ros_message->debug_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
bool cdr_deserialize_finalprojectinterfaces__msg__TurtleArray(
  eprosima::fastcdr::Cdr & cdr,
  finalprojectinterfaces__msg__TurtleArray * ros_message)
{
  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: are_motors_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->are_motors_ready = tmp ? true : false;
  }

  // Field name: debug_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->debug_message.data) {
      rosidl_runtime_c__String__init(&ros_message->debug_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->debug_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'debug_message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
size_t get_serialized_size_finalprojectinterfaces__msg__TurtleArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TurtleArray__ros_msg_type * ros_message = static_cast<const _TurtleArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: are_motors_ready
  {
    size_t item_size = sizeof(ros_message->are_motors_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: debug_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->debug_message.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
size_t max_serialized_size_finalprojectinterfaces__msg__TurtleArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: are_motors_ready
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: debug_message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = finalprojectinterfaces__msg__TurtleArray;
    is_plain =
      (
      offsetof(DataType, debug_message) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
bool cdr_serialize_key_finalprojectinterfaces__msg__TurtleArray(
  const finalprojectinterfaces__msg__TurtleArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: are_motors_ready
  {
    cdr << (ros_message->are_motors_ready ? true : false);
  }

  // Field name: debug_message
  {
    const rosidl_runtime_c__String * str = &ros_message->debug_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
size_t get_serialized_size_key_finalprojectinterfaces__msg__TurtleArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TurtleArray__ros_msg_type * ros_message = static_cast<const _TurtleArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: are_motors_ready
  {
    size_t item_size = sizeof(ros_message->are_motors_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: debug_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->debug_message.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_finalprojectinterfaces
size_t max_serialized_size_key_finalprojectinterfaces__msg__TurtleArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: are_motors_ready
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: debug_message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = finalprojectinterfaces__msg__TurtleArray;
    is_plain =
      (
      offsetof(DataType, debug_message) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TurtleArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const finalprojectinterfaces__msg__TurtleArray * ros_message = static_cast<const finalprojectinterfaces__msg__TurtleArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_finalprojectinterfaces__msg__TurtleArray(ros_message, cdr);
}

static bool _TurtleArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  finalprojectinterfaces__msg__TurtleArray * ros_message = static_cast<finalprojectinterfaces__msg__TurtleArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_finalprojectinterfaces__msg__TurtleArray(cdr, ros_message);
}

static uint32_t _TurtleArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_finalprojectinterfaces__msg__TurtleArray(
      untyped_ros_message, 0));
}

static size_t _TurtleArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_finalprojectinterfaces__msg__TurtleArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TurtleArray = {
  "finalprojectinterfaces::msg",
  "TurtleArray",
  _TurtleArray__cdr_serialize,
  _TurtleArray__cdr_deserialize,
  _TurtleArray__get_serialized_size,
  _TurtleArray__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TurtleArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TurtleArray,
  get_message_typesupport_handle_function,
  &finalprojectinterfaces__msg__TurtleArray__get_type_hash,
  &finalprojectinterfaces__msg__TurtleArray__get_type_description,
  &finalprojectinterfaces__msg__TurtleArray__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, finalprojectinterfaces, msg, TurtleArray)() {
  return &_TurtleArray__type_support;
}

#if defined(__cplusplus)
}
#endif
