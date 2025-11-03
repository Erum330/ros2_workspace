// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from new_interfaces:msg/IotSensor.idl
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

class Init_IotSensor_temperature
{
public:
  explicit Init_IotSensor_temperature(::new_interfaces::msg::IotSensor & msg)
  : msg_(msg)
  {}
  ::new_interfaces::msg::IotSensor temperature(::new_interfaces::msg::IotSensor::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::new_interfaces::msg::IotSensor msg_;
};

class Init_IotSensor_humidity
{
public:
  explicit Init_IotSensor_humidity(::new_interfaces::msg::IotSensor & msg)
  : msg_(msg)
  {}
  Init_IotSensor_temperature humidity(::new_interfaces::msg::IotSensor::_humidity_type arg)
  {
    msg_.humidity = std::move(arg);
    return Init_IotSensor_temperature(msg_);
  }

private:
  ::new_interfaces::msg::IotSensor msg_;
};

class Init_IotSensor_id
{
public:
  explicit Init_IotSensor_id(::new_interfaces::msg::IotSensor & msg)
  : msg_(msg)
  {}
  Init_IotSensor_humidity id(::new_interfaces::msg::IotSensor::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IotSensor_humidity(msg_);
  }

private:
  ::new_interfaces::msg::IotSensor msg_;
};

class Init_IotSensor_name
{
public:
  Init_IotSensor_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IotSensor_id name(::new_interfaces::msg::IotSensor::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IotSensor_id(msg_);
  }

private:
  ::new_interfaces::msg::IotSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::new_interfaces::msg::IotSensor>()
{
  return new_interfaces::msg::builder::Init_IotSensor_name();
}

}  // namespace new_interfaces

#endif  // NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__BUILDER_HPP_
