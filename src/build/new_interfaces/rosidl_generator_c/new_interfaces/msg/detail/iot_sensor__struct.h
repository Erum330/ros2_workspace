// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from new_interfaces:msg/IOTSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "new_interfaces/msg/iot_sensor.h"


#ifndef NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__STRUCT_H_
#define NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/IOTSensor in the package new_interfaces.
typedef struct new_interfaces__msg__IOTSensor
{
  int32_t id;
  rosidl_runtime_c__String name;
  float temperature;
  float humidity;
} new_interfaces__msg__IOTSensor;

// Struct for a sequence of new_interfaces__msg__IOTSensor.
typedef struct new_interfaces__msg__IOTSensor__Sequence
{
  new_interfaces__msg__IOTSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} new_interfaces__msg__IOTSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__STRUCT_H_
