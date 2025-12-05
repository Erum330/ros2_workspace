// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from new_interfaces:srv/RectangleArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "new_interfaces/srv/rectangle_area.hpp"


#ifndef NEW_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__BUILDER_HPP_
#define NEW_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "new_interfaces/srv/detail/rectangle_area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace new_interfaces
{

namespace srv
{

namespace builder
{

class Init_RectangleArea_Request_width
{
public:
  explicit Init_RectangleArea_Request_width(::new_interfaces::srv::RectangleArea_Request & msg)
  : msg_(msg)
  {}
  ::new_interfaces::srv::RectangleArea_Request width(::new_interfaces::srv::RectangleArea_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::new_interfaces::srv::RectangleArea_Request msg_;
};

class Init_RectangleArea_Request_length
{
public:
  Init_RectangleArea_Request_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RectangleArea_Request_width length(::new_interfaces::srv::RectangleArea_Request::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_RectangleArea_Request_width(msg_);
  }

private:
  ::new_interfaces::srv::RectangleArea_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::new_interfaces::srv::RectangleArea_Request>()
{
  return new_interfaces::srv::builder::Init_RectangleArea_Request_length();
}

}  // namespace new_interfaces


namespace new_interfaces
{

namespace srv
{

namespace builder
{

class Init_RectangleArea_Response_area
{
public:
  Init_RectangleArea_Response_area()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::new_interfaces::srv::RectangleArea_Response area(::new_interfaces::srv::RectangleArea_Response::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::new_interfaces::srv::RectangleArea_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::new_interfaces::srv::RectangleArea_Response>()
{
  return new_interfaces::srv::builder::Init_RectangleArea_Response_area();
}

}  // namespace new_interfaces


namespace new_interfaces
{

namespace srv
{

namespace builder
{

class Init_RectangleArea_Event_response
{
public:
  explicit Init_RectangleArea_Event_response(::new_interfaces::srv::RectangleArea_Event & msg)
  : msg_(msg)
  {}
  ::new_interfaces::srv::RectangleArea_Event response(::new_interfaces::srv::RectangleArea_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::new_interfaces::srv::RectangleArea_Event msg_;
};

class Init_RectangleArea_Event_request
{
public:
  explicit Init_RectangleArea_Event_request(::new_interfaces::srv::RectangleArea_Event & msg)
  : msg_(msg)
  {}
  Init_RectangleArea_Event_response request(::new_interfaces::srv::RectangleArea_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RectangleArea_Event_response(msg_);
  }

private:
  ::new_interfaces::srv::RectangleArea_Event msg_;
};

class Init_RectangleArea_Event_info
{
public:
  Init_RectangleArea_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RectangleArea_Event_request info(::new_interfaces::srv::RectangleArea_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RectangleArea_Event_request(msg_);
  }

private:
  ::new_interfaces::srv::RectangleArea_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::new_interfaces::srv::RectangleArea_Event>()
{
  return new_interfaces::srv::builder::Init_RectangleArea_Event_info();
}

}  // namespace new_interfaces

#endif  // NEW_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__BUILDER_HPP_
