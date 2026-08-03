// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xicro_pkg:msg/Pulsa.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xicro_pkg/msg/pulsa.hpp"


#ifndef XICRO_PKG__MSG__DETAIL__PULSA__TRAITS_HPP_
#define XICRO_PKG__MSG__DETAIL__PULSA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xicro_pkg/msg/detail/pulsa__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xicro_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pulsa & msg,
  std::ostream & out)
{
  out << "{";
  // member: kiri
  {
    out << "kiri: ";
    rosidl_generator_traits::value_to_yaml(msg.kiri, out);
    out << ", ";
  }

  // member: kanan
  {
    out << "kanan: ";
    rosidl_generator_traits::value_to_yaml(msg.kanan, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pulsa & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kiri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kiri: ";
    rosidl_generator_traits::value_to_yaml(msg.kiri, out);
    out << "\n";
  }

  // member: kanan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kanan: ";
    rosidl_generator_traits::value_to_yaml(msg.kanan, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pulsa & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace xicro_pkg

namespace rosidl_generator_traits
{

[[deprecated("use xicro_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xicro_pkg::msg::Pulsa & msg,
  std::ostream & out, size_t indentation = 0)
{
  xicro_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xicro_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const xicro_pkg::msg::Pulsa & msg)
{
  return xicro_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xicro_pkg::msg::Pulsa>()
{
  return "xicro_pkg::msg::Pulsa";
}

template<>
inline const char * name<xicro_pkg::msg::Pulsa>()
{
  return "xicro_pkg/msg/Pulsa";
}

template<>
struct has_fixed_size<xicro_pkg::msg::Pulsa>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xicro_pkg::msg::Pulsa>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xicro_pkg::msg::Pulsa>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XICRO_PKG__MSG__DETAIL__PULSA__TRAITS_HPP_
