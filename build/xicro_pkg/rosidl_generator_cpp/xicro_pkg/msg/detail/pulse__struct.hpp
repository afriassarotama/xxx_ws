// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xicro_pkg:msg/Pulse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xicro_pkg/msg/pulse.hpp"


#ifndef XICRO_PKG__MSG__DETAIL__PULSE__STRUCT_HPP_
#define XICRO_PKG__MSG__DETAIL__PULSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xicro_pkg__msg__Pulse __attribute__((deprecated))
#else
# define DEPRECATED__xicro_pkg__msg__Pulse __declspec(deprecated)
#endif

namespace xicro_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pulse_
{
  using Type = Pulse_<ContainerAllocator>;

  explicit Pulse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kiri = 0ul;
      this->kanan = 0ul;
    }
  }

  explicit Pulse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kiri = 0ul;
      this->kanan = 0ul;
    }
  }

  // field types and members
  using _kiri_type =
    uint32_t;
  _kiri_type kiri;
  using _kanan_type =
    uint32_t;
  _kanan_type kanan;

  // setters for named parameter idiom
  Type & set__kiri(
    const uint32_t & _arg)
  {
    this->kiri = _arg;
    return *this;
  }
  Type & set__kanan(
    const uint32_t & _arg)
  {
    this->kanan = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xicro_pkg::msg::Pulse_<ContainerAllocator> *;
  using ConstRawPtr =
    const xicro_pkg::msg::Pulse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xicro_pkg::msg::Pulse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xicro_pkg::msg::Pulse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xicro_pkg::msg::Pulse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xicro_pkg::msg::Pulse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xicro_pkg::msg::Pulse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xicro_pkg::msg::Pulse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xicro_pkg::msg::Pulse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xicro_pkg::msg::Pulse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xicro_pkg__msg__Pulse
    std::shared_ptr<xicro_pkg::msg::Pulse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xicro_pkg__msg__Pulse
    std::shared_ptr<xicro_pkg::msg::Pulse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pulse_ & other) const
  {
    if (this->kiri != other.kiri) {
      return false;
    }
    if (this->kanan != other.kanan) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pulse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pulse_

// alias to use template instance with default allocator
using Pulse =
  xicro_pkg::msg::Pulse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xicro_pkg

#endif  // XICRO_PKG__MSG__DETAIL__PULSE__STRUCT_HPP_
