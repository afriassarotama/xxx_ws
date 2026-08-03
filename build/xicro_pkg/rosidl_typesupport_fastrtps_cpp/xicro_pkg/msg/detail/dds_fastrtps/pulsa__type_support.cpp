// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from xicro_pkg:msg/Pulsa.idl
// generated code does not contain a copyright notice
#include "xicro_pkg/msg/detail/pulsa__rosidl_typesupport_fastrtps_cpp.hpp"
#include "xicro_pkg/msg/detail/pulsa__functions.h"
#include "xicro_pkg/msg/detail/pulsa__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: kiri
  cdr << ros_message.kiri;

  // Member: kanan
  cdr << ros_message.kanan;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xicro_pkg::msg::Pulsa & ros_message)
{
  // Member: kiri
  cdr >> ros_message.kiri;

  // Member: kanan
  cdr >> ros_message.kanan;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
get_serialized_size(
  const xicro_pkg::msg::Pulsa & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: kiri
  {
    size_t item_size = sizeof(ros_message.kiri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: kanan
  {
    size_t item_size = sizeof(ros_message.kanan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
max_serialized_size_Pulsa(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: kiri
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: kanan
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xicro_pkg::msg::Pulsa;
    is_plain =
      (
      offsetof(DataType, kanan) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
cdr_serialize_key(
  const xicro_pkg::msg::Pulsa & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: kiri
  cdr << ros_message.kiri;

  // Member: kanan
  cdr << ros_message.kanan;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
get_serialized_size_key(
  const xicro_pkg::msg::Pulsa & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: kiri
  {
    size_t item_size = sizeof(ros_message.kiri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: kanan
  {
    size_t item_size = sizeof(ros_message.kanan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_pkg
max_serialized_size_key_Pulsa(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: kiri
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: kanan
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xicro_pkg::msg::Pulsa;
    is_plain =
      (
      offsetof(DataType, kanan) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _Pulsa__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const xicro_pkg::msg::Pulsa *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Pulsa__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<xicro_pkg::msg::Pulsa *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Pulsa__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const xicro_pkg::msg::Pulsa *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Pulsa__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Pulsa(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Pulsa__callbacks = {
  "xicro_pkg::msg",
  "Pulsa",
  _Pulsa__cdr_serialize,
  _Pulsa__cdr_deserialize,
  _Pulsa__get_serialized_size,
  _Pulsa__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Pulsa__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Pulsa__callbacks,
  get_message_typesupport_handle_function,
  &xicro_pkg__msg__Pulsa__get_type_hash,
  &xicro_pkg__msg__Pulsa__get_type_description,
  &xicro_pkg__msg__Pulsa__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace xicro_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_xicro_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<xicro_pkg::msg::Pulsa>()
{
  return &xicro_pkg::msg::typesupport_fastrtps_cpp::_Pulsa__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xicro_pkg, msg, Pulsa)() {
  return &xicro_pkg::msg::typesupport_fastrtps_cpp::_Pulsa__handle;
}

#ifdef __cplusplus
}
#endif
