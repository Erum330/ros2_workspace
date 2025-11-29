// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from new_interfaces:msg/IOTSensor.idl
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
# define DEPRECATED__new_interfaces__msg__IOTSensor __attribute__((deprecated))
#else
# define DEPRECATED__new_interfaces__msg__IOTSensor __declspec(deprecated)
#endif

namespace new_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IOTSensor_
{
  using Type = IOTSensor_<ContainerAllocator>;

  explicit IOTSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->name = "";
      this->temperature = 0.0f;
      this->humidity = 0.0f;
    }
  }

  explicit IOTSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->name = "";
      this->temperature = 0.0f;
      this->humidity = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _humidity_type =
    float;
  _humidity_type humidity;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__humidity(
    const float & _arg)
  {
    this->humidity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    new_interfaces::msg::IOTSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const new_interfaces::msg::IOTSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<new_interfaces::msg::IOTSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<new_interfaces::msg::IOTSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      new_interfaces::msg::IOTSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<new_interfaces::msg::IOTSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      new_interfaces::msg::IOTSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<new_interfaces::msg::IOTSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<new_interfaces::msg::IOTSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<new_interfaces::msg::IOTSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__new_interfaces__msg__IOTSensor
    std::shared_ptr<new_interfaces::msg::IOTSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__new_interfaces__msg__IOTSensor
    std::shared_ptr<new_interfaces::msg::IOTSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IOTSensor_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->humidity != other.humidity) {
      return false;
    }
    return true;
  }
  bool operator!=(const IOTSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IOTSensor_

// alias to use template instance with default allocator
using IOTSensor =
  new_interfaces::msg::IOTSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace new_interfaces

#endif  // NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__STRUCT_HPP_
