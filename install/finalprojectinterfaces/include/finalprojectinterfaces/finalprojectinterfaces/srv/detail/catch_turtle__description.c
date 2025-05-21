// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from finalprojectinterfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#include "finalprojectinterfaces/srv/detail/catch_turtle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_finalprojectinterfaces
const rosidl_type_hash_t *
finalprojectinterfaces__srv__CatchTurtle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0x88, 0xbc, 0x50, 0x05, 0x14, 0xdf, 0xdb,
      0xbd, 0x7a, 0xc7, 0x2c, 0xde, 0x03, 0xd1, 0x9c,
      0x90, 0xc9, 0x87, 0x53, 0x4a, 0x66, 0x64, 0x42,
      0xb4, 0x37, 0xca, 0xa6, 0x88, 0x68, 0x97, 0xcc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_finalprojectinterfaces
const rosidl_type_hash_t *
finalprojectinterfaces__srv__CatchTurtle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0x43, 0xb7, 0xe0, 0x93, 0x41, 0x89, 0x5d,
      0xeb, 0x80, 0x24, 0xc7, 0x27, 0x22, 0x25, 0x3a,
      0x7f, 0xaf, 0x70, 0x6d, 0x9e, 0xee, 0xe3, 0xfe,
      0xa6, 0x7b, 0xf2, 0xad, 0x51, 0x47, 0x73, 0x96,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_finalprojectinterfaces
const rosidl_type_hash_t *
finalprojectinterfaces__srv__CatchTurtle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xe5, 0x81, 0xd8, 0xce, 0x96, 0x6a, 0x2c,
      0xa0, 0x77, 0xb9, 0x29, 0x87, 0xe8, 0x4b, 0x5a,
      0xa0, 0x8a, 0x8b, 0x97, 0xae, 0x05, 0xd9, 0x64,
      0xd7, 0x28, 0x8a, 0x76, 0xef, 0xed, 0xfb, 0x93,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_finalprojectinterfaces
const rosidl_type_hash_t *
finalprojectinterfaces__srv__CatchTurtle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0x9f, 0xee, 0xb2, 0x92, 0xf7, 0x7b, 0x8c,
      0xf9, 0x1c, 0xf8, 0xcf, 0x20, 0xc7, 0x31, 0xcd,
      0x06, 0xc5, 0xc4, 0xb3, 0x9e, 0x78, 0xcf, 0x8c,
      0xfa, 0x6c, 0x0d, 0x13, 0x6c, 0xbb, 0x60, 0x6d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char finalprojectinterfaces__srv__CatchTurtle__TYPE_NAME[] = "finalprojectinterfaces/srv/CatchTurtle";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char finalprojectinterfaces__srv__CatchTurtle_Event__TYPE_NAME[] = "finalprojectinterfaces/srv/CatchTurtle_Event";
