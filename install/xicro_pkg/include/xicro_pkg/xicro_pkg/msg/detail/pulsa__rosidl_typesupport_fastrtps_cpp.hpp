// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from xicro_pkg:msg/Pulsa.idl
// generated code does not contain a copyright notice

#ifndef XICRO_PKG__MSG__DETAIL__PULSA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define XICRO_PKG__MSG__DETAIL__PULSA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "xicro_pkg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "xicro_pkg/msg/detail/pulsa__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace xicro_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
cdr_serialize(
  const xicro_pkg::msg::Pulsa & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xicro_pkg::msg::Pulsa & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
get_serialized_size(
  const xicro_pkg::msg::Pulsa & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
max_serialized_size_Pulsa(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
cdr_serialize_key(
  const xicro_pkg::msg::Pulsa & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
get_serialized_size_key(
  const xicro_pkg::msg::Pulsa & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
max_serialized_size_key_Pulsa(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace xicro_pkg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xicro_pkg, msg, Pulsa)();

#ifdef __cplusplus
}
#endif

#endif  // XICRO_PKG__MSG__DETAIL__PULSA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
