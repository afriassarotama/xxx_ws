// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from xicro_pkg:msg/Pulsa.idl
// generated code does not contain a copyright notice

#include "xicro_pkg/msg/detail/pulsa__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_xicro_pkg
const rosidl_type_hash_t *
xicro_pkg__msg__Pulsa__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0xef, 0x5d, 0x29, 0x4b, 0x70, 0x5f, 0x85,
      0x47, 0xc4, 0xdd, 0x57, 0x12, 0xe2, 0xd5, 0xaf,
      0xb5, 0x53, 0x80, 0x60, 0x89, 0x37, 0xc9, 0x22,
      0x40, 0xb8, 0xdb, 0x4e, 0xa3, 0x29, 0xdb, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char xicro_pkg__msg__Pulsa__TYPE_NAME[] = "xicro_pkg/msg/Pulsa";

// Define type names, field names, and default values
static char xicro_pkg__msg__Pulsa__FIELD_NAME__kiri[] = "kiri";
static char xicro_pkg__msg__Pulsa__FIELD_NAME__kanan[] = "kanan";

static rosidl_runtime_c__type_description__Field xicro_pkg__msg__Pulsa__FIELDS[] = {
  {
    {xicro_pkg__msg__Pulsa__FIELD_NAME__kiri, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {xicro_pkg__msg__Pulsa__FIELD_NAME__kanan, 5, 5},
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
xicro_pkg__msg__Pulsa__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xicro_pkg__msg__Pulsa__TYPE_NAME, 19, 19},
      {xicro_pkg__msg__Pulsa__FIELDS, 2, 2},
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
xicro_pkg__msg__Pulsa__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xicro_pkg__msg__Pulsa__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xicro_pkg__msg__Pulsa__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xicro_pkg__msg__Pulsa__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
