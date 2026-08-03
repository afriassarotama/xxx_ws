// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_pkg:msg/Pulsa.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xicro_pkg/msg/pulsa.hpp"


#ifndef XICRO_PKG__MSG__DETAIL__PULSA__BUILDER_HPP_
#define XICRO_PKG__MSG__DETAIL__PULSA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xicro_pkg/msg/detail/pulsa__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xicro_pkg
{

namespace msg
{

namespace builder
{

class Init_Pulsa_kanan
{
public:
  explicit Init_Pulsa_kanan(::xicro_pkg::msg::Pulsa & msg)
  : msg_(msg)
  {}
  ::xicro_pkg::msg::Pulsa kanan(::xicro_pkg::msg::Pulsa::_kanan_type arg)
  {
    msg_.kanan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_pkg::msg::Pulsa msg_;
};

class Init_Pulsa_kiri
{
public:
  Init_Pulsa_kiri()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pulsa_kanan kiri(::xicro_pkg::msg::Pulsa::_kiri_type arg)
  {
    msg_.kiri = std::move(arg);
    return Init_Pulsa_kanan(msg_);
  }

private:
  ::xicro_pkg::msg::Pulsa msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_pkg::msg::Pulsa>()
{
  return xicro_pkg::msg::builder::Init_Pulsa_kiri();
}

}  // namespace xicro_pkg

#endif  // XICRO_PKG__MSG__DETAIL__PULSA__BUILDER_HPP_
