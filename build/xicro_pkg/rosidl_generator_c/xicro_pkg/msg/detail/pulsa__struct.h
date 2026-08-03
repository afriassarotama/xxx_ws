// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xicro_pkg:msg/Pulsa.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xicro_pkg/msg/pulsa.h"


#ifndef XICRO_PKG__MSG__DETAIL__PULSA__STRUCT_H_
#define XICRO_PKG__MSG__DETAIL__PULSA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Pulsa in the package xicro_pkg.
typedef struct xicro_pkg__msg__Pulsa
{
  uint32_t kiri;
  uint32_t kanan;
} xicro_pkg__msg__Pulsa;

// Struct for a sequence of xicro_pkg__msg__Pulsa.
typedef struct xicro_pkg__msg__Pulsa__Sequence
{
  xicro_pkg__msg__Pulsa * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xicro_pkg__msg__Pulsa__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XICRO_PKG__MSG__DETAIL__PULSA__STRUCT_H_
