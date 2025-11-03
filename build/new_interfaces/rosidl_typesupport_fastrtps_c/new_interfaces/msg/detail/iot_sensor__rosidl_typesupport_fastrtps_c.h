// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from new_interfaces:msg/IotSensor.idl
// generated code does not contain a copyright notice
#ifndef NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "new_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "new_interfaces/msg/detail/iot_sensor__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_new_interfaces
bool cdr_serialize_new_interfaces__msg__IotSensor(
  const new_interfaces__msg__IotSensor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_new_interfaces
bool cdr_deserialize_new_interfaces__msg__IotSensor(
  eprosima::fastcdr::Cdr &,
  new_interfaces__msg__IotSensor * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_new_interfaces
size_t get_serialized_size_new_interfaces__msg__IotSensor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_new_interfaces
size_t max_serialized_size_new_interfaces__msg__IotSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_new_interfaces
bool cdr_serialize_key_new_interfaces__msg__IotSensor(
  const new_interfaces__msg__IotSensor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_new_interfaces
size_t get_serialized_size_key_new_interfaces__msg__IotSensor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_new_interfaces
size_t max_serialized_size_key_new_interfaces__msg__IotSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_new_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, new_interfaces, msg, IotSensor)();

#ifdef __cplusplus
}
#endif

#endif  // NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
