// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from xicro_pkg:msg/Pulse.idl
// generated code does not contain a copyright notice
#ifndef XICRO_PKG__MSG__DETAIL__PULSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define XICRO_PKG__MSG__DETAIL__PULSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "xicro_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xicro_pkg/msg/detail/pulse__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_pkg
bool cdr_serialize_xicro_pkg__msg__Pulse(
  const xicro_pkg__msg__Pulse * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_pkg
bool cdr_deserialize_xicro_pkg__msg__Pulse(
  eprosima::fastcdr::Cdr &,
  xicro_pkg__msg__Pulse * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_pkg
size_t get_serialized_size_xicro_pkg__msg__Pulse(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_pkg
size_t max_serialized_size_xicro_pkg__msg__Pulse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_pkg
bool cdr_serialize_key_xicro_pkg__msg__Pulse(
  const xicro_pkg__msg__Pulse * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_pkg
size_t get_serialized_size_key_xicro_pkg__msg__Pulse(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_pkg
size_t max_serialized_size_key_xicro_pkg__msg__Pulse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xicro_pkg, msg, Pulse)();

#ifdef __cplusplus
}
#endif

#endif  // XICRO_PKG__MSG__DETAIL__PULSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
