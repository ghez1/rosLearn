// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from finalprojectinterfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#include "finalprojectinterfaces/msg/detail/turtle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_finalprojectinterfaces
const rosidl_type_hash_t *
finalprojectinterfaces__msg__Turtle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x31, 0x11, 0x2e, 0xd9, 0xe0, 0xc1, 0x97,
      0x93, 0x83, 0x8e, 0xa8, 0x24, 0xf6, 0xf2, 0xa4,
      0x30, 0x08, 0xed, 0x81, 0x6c, 0xa1, 0xf0, 0x5b,
      0x8c, 0x6f, 0xf3, 0x8d, 0x08, 0xd0, 0x31, 0xd5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char finalprojectinterfaces__msg__Turtle__TYPE_NAME[] = "finalprojectinterfaces/msg/Turtle";

// Define type names, field names, and default values
static char finalprojectinterfaces__msg__Turtle__FIELD_NAME__temperature[] = "temperature";
static char finalprojectinterfaces__msg__Turtle__FIELD_NAME__are_motors_ready[] = "are_motors_ready";
static char finalprojectinterfaces__msg__Turtle__FIELD_NAME__debug_message[] = "debug_message";

static rosidl_runtime_c__type_description__Field finalprojectinterfaces__msg__Turtle__FIELDS[] = {
  {
    {finalprojectinterfaces__msg__Turtle__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__msg__Turtle__FIELD_NAME__are_motors_ready, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {finalprojectinterfaces__msg__Turtle__FIELD_NAME__debug_message, 13, 13},
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
finalprojectinterfaces__msg__Turtle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {finalprojectinterfaces__msg__Turtle__TYPE_NAME, 33, 33},
      {finalprojectinterfaces__msg__Turtle__FIELDS, 3, 3},
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
finalprojectinterfaces__msg__Turtle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {finalprojectinterfaces__msg__Turtle__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 62, 62},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
finalprojectinterfaces__msg__Turtle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *finalprojectinterfaces__msg__Turtle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
