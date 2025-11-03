// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from new_interfaces:msg/IotSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "new_interfaces/msg/iot_sensor.hpp"


#ifndef NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__STRUCT_HPP_
#define NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__new_interfaces__msg__IotSensor __attribute__((deprecated))
#else
# define DEPRECATED__new_interfaces__msg__IotSensor __declspec(deprecated)
#endif

namespace new_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IotSensor_
{
  using Type = IotSensor_<ContainerAllocator>;

  explicit IotSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0l;
      this->humidity = 0.0;
      this->temperature = 0.0;
    }
  }

  explicit IotSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0l;
      this->humidity = 0.0;
      this->temperature = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _id_type =
    int32_t;
  _id_type id;
  using _humidity_type =
    double;
  _humidity_type humidity;
  using _temperature_type =
    double;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__humidity(
    const double & _arg)
  {
    this->humidity = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    new_interfaces::msg::IotSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const new_interfaces::msg::IotSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<new_interfaces::msg::IotSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<new_interfaces::msg::IotSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      new_interfaces::msg::IotSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<new_interfaces::msg::IotSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      new_interfaces::msg::IotSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<new_interfaces::msg::IotSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<new_interfaces::msg::IotSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<new_interfaces::msg::IotSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__new_interfaces__msg__IotSensor
    std::shared_ptr<new_interfaces::msg::IotSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__new_interfaces__msg__IotSensor
    std::shared_ptr<new_interfaces::msg::IotSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IotSensor_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->humidity != other.humidity) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const IotSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IotSensor_

// alias to use template instance with default allocator
using IotSensor =
  new_interfaces::msg::IotSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace new_interfaces

#endif  // NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__STRUCT_HPP_
