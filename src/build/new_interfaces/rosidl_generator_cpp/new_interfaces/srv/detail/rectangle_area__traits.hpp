// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from new_interfaces:srv/RectangleArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "new_interfaces/srv/rectangle_area.hpp"


#ifndef NEW_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__TRAITS_HPP_
#define NEW_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "new_interfaces/srv/detail/rectangle_area__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace new_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RectangleArea_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RectangleArea_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RectangleArea_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace new_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use new_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const new_interfaces::srv::RectangleArea_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  new_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use new_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const new_interfaces::srv::RectangleArea_Request & msg)
{
  return new_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<new_interfaces::srv::RectangleArea_Request>()
{
  return "new_interfaces::srv::RectangleArea_Request";
}

template<>
inline const char * name<new_interfaces::srv::RectangleArea_Request>()
{
  return "new_interfaces/srv/RectangleArea_Request";
}

template<>
struct has_fixed_size<new_interfaces::srv::RectangleArea_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<new_interfaces::srv::RectangleArea_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<new_interfaces::srv::RectangleArea_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace new_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RectangleArea_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: area
  {
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RectangleArea_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RectangleArea_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace new_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use new_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const new_interfaces::srv::RectangleArea_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  new_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use new_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const new_interfaces::srv::RectangleArea_Response & msg)
{
  return new_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<new_interfaces::srv::RectangleArea_Response>()
{
  return "new_interfaces::srv::RectangleArea_Response";
}

template<>
inline const char * name<new_interfaces::srv::RectangleArea_Response>()
{
  return "new_interfaces/srv/RectangleArea_Response";
}

template<>
struct has_fixed_size<new_interfaces::srv::RectangleArea_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<new_interfaces::srv::RectangleArea_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<new_interfaces::srv::RectangleArea_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace new_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RectangleArea_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RectangleArea_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RectangleArea_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace new_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use new_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const new_interfaces::srv::RectangleArea_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  new_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use new_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const new_interfaces::srv::RectangleArea_Event & msg)
{
  return new_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<new_interfaces::srv::RectangleArea_Event>()
{
  return "new_interfaces::srv::RectangleArea_Event";
}

template<>
inline const char * name<new_interfaces::srv::RectangleArea_Event>()
{
  return "new_interfaces/srv/RectangleArea_Event";
}

template<>
struct has_fixed_size<new_interfaces::srv::RectangleArea_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<new_interfaces::srv::RectangleArea_Event>
  : std::integral_constant<bool, has_bounded_size<new_interfaces::srv::RectangleArea_Request>::value && has_bounded_size<new_interfaces::srv::RectangleArea_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<new_interfaces::srv::RectangleArea_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<new_interfaces::srv::RectangleArea>()
{
  return "new_interfaces::srv::RectangleArea";
}

template<>
inline const char * name<new_interfaces::srv::RectangleArea>()
{
  return "new_interfaces/srv/RectangleArea";
}

template<>
struct has_fixed_size<new_interfaces::srv::RectangleArea>
  : std::integral_constant<
    bool,
    has_fixed_size<new_interfaces::srv::RectangleArea_Request>::value &&
    has_fixed_size<new_interfaces::srv::RectangleArea_Response>::value
  >
{
};

template<>
struct has_bounded_size<new_interfaces::srv::RectangleArea>
  : std::integral_constant<
    bool,
    has_bounded_size<new_interfaces::srv::RectangleArea_Request>::value &&
    has_bounded_size<new_interfaces::srv::RectangleArea_Response>::value
  >
{
};

template<>
struct is_service<new_interfaces::srv::RectangleArea>
  : std::true_type
{
};

template<>
struct is_service_request<new_interfaces::srv::RectangleArea_Request>
  : std::true_type
{
};

template<>
struct is_service_response<new_interfaces::srv::RectangleArea_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NEW_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__TRAITS_HPP_
