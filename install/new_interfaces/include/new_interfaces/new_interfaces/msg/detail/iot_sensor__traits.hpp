// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from new_interfaces:msg/IOTSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "new_interfaces/msg/iot_sensor.hpp"


#ifndef NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__TRAITS_HPP_
#define NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "new_interfaces/msg/detail/iot_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace new_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IOTSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: humidity
  {
    out << "humidity: ";
    rosidl_generator_traits::value_to_yaml(msg.humidity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IOTSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: humidity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "humidity: ";
    rosidl_generator_traits::value_to_yaml(msg.humidity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IOTSensor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace new_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use new_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const new_interfaces::msg::IOTSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  new_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use new_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const new_interfaces::msg::IOTSensor & msg)
{
  return new_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<new_interfaces::msg::IOTSensor>()
{
  return "new_interfaces::msg::IOTSensor";
}

template<>
inline const char * name<new_interfaces::msg::IOTSensor>()
{
  return "new_interfaces/msg/IOTSensor";
}

template<>
struct has_fixed_size<new_interfaces::msg::IOTSensor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<new_interfaces::msg::IOTSensor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<new_interfaces::msg::IOTSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__TRAITS_HPP_