static char finalprojectinterfaces__srv__CatchTurtle_Request__TYPE_NAME[] = "finalprojectinterfaces/srv/CatchTurtle_Request";
static char finalprojectinterfaces__srv__CatchTurtle_Response__TYPE_NAME[] = "finalprojectinterfaces/srv/CatchTurtle_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char finalprojectinterfaces__srv__CatchTurtle__FIELD_NAME__request_message[] = "request_message";
static char finalprojectinterfaces__srv__CatchTurtle__FIELD_NAME__response_message[] = "response_message";
static char finalprojectinterfaces__srv__CatchTurtle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field finalprojectinterfaces__srv__CatchTurtle__FIELDS[] = {
  {
    {finalprojectinterfaces__srv__CatchTurtle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {finalprojectinterfaces__srv__CatchTurtle_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__srv__CatchTurtle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {finalprojectinterfaces__srv__CatchTurtle_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__srv__CatchTurtle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {finalprojectinterfaces__srv__CatchTurtle_Event__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription finalprojectinterfaces__srv__CatchTurtle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__srv__CatchTurtle_Event__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__srv__CatchTurtle_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__srv__CatchTurtle_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
finalprojectinterfaces__srv__CatchTurtle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {finalprojectinterfaces__srv__CatchTurtle__TYPE_NAME, 38, 38},
      {finalprojectinterfaces__srv__CatchTurtle__FIELDS, 3, 3},
    },
    {finalprojectinterfaces__srv__CatchTurtle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = finalprojectinterfaces__srv__CatchTurtle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = finalprojectinterfaces__srv__CatchTurtle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = finalprojectinterfaces__srv__CatchTurtle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char finalprojectinterfaces__srv__CatchTurtle_Request__FIELD_NAME__led_number[] = "led_number";
static char finalprojectinterfaces__srv__CatchTurtle_Request__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field finalprojectinterfaces__srv__CatchTurtle_Request__FIELDS[] = {
  {
    {finalprojectinterfaces__srv__CatchTurtle_Request__FIELD_NAME__led_number, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__srv__CatchTurtle_Request__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
finalprojectinterfaces__srv__CatchTurtle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {finalprojectinterfaces__srv__CatchTurtle_Request__TYPE_NAME, 46, 46},
      {finalprojectinterfaces__srv__CatchTurtle_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char finalprojectinterfaces__srv__CatchTurtle_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field finalprojectinterfaces__srv__CatchTurtle_Response__FIELDS[] = {
  {
    {finalprojectinterfaces__srv__CatchTurtle_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
finalprojectinterfaces__srv__CatchTurtle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {finalprojectinterfaces__srv__CatchTurtle_Response__TYPE_NAME, 47, 47},
      {finalprojectinterfaces__srv__CatchTurtle_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char finalprojectinterfaces__srv__CatchTurtle_Event__FIELD_NAME__info[] = "info";
static char finalprojectinterfaces__srv__CatchTurtle_Event__FIELD_NAME__request[] = "request";
static char finalprojectinterfaces__srv__CatchTurtle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field finalprojectinterfaces__srv__CatchTurtle_Event__FIELDS[] = {
  {
    {finalprojectinterfaces__srv__CatchTurtle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__srv__CatchTurtle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {finalprojectinterfaces__srv__CatchTurtle_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__srv__CatchTurtle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {finalprojectinterfaces__srv__CatchTurtle_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription finalprojectinterfaces__srv__CatchTurtle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__srv__CatchTurtle_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__srv__CatchTurtle_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
finalprojectinterfaces__srv__CatchTurtle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {finalprojectinterfaces__srv__CatchTurtle_Event__TYPE_NAME, 44, 44},
      {finalprojectinterfaces__srv__CatchTurtle_Event__FIELDS, 3, 3},
    },
    {finalprojectinterfaces__srv__CatchTurtle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = finalprojectinterfaces__srv__CatchTurtle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = finalprojectinterfaces__srv__CatchTurtle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 led_number\n"
  "int64 state\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
finalprojectinterfaces__srv__CatchTurtle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {finalprojectinterfaces__srv__CatchTurtle__TYPE_NAME, 38, 38},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
finalprojectinterfaces__srv__CatchTurtle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {finalprojectinterfaces__srv__CatchTurtle_Request__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
finalprojectinterfaces__srv__CatchTurtle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {finalprojectinterfaces__srv__CatchTurtle_Response__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
finalprojectinterfaces__srv__CatchTurtle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {finalprojectinterfaces__srv__CatchTurtle_Event__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
finalprojectinterfaces__srv__CatchTurtle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *finalprojectinterfaces__srv__CatchTurtle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *finalprojectinterfaces__srv__CatchTurtle_Event__get_individual_type_description_source(NULL);
    sources[3] = *finalprojectinterfaces__srv__CatchTurtle_Request__get_individual_type_description_source(NULL);
    sources[4] = *finalprojectinterfaces__srv__CatchTurtle_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
finalprojectinterfaces__srv__CatchTurtle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *finalprojectinterfaces__srv__CatchTurtle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
finalprojectinterfaces__srv__CatchTurtle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *finalprojectinterfaces__srv__CatchTurtle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
finalprojectinterfaces__srv__CatchTurtle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *finalprojectinterfaces__srv__CatchTurtle_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *finalprojectinterfaces__srv__CatchTurtle_Request__get_individual_type_description_source(NULL);
    sources[3] = *finalprojectinterfaces__srv__CatchTurtle_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
