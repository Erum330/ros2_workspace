// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from new_interfaces:msg/IotSensor.idl
// generated code does not contain a copyright notice

#include "new_interfaces/msg/detail/iot_sensor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_type_hash_t *
new_interfaces__msg__IotSensor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0xcf, 0x1e, 0x0d, 0xed, 0xe1, 0x3c, 0x40,
      0xfe, 0xab, 0x2e, 0xe5, 0xc6, 0x6f, 0x83, 0x6c,
      0xe5, 0xe6, 0x4f, 0xa3, 0xe0, 0x9b, 0xfc, 0x1b,
      0x80, 0xe6, 0xef, 0x9b, 0x5e, 0x5a, 0xf0, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char new_interfaces__msg__IotSensor__TYPE_NAME[] = "new_interfaces/msg/IotSensor";

// Define type names, field names, and default values
static char new_interfaces__msg__IotSensor__FIELD_NAME__name[] = "name";
static char new_interfaces__msg__IotSensor__FIELD_NAME__id[] = "id";
static char new_interfaces__msg__IotSensor__FIELD_NAME__humidity[] = "humidity";
static char new_interfaces__msg__IotSensor__FIELD_NAME__temperature[] = "temperature";

static rosidl_runtime_c__type_description__Field new_interfaces__msg__IotSensor__FIELDS[] = {
  {
    {new_interfaces__msg__IotSensor__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {new_interfaces__msg__IotSensor__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {new_interfaces__msg__IotSensor__FIELD_NAME__humidity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {new_interfaces__msg__IotSensor__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
new_interfaces__msg__IotSensor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {new_interfaces__msg__IotSensor__TYPE_NAME, 28, 28},
      {new_interfaces__msg__IotSensor__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "int32 id\n"
  "float64 humidity\n"
  "float64 temperature";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
new_interfaces__msg__IotSensor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {new_interfaces__msg__IotSensor__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 58, 58},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
new_interfaces__msg__IotSensor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *new_interfaces__msg__IotSensor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
