// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_pkg:msg/Pulse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xicro_pkg/msg/pulse.hpp"


#ifndef XICRO_PKG__MSG__DETAIL__PULSE__BUILDER_HPP_
#define XICRO_PKG__MSG__DETAIL__PULSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xicro_pkg/msg/detail/pulse__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xicro_pkg
{

namespace msg
{

namespace builder
{

class Init_Pulse_kanan
{
public:
  explicit Init_Pulse_kanan(::xicro_pkg::msg::Pulse & msg)
  : msg_(msg)
  {}
  ::xicro_pkg::msg::Pulse kanan(::xicro_pkg::msg::Pulse::_kanan_type arg)
  {
    msg_.kanan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_pkg::msg::Pulse msg_;
};

class Init_Pulse_kiri
{
public:
  Init_Pulse_kiri()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pulse_kanan kiri(::xicro_pkg::msg::Pulse::_kiri_type arg)
  {
    msg_.kiri = std::move(arg);
    return Init_Pulse_kanan(msg_);
  }

private:
  ::xicro_pkg::msg::Pulse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_pkg::msg::Pulse>()
{
  return xicro_pkg::msg::builder::Init_Pulse_kiri();
}

}  // namespace xicro_pkg

#endif  // XICRO_PKG__MSG__DETAIL__PULSE__BUILDER_HPP_
