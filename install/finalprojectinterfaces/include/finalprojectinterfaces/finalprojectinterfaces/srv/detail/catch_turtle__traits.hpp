// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from finalprojectinterfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "finalprojectinterfaces/srv/catch_turtle.hpp"


#ifndef FINALPROJECTINTERFACES__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_
#define FINALPROJECTINTERFACES__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "finalprojectinterfaces/srv/detail/catch_turtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace finalprojectinterfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CatchTurtle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_number
  {
    out << "led_number: ";
    rosidl_generator_traits::value_to_yaml(msg.led_number, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CatchTurtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_number: ";
    rosidl_generator_traits::value_to_yaml(msg.led_number, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CatchTurtle_Request & msg, bool use_flow_style = false)
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

}  // namespace finalprojectinterfaces

namespace rosidl_generator_traits
{

[[deprecated("use finalprojectinterfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const finalprojectinterfaces::srv::CatchTurtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  finalprojectinterfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use finalprojectinterfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const finalprojectinterfaces::srv::CatchTurtle_Request & msg)
{
  return finalprojectinterfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<finalprojectinterfaces::srv::CatchTurtle_Request>()
{
  return "finalprojectinterfaces::srv::CatchTurtle_Request";
}

template<>
inline const char * name<finalprojectinterfaces::srv::CatchTurtle_Request>()
{
  return "finalprojectinterfaces/srv/CatchTurtle_Request";
}

template<>
struct has_fixed_size<finalprojectinterfaces::srv::CatchTurtle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<finalprojectinterfaces::srv::CatchTurtle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<finalprojectinterfaces::srv::CatchTurtle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace finalprojectinterfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CatchTurtle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CatchTurtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CatchTurtle_Response & msg, bool use_flow_style = false)
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

}  // namespace finalprojectinterfaces

namespace rosidl_generator_traits
{

[[deprecated("use finalprojectinterfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const finalprojectinterfaces::srv::CatchTurtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  finalprojectinterfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use finalprojectinterfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const finalprojectinterfaces::srv::CatchTurtle_Response & msg)
{
  return finalprojectinterfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<finalprojectinterfaces::srv::CatchTurtle_Response>()
{
  return "finalprojectinterfaces::srv::CatchTurtle_Response";
}

template<>
inline const char * name<finalprojectinterfaces::srv::CatchTurtle_Response>()
{
  return "finalprojectinterfaces/srv/CatchTurtle_Response";
}

template<>
struct has_fixed_size<finalprojectinterfaces::srv::CatchTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<finalprojectinterfaces::srv::CatchTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<finalprojectinterfaces::srv::CatchTurtle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace finalprojectinterfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CatchTurtle_Event & msg,
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
  const CatchTurtle_Event & msg,
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

inline std::string to_yaml(const CatchTurtle_Event & msg, bool use_flow_style = false)
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

}  // namespace finalprojectinterfaces

namespace rosidl_generator_traits
{

[[deprecated("use finalprojectinterfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const finalprojectinterfaces::srv::CatchTurtle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  finalprojectinterfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use finalprojectinterfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const finalprojectinterfaces::srv::CatchTurtle_Event & msg)
{
  return finalprojectinterfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<finalprojectinterfaces::srv::CatchTurtle_Event>()
{
  return "finalprojectinterfaces::srv::CatchTurtle_Event";
}

template<>
inline const char * name<finalprojectinterfaces::srv::CatchTurtle_Event>()
{
  return "finalprojectinterfaces/srv/CatchTurtle_Event";
}

template<>
struct has_fixed_size<finalprojectinterfaces::srv::CatchTurtle_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<finalprojectinterfaces::srv::CatchTurtle_Event>
  : std::integral_constant<bool, has_bounded_size<finalprojectinterfaces::srv::CatchTurtle_Request>::value && has_bounded_size<finalprojectinterfaces::srv::CatchTurtle_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<finalprojectinterfaces::srv::CatchTurtle_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<finalprojectinterfaces::srv::CatchTurtle>()
{
  return "finalprojectinterfaces::srv::CatchTurtle";
}

template<>
inline const char * name<finalprojectinterfaces::srv::CatchTurtle>()
{
  return "finalprojectinterfaces/srv/CatchTurtle";
}

template<>
struct has_fixed_size<finalprojectinterfaces::srv::CatchTurtle>
  : std::integral_constant<
    bool,
    has_fixed_size<finalprojectinterfaces::srv::CatchTurtle_Request>::value &&
    has_fixed_size<finalprojectinterfaces::srv::CatchTurtle_Response>::value
  >
{
};

template<>
struct has_bounded_size<finalprojectinterfaces::srv::CatchTurtle>
  : std::integral_constant<
    bool,
    has_bounded_size<finalprojectinterfaces::srv::CatchTurtle_Request>::value &&
    has_bounded_size<finalprojectinterfaces::srv::CatchTurtle_Response>::value
  >
{
};

template<>
struct is_service<finalprojectinterfaces::srv::CatchTurtle>
  : std::true_type
{
};

template<>
struct is_service_request<finalprojectinterfaces::srv::CatchTurtle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<finalprojectinterfaces::srv::CatchTurtle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FINALPROJECTINTERFACES__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_
