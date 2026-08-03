// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xicro_pkg:msg/Pulsa.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xicro_pkg/msg/detail/pulsa__rosidl_typesupport_introspection_c.h"
#include "xicro_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xicro_pkg/msg/detail/pulsa__functions.h"
#include "xicro_pkg/msg/detail/pulsa__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void xicro_pkg__msg__Pulsa__rosidl_typesupport_introspection_c__Pulsa_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xicro_pkg__msg__Pulsa__init(message_memory);
}

void xicro_pkg__msg__Pulsa__rosidl_typesupport_introspection_c__Pulsa_fini_function(void * message_memory)
{
  xicro_pkg__msg__Pulsa__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember xicro_pkg__msg__Pulsa__rosidl_typesupport_introspection_c__Pulsa_message_member_array[2] = {
  {
    "kiri",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_pkg__msg__Pulsa, kiri),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kanan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_pkg__msg__Pulsa, kanan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xicro_pkg__msg__Pulsa__rosidl_typesupport_introspection_c__Pulsa_message_members = {
  "xicro_pkg__msg",  // message namespace
  "Pulsa",  // message name
  2,  // number of fields
  sizeof(xicro_pkg__msg__Pulsa),
  false,  // has_any_key_member_
  xicro_pkg__msg__Pulsa__rosidl_typesupport_introspection_c__Pulsa_message_member_array,  // message members
  xicro_pkg__msg__Pulsa__rosidl_typesupport_introspection_c__Pulsa_init_function,  // function to initialize message memory (memory has to be allocated)
  xicro_pkg__msg__Pulsa__rosidl_typesupport_introspection_c__Pulsa_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xicro_pkg__msg__Pulsa__rosidl_typesupport_introspection_c__Pulsa_message_type_support_handle = {
  0,
  &xicro_pkg__msg__Pulsa__rosidl_typesupport_introspection_c__Pulsa_message_members,
  get_message_typesupport_handle_function,
  &xicro_pkg__msg__Pulsa__get_type_hash,
  &xicro_pkg__msg__Pulsa__get_type_description,
  &xicro_pkg__msg__Pulsa__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xicro_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xicro_pkg, msg, Pulsa)() {
  if (!xicro_pkg__msg__Pulsa__rosidl_typesupport_introspection_c__Pulsa_message_type_support_handle.typesupport_identifier) {
    xicro_pkg__msg__Pulsa__rosidl_typesupport_introspection_c__Pulsa_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xicro_pkg__msg__Pulsa__rosidl_typesupport_introspection_c__Pulsa_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
