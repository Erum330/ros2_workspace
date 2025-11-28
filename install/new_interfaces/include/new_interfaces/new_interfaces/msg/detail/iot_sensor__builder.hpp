// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from new_interfaces:msg/IOTSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "new_interfaces/msg/iot_sensor.hpp"


#ifndef NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__BUILDER_HPP_
#define NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "new_interfaces/msg/detail/iot_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace new_interfaces
{

namespace msg
{

namespace builder
{

class Init_IOTSensor_humidity
{
public:
  explicit Init_IOTSensor_humidity(::new_interfaces::msg::IOTSensor & msg)
  : msg_(msg)
  {}
  ::new_interfaces::msg::IOTSensor humidity(::new_interfaces::msg::IOTSensor::_humidity_type arg)
  {
    msg_.humidity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::new_interfaces::msg::IOTSensor msg_;
};

class Init_IOTSensor_temperature
{
public:
  explicit Init_IOTSensor_temperature(::new_interfaces::msg::IOTSensor & msg)
  : msg_(msg)
  {}
  Init_IOTSensor_humidity temperature(::new_interfaces::msg::IOTSensor::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_IOTSensor_humidity(msg_);
  }

private:
  ::new_interfaces::msg::IOTSensor msg_;
};

class Init_IOTSensor_name
{
public:
  explicit Init_IOTSensor_name(::new_interfaces::msg::IOTSensor & msg)
  : msg_(msg)
  {}
  Init_IOTSensor_temperature name(::new_interfaces::msg::IOTSensor::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IOTSensor_temperature(msg_);
  }

private:
  ::new_interfaces::msg::IOTSensor msg_;
};

class Init_IOTSensor_id
{
public:
  Init_IOTSensor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IOTSensor_name id(::new_interfaces::msg::IOTSensor::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IOTSensor_name(msg_);
  }

private:
  ::new_interfaces::msg::IOTSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::new_interfaces::msg::IOTSensor>()
{
  return new_interfaces::msg::builder::Init_IOTSensor_id();
}

}  // namespace new_interfaces

#endif  // NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__BUILDER_HPP_
