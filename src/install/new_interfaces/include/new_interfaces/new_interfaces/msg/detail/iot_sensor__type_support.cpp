// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from new_interfaces:msg/IOTSensor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "new_interfaces/msg/detail/iot_sensor__functions.h"
#include "new_interfaces/msg/detail/iot_sensor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace new_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void IOTSensor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) new_interfaces::msg::IOTSensor(_init);
}

void IOTSensor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<new_interfaces::msg::IOTSensor *>(message_memory);
  typed_message->~IOTSensor();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IOTSensor_message_member_array[4] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(new_interfaces::msg::IOTSensor, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(new_interfaces::msg::IOTSensor, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(new_interfaces::msg::IOTSensor, temperature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "humidity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(new_interfaces::msg::IOTSensor, humidity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IOTSensor_message_members = {
  "new_interfaces::msg",  // message namespace
  "IOTSensor",  // message name
  4,  // number of fields
  sizeof(new_interfaces::msg::IOTSensor),
  false,  // has_any_key_member_
  IOTSensor_message_member_array,  // message members
  IOTSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  IOTSensor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IOTSensor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IOTSensor_message_members,
  get_message_typesupport_handle_function,
  &new_interfaces__msg__IOTSensor__get_type_hash,
  &new_interfaces__msg__IOTSensor__get_type_description,
  &new_interfaces__msg__IOTSensor__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace new_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<new_interfaces::msg::IOTSensor>()
{
  return &::new_interfaces::msg::rosidl_typesupport_introspection_cpp::IOTSensor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, new_interfaces, msg, IOTSensor)() {
  return &::new_interfaces::msg::rosidl_typesupport_introspection_cpp::IOTSensor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
