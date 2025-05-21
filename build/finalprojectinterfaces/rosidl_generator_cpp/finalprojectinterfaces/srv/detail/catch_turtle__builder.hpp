// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from finalprojectinterfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "finalprojectinterfaces/srv/catch_turtle.hpp"


#ifndef FINALPROJECTINTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
#define FINALPROJECTINTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "finalprojectinterfaces/srv/detail/catch_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace finalprojectinterfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Request_state
{
public:
  explicit Init_CatchTurtle_Request_state(::finalprojectinterfaces::srv::CatchTurtle_Request & msg)
  : msg_(msg)
  {}
  ::finalprojectinterfaces::srv::CatchTurtle_Request state(::finalprojectinterfaces::srv::CatchTurtle_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalprojectinterfaces::srv::CatchTurtle_Request msg_;
};

class Init_CatchTurtle_Request_led_number
{
public:
  Init_CatchTurtle_Request_led_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CatchTurtle_Request_state led_number(::finalprojectinterfaces::srv::CatchTurtle_Request::_led_number_type arg)
  {
    msg_.led_number = std::move(arg);
    return Init_CatchTurtle_Request_state(msg_);
  }

private:
  ::finalprojectinterfaces::srv::CatchTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalprojectinterfaces::srv::CatchTurtle_Request>()
{
  return finalprojectinterfaces::srv::builder::Init_CatchTurtle_Request_led_number();
}

}  // namespace finalprojectinterfaces


namespace finalprojectinterfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Response_success
{
public:
  Init_CatchTurtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::finalprojectinterfaces::srv::CatchTurtle_Response success(::finalprojectinterfaces::srv::CatchTurtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalprojectinterfaces::srv::CatchTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalprojectinterfaces::srv::CatchTurtle_Response>()
{
  return finalprojectinterfaces::srv::builder::Init_CatchTurtle_Response_success();
}

}  // namespace finalprojectinterfaces


namespace finalprojectinterfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Event_response
{
public:
  explicit Init_CatchTurtle_Event_response(::finalprojectinterfaces::srv::CatchTurtle_Event & msg)
  : msg_(msg)
  {}
  ::finalprojectinterfaces::srv::CatchTurtle_Event response(::finalprojectinterfaces::srv::CatchTurtle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalprojectinterfaces::srv::CatchTurtle_Event msg_;
};

class Init_CatchTurtle_Event_request
{
public:
  explicit Init_CatchTurtle_Event_request(::finalprojectinterfaces::srv::CatchTurtle_Event & msg)
  : msg_(msg)
  {}
  Init_CatchTurtle_Event_response request(::finalprojectinterfaces::srv::CatchTurtle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CatchTurtle_Event_response(msg_);
  }

private:
  ::finalprojectinterfaces::srv::CatchTurtle_Event msg_;
};

class Init_CatchTurtle_Event_info
{
public:
  Init_CatchTurtle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CatchTurtle_Event_request info(::finalprojectinterfaces::srv::CatchTurtle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CatchTurtle_Event_request(msg_);
  }

private:
  ::finalprojectinterfaces::srv::CatchTurtle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalprojectinterfaces::srv::CatchTurtle_Event>()
{
  return finalprojectinterfaces::srv::builder::Init_CatchTurtle_Event_info();
}

}  // namespace finalprojectinterfaces

#endif  // FINALPROJECTINTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
