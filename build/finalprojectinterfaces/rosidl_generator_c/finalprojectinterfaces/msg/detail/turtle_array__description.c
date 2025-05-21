// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from finalprojectinterfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#include "finalprojectinterfaces/msg/detail/turtle_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_finalprojectinterfaces
const rosidl_type_hash_t *
finalprojectinterfaces__msg__TurtleArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0xaf, 0x0c, 0x69, 0xed, 0x29, 0x1e, 0xda,
      0x5c, 0x98, 0x02, 0xa3, 0x36, 0xd4, 0xd1, 0xea,
      0x25, 0x7e, 0xf9, 0xb8, 0x66, 0xcc, 0x2a, 0xb4,
      0xd3, 0x07, 0xf4, 0x8e, 0x9c, 0x30, 0x82, 0x43,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char finalprojectinterfaces__msg__TurtleArray__TYPE_NAME[] = "finalprojectinterfaces/msg/TurtleArray";

// Define type names, field names, and default values
static char finalprojectinterfaces__msg__TurtleArray__FIELD_NAME__temperature[] = "temperature";
static char finalprojectinterfaces__msg__TurtleArray__FIELD_NAME__are_motors_ready[] = "are_motors_ready";
static char finalprojectinterfaces__msg__TurtleArray__FIELD_NAME__debug_message[] = "debug_message";

static rosidl_runtime_c__type_description__Field finalprojectinterfaces__msg__TurtleArray__FIELDS[] = {
  {
    {finalprojectinterfaces__msg__TurtleArray__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__msg__TurtleArray__FIELD_NAME__are_motors_ready, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__msg__TurtleArray__FIELD_NAME__debug_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
finalprojectinterfaces__msg__TurtleArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {finalprojectinterfaces__msg__TurtleArray__TYPE_NAME, 38, 38},
      {finalprojectinterfaces__msg__TurtleArray__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 temperature\n"
  "bool are_motors_ready\n"
  "string debug_message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
finalprojectinterfaces__msg__TurtleArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {finalprojectinterfaces__msg__TurtleArray__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 62, 62},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
finalprojectinterfaces__msg__TurtleArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *finalprojectinterfaces__msg__TurtleArray__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
