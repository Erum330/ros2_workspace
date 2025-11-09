// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from new_interfaces:srv/RectangleArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "new_interfaces/srv/rectangle_area.hpp"


#ifndef NEW_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__STRUCT_HPP_
#define NEW_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__new_interfaces__srv__RectangleArea_Request __attribute__((deprecated))
#else
# define DEPRECATED__new_interfaces__srv__RectangleArea_Request __declspec(deprecated)
#endif

namespace new_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RectangleArea_Request_
{
  using Type = RectangleArea_Request_<ContainerAllocator>;

  explicit RectangleArea_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0f;
      this->width = 0.0f;
    }
  }

  explicit RectangleArea_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0f;
      this->width = 0.0f;
    }
  }

  // field types and members
  using _length_type =
    float;
  _length_type length;
  using _width_type =
    float;
  _width_type width;

  // setters for named parameter idiom
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    new_interfaces::srv::RectangleArea_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const new_interfaces::srv::RectangleArea_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<new_interfaces::srv::RectangleArea_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<new_interfaces::srv::RectangleArea_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      new_interfaces::srv::RectangleArea_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<new_interfaces::srv::RectangleArea_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      new_interfaces::srv::RectangleArea_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<new_interfaces::srv::RectangleArea_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<new_interfaces::srv::RectangleArea_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<new_interfaces::srv::RectangleArea_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__new_interfaces__srv__RectangleArea_Request
    std::shared_ptr<new_interfaces::srv::RectangleArea_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__new_interfaces__srv__RectangleArea_Request
    std::shared_ptr<new_interfaces::srv::RectangleArea_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RectangleArea_Request_ & other) const
  {
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    return true;
  }
  bool operator!=(const RectangleArea_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RectangleArea_Request_

// alias to use template instance with default allocator
using RectangleArea_Request =
  new_interfaces::srv::RectangleArea_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace new_interfaces


#ifndef _WIN32
# define DEPRECATED__new_interfaces__srv__RectangleArea_Response __attribute__((deprecated))
#else
# define DEPRECATED__new_interfaces__srv__RectangleArea_Response __declspec(deprecated)
#endif

namespace new_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RectangleArea_Response_
{
  using Type = RectangleArea_Response_<ContainerAllocator>;

  explicit RectangleArea_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0f;
    }
  }

  explicit RectangleArea_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0f;
    }
  }

  // field types and members
  using _area_type =
    float;
  _area_type area;

  // setters for named parameter idiom
  Type & set__area(
    const float & _arg)
  {
    this->area = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    new_interfaces::srv::RectangleArea_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const new_interfaces::srv::RectangleArea_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<new_interfaces::srv::RectangleArea_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<new_interfaces::srv::RectangleArea_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      new_interfaces::srv::RectangleArea_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<new_interfaces::srv::RectangleArea_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      new_interfaces::srv::RectangleArea_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<new_interfaces::srv::RectangleArea_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<new_interfaces::srv::RectangleArea_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<new_interfaces::srv::RectangleArea_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__new_interfaces__srv__RectangleArea_Response
    std::shared_ptr<new_interfaces::srv::RectangleArea_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__new_interfaces__srv__RectangleArea_Response
    std::shared_ptr<new_interfaces::srv::RectangleArea_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RectangleArea_Response_ & other) const
  {
    if (this->area != other.area) {
      return false;
    }
    return true;
  }
  bool operator!=(const RectangleArea_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RectangleArea_Response_

// alias to use template instance with default allocator
using RectangleArea_Response =
  new_interfaces::srv::RectangleArea_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace new_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__new_interfaces__srv__RectangleArea_Event __attribute__((deprecated))
#else
# define DEPRECATED__new_interfaces__srv__RectangleArea_Event __declspec(deprecated)
#endif

namespace new_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RectangleArea_Event_
{
  using Type = RectangleArea_Event_<ContainerAllocator>;

  explicit RectangleArea_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit RectangleArea_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<new_interfaces::srv::RectangleArea_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<new_interfaces::srv::RectangleArea_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<new_interfaces::srv::RectangleArea_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<new_interfaces::srv::RectangleArea_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<new_interfaces::srv::RectangleArea_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<new_interfaces::srv::RectangleArea_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<new_interfaces::srv::RectangleArea_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<new_interfaces::srv::RectangleArea_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    new_interfaces::srv::RectangleArea_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const new_interfaces::srv::RectangleArea_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<new_interfaces::srv::RectangleArea_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<new_interfaces::srv::RectangleArea_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      new_interfaces::srv::RectangleArea_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<new_interfaces::srv::RectangleArea_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      new_interfaces::srv::RectangleArea_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<new_interfaces::srv::RectangleArea_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<new_interfaces::srv::RectangleArea_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<new_interfaces::srv::RectangleArea_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__new_interfaces__srv__RectangleArea_Event
    std::shared_ptr<new_interfaces::srv::RectangleArea_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__new_interfaces__srv__RectangleArea_Event
    std::shared_ptr<new_interfaces::srv::RectangleArea_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RectangleArea_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const RectangleArea_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RectangleArea_Event_

// alias to use template instance with default allocator
using RectangleArea_Event =
  new_interfaces::srv::RectangleArea_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace new_interfaces

namespace new_interfaces
{

namespace srv
{

struct RectangleArea
{
  using Request = new_interfaces::srv::RectangleArea_Request;
  using Response = new_interfaces::srv::RectangleArea_Response;
  using Event = new_interfaces::srv::RectangleArea_Event;
};

}  // namespace srv

}  // namespace new_interfaces

#endif  // NEW_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__STRUCT_HPP_
