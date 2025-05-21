// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from finalprojectinterfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "finalprojectinterfaces/srv/detail/catch_turtle__struct.h"
#include "finalprojectinterfaces/srv/detail/catch_turtle__type_support.h"
#include "finalprojectinterfaces/srv/detail/catch_turtle__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace finalprojectinterfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CatchTurtle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CatchTurtle_Request_type_support_ids_t;

static const _CatchTurtle_Request_type_support_ids_t _CatchTurtle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CatchTurtle_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CatchTurtle_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CatchTurtle_Request_type_support_symbol_names_t _CatchTurtle_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, finalprojectinterfaces, srv, CatchTurtle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Request)),
  }
};

typedef struct _CatchTurtle_Request_type_support_data_t
{
  void * data[2];
} _CatchTurtle_Request_type_support_data_t;

static _CatchTurtle_Request_type_support_data_t _CatchTurtle_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CatchTurtle_Request_message_typesupport_map = {
  2,
  "finalprojectinterfaces",
  &_CatchTurtle_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CatchTurtle_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CatchTurtle_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CatchTurtle_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CatchTurtle_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &finalprojectinterfaces__srv__CatchTurtle_Request__get_type_hash,
  &finalprojectinterfaces__srv__CatchTurtle_Request__get_type_description,
  &finalprojectinterfaces__srv__CatchTurtle_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace finalprojectinterfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, finalprojectinterfaces, srv, CatchTurtle_Request)() {
  return &::finalprojectinterfaces::srv::rosidl_typesupport_c::CatchTurtle_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__struct.h"
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__type_support.h"
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace finalprojectinterfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CatchTurtle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CatchTurtle_Response_type_support_ids_t;

static const _CatchTurtle_Response_type_support_ids_t _CatchTurtle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CatchTurtle_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CatchTurtle_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CatchTurtle_Response_type_support_symbol_names_t _CatchTurtle_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, finalprojectinterfaces, srv, CatchTurtle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Response)),
  }
};

typedef struct _CatchTurtle_Response_type_support_data_t
{
  void * data[2];
} _CatchTurtle_Response_type_support_data_t;

static _CatchTurtle_Response_type_support_data_t _CatchTurtle_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CatchTurtle_Response_message_typesupport_map = {
  2,
  "finalprojectinterfaces",
  &_CatchTurtle_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CatchTurtle_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CatchTurtle_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CatchTurtle_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CatchTurtle_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &finalprojectinterfaces__srv__CatchTurtle_Response__get_type_hash,
  &finalprojectinterfaces__srv__CatchTurtle_Response__get_type_description,
  &finalprojectinterfaces__srv__CatchTurtle_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace finalprojectinterfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, finalprojectinterfaces, srv, CatchTurtle_Response)() {
  return &::finalprojectinterfaces::srv::rosidl_typesupport_c::CatchTurtle_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__struct.h"
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__type_support.h"
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace finalprojectinterfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CatchTurtle_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CatchTurtle_Event_type_support_ids_t;

static const _CatchTurtle_Event_type_support_ids_t _CatchTurtle_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CatchTurtle_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CatchTurtle_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CatchTurtle_Event_type_support_symbol_names_t _CatchTurtle_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, finalprojectinterfaces, srv, CatchTurtle_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle_Event)),
  }
};

typedef struct _CatchTurtle_Event_type_support_data_t
{
  void * data[2];
} _CatchTurtle_Event_type_support_data_t;

static _CatchTurtle_Event_type_support_data_t _CatchTurtle_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CatchTurtle_Event_message_typesupport_map = {
  2,
  "finalprojectinterfaces",
  &_CatchTurtle_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CatchTurtle_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CatchTurtle_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CatchTurtle_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CatchTurtle_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &finalprojectinterfaces__srv__CatchTurtle_Event__get_type_hash,
  &finalprojectinterfaces__srv__CatchTurtle_Event__get_type_description,
  &finalprojectinterfaces__srv__CatchTurtle_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace finalprojectinterfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, finalprojectinterfaces, srv, CatchTurtle_Event)() {
  return &::finalprojectinterfaces::srv::rosidl_typesupport_c::CatchTurtle_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "finalprojectinterfaces/srv/detail/catch_turtle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace finalprojectinterfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _CatchTurtle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CatchTurtle_type_support_ids_t;

static const _CatchTurtle_type_support_ids_t _CatchTurtle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CatchTurtle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CatchTurtle_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CatchTurtle_type_support_symbol_names_t _CatchTurtle_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, finalprojectinterfaces, srv, CatchTurtle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, finalprojectinterfaces, srv, CatchTurtle)),
  }
};

typedef struct _CatchTurtle_type_support_data_t
{
  void * data[2];
} _CatchTurtle_type_support_data_t;

static _CatchTurtle_type_support_data_t _CatchTurtle_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CatchTurtle_service_typesupport_map = {
  2,
  "finalprojectinterfaces",
  &_CatchTurtle_service_typesupport_ids.typesupport_identifier[0],
  &_CatchTurtle_service_typesupport_symbol_names.symbol_name[0],
  &_CatchTurtle_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CatchTurtle_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CatchTurtle_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &CatchTurtle_Request_message_type_support_handle,
  &CatchTurtle_Response_message_type_support_handle,
  &CatchTurtle_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace finalprojectinterfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, finalprojectinterfaces, srv, CatchTurtle)() {
  return &::finalprojectinterfaces::srv::rosidl_typesupport_c::CatchTurtle_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
