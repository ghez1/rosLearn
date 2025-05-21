// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from finalprojectinterfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "finalprojectinterfaces/srv/catch_turtle.h"


#ifndef FINALPROJECTINTERFACES__SRV__DETAIL__CATCH_TURTLE__STRUCT_H_
#define FINALPROJECTINTERFACES__SRV__DETAIL__CATCH_TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CatchTurtle in the package finalprojectinterfaces.
typedef struct finalprojectinterfaces__srv__CatchTurtle_Request
{
  int64_t led_number;
  int64_t state;
} finalprojectinterfaces__srv__CatchTurtle_Request;

// Struct for a sequence of finalprojectinterfaces__srv__CatchTurtle_Request.
typedef struct finalprojectinterfaces__srv__CatchTurtle_Request__Sequence
{
  finalprojectinterfaces__srv__CatchTurtle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalprojectinterfaces__srv__CatchTurtle_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CatchTurtle in the package finalprojectinterfaces.
typedef struct finalprojectinterfaces__srv__CatchTurtle_Response
{
  bool success;
} finalprojectinterfaces__srv__CatchTurtle_Response;

// Struct for a sequence of finalprojectinterfaces__srv__CatchTurtle_Response.
typedef struct finalprojectinterfaces__srv__CatchTurtle_Response__Sequence
{
  finalprojectinterfaces__srv__CatchTurtle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalprojectinterfaces__srv__CatchTurtle_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  finalprojectinterfaces__srv__CatchTurtle_Event__request__MAX_SIZE = 1
};
// response
enum
{
  finalprojectinterfaces__srv__CatchTurtle_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CatchTurtle in the package finalprojectinterfaces.
typedef struct finalprojectinterfaces__srv__CatchTurtle_Event
{
  service_msgs__msg__ServiceEventInfo info;
  finalprojectinterfaces__srv__CatchTurtle_Request__Sequence request;
  finalprojectinterfaces__srv__CatchTurtle_Response__Sequence response;
} finalprojectinterfaces__srv__CatchTurtle_Event;

// Struct for a sequence of finalprojectinterfaces__srv__CatchTurtle_Event.
typedef struct finalprojectinterfaces__srv__CatchTurtle_Event__Sequence
{
  finalprojectinterfaces__srv__CatchTurtle_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} finalprojectinterfaces__srv__CatchTurtle_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FINALPROJECTINTERFACES__SRV__DETAIL__CATCH_TURTLE__STRUCT_H_
