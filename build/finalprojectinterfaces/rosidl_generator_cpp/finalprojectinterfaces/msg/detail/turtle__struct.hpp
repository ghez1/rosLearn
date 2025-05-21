// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from finalprojectinterfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "finalprojectinterfaces/msg/turtle.hpp"


#ifndef FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE__STRUCT_HPP_
#define FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__finalprojectinterfaces__msg__Turtle __attribute__((deprecated))
#else
# define DEPRECATED__finalprojectinterfaces__msg__Turtle __declspec(deprecated)
#endif

namespace finalprojectinterfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Turtle_
{
  using Type = Turtle_<ContainerAllocator>;

  explicit Turtle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0;
      this->are_motors_ready = false;
      this->debug_message = "";
    }
  }

  explicit Turtle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : debug_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0;
      this->are_motors_ready = false;
      this->debug_message = "";
    }
  }

  // field types and members
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _are_motors_ready_type =
    bool;
  _are_motors_ready_type are_motors_ready;
  using _debug_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _debug_message_type debug_message;

  // setters for named parameter idiom
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__are_motors_ready(
    const bool & _arg)
  {
    this->are_motors_ready = _arg;
    return *this;
  }
  Type & set__debug_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->debug_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    finalprojectinterfaces::msg::Turtle_<ContainerAllocator> *;
  using ConstRawPtr =
    const finalprojectinterfaces::msg::Turtle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<finalprojectinterfaces::msg::Turtle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<finalprojectinterfaces::msg::Turtle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      finalprojectinterfaces::msg::Turtle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<finalprojectinterfaces::msg::Turtle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      finalprojectinterfaces::msg::Turtle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<finalprojectinterfaces::msg::Turtle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<finalprojectinterfaces::msg::Turtle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<finalprojectinterfaces::msg::Turtle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__finalprojectinterfaces__msg__Turtle
    std::shared_ptr<finalprojectinterfaces::msg::Turtle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__finalprojectinterfaces__msg__Turtle
    std::shared_ptr<finalprojectinterfaces::msg::Turtle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Turtle_ & other) const
  {
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->are_motors_ready != other.are_motors_ready) {
      return false;
    }
    if (this->debug_message != other.debug_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Turtle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Turtle_

// alias to use template instance with default allocator
using Turtle =
  finalprojectinterfaces::msg::Turtle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace finalprojectinterfaces

#endif  // FINALPROJECTINTERFACES__MSG__DETAIL__TURTLE__STRUCT_HPP_
