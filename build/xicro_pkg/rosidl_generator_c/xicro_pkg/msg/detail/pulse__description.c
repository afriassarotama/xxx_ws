// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from xicro_pkg:msg/Pulse.idl
// generated code does not contain a copyright notice

#include "xicro_pkg/msg/detail/pulse__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_xicro_pkg
const rosidl_type_hash_t *
xicro_pkg__msg__Pulse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0xe1, 0x13, 0x3e, 0x3e, 0xc6, 0xc0, 0x4d,
      0x96, 0xac, 0x34, 0x98, 0x12, 0xe8, 0x13, 0xe8,
      0x7a, 0x00, 0xa2, 0xd5, 0x2e, 0xe9, 0x73, 0xbf,
      0x1d, 0x35, 0xec, 0xd7, 0xb1, 0x3a, 0xbf, 0x69,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char xicro_pkg__msg__Pulse__TYPE_NAME[] = "xicro_pkg/msg/Pulse";

// Define type names, field names, and default values
static char xicro_pkg__msg__Pulse__FIELD_NAME__kiri[] = "kiri";
static char xicro_pkg__msg__Pulse__FIELD_NAME__kanan[] = "kanan";

static rosidl_runtime_c__type_description__Field xicro_pkg__msg__Pulse__FIELDS[] = {
  {
    {xicro_pkg__msg__Pulse__FIELD_NAME__kiri, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {xicro_pkg__msg__Pulse__FIELD_NAME__kanan, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xicro_pkg__msg__Pulse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xicro_pkg__msg__Pulse__TYPE_NAME, 19, 19},
      {xicro_pkg__msg__Pulse__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 kiri\n"
  "uint32 kanan";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
xicro_pkg__msg__Pulse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xicro_pkg__msg__Pulse__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xicro_pkg__msg__Pulse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xicro_pkg__msg__Pulse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
