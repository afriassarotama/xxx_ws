// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xicro_pkg:msg/Pulse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xicro_pkg/msg/detail/pulse__functions.h"
#include "xicro_pkg/msg/detail/pulse__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace xicro_pkg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Pulse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xicro_pkg::msg::Pulse(_init);
}

void Pulse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xicro_pkg::msg::Pulse *>(message_memory);
  typed_message->~Pulse();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pulse_message_member_array[2] = {
  {
    "kiri",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_pkg::msg::Pulse, kiri),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kanan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_pkg::msg::Pulse, kanan),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pulse_message_members = {
  "xicro_pkg::msg",  // message namespace
  "Pulse",  // message name
  2,  // number of fields
  sizeof(xicro_pkg::msg::Pulse),
  false,  // has_any_key_member_
  Pulse_message_member_array,  // message members
  Pulse_init_function,  // function to initialize message memory (memory has to be allocated)
  Pulse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pulse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pulse_message_members,
  get_message_typesupport_handle_function,
  &xicro_pkg__msg__Pulse__get_type_hash,
  &xicro_pkg__msg__Pulse__get_type_description,
  &xicro_pkg__msg__Pulse__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace xicro_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xicro_pkg::msg::Pulse>()
{
  return &::xicro_pkg::msg::rosidl_typesupport_introspection_cpp::Pulse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xicro_pkg, msg, Pulse)() {
  return &::xicro_pkg::msg::rosidl_typesupport_introspection_cpp::Pulse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
