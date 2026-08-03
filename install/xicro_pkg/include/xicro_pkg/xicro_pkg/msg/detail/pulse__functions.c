// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xicro_pkg:msg/Pulse.idl
// generated code does not contain a copyright notice
#include "xicro_pkg/msg/detail/pulse__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xicro_pkg__msg__Pulse__init(xicro_pkg__msg__Pulse * msg)
{
  if (!msg) {
    return false;
  }
  // kiri
  // kanan
  return true;
}

void
xicro_pkg__msg__Pulse__fini(xicro_pkg__msg__Pulse * msg)
{
  if (!msg) {
    return;
  }
  // kiri
  // kanan
}

bool
xicro_pkg__msg__Pulse__are_equal(const xicro_pkg__msg__Pulse * lhs, const xicro_pkg__msg__Pulse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kiri
  if (lhs->kiri != rhs->kiri) {
    return false;
  }
  // kanan
  if (lhs->kanan != rhs->kanan) {
    return false;
  }
  return true;
}

bool
xicro_pkg__msg__Pulse__copy(
  const xicro_pkg__msg__Pulse * input,
  xicro_pkg__msg__Pulse * output)
{
  if (!input || !output) {
    return false;
  }
  // kiri
  output->kiri = input->kiri;
  // kanan
  output->kanan = input->kanan;
  return true;
}

xicro_pkg__msg__Pulse *
xicro_pkg__msg__Pulse__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xicro_pkg__msg__Pulse * msg = (xicro_pkg__msg__Pulse *)allocator.allocate(sizeof(xicro_pkg__msg__Pulse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xicro_pkg__msg__Pulse));
  bool success = xicro_pkg__msg__Pulse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xicro_pkg__msg__Pulse__destroy(xicro_pkg__msg__Pulse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xicro_pkg__msg__Pulse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xicro_pkg__msg__Pulse__Sequence__init(xicro_pkg__msg__Pulse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xicro_pkg__msg__Pulse * data = NULL;

  if (size) {
    data = (xicro_pkg__msg__Pulse *)allocator.zero_allocate(size, sizeof(xicro_pkg__msg__Pulse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xicro_pkg__msg__Pulse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xicro_pkg__msg__Pulse__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
xicro_pkg__msg__Pulse__Sequence__fini(xicro_pkg__msg__Pulse__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xicro_pkg__msg__Pulse__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

xicro_pkg__msg__Pulse__Sequence *
xicro_pkg__msg__Pulse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xicro_pkg__msg__Pulse__Sequence * array = (xicro_pkg__msg__Pulse__Sequence *)allocator.allocate(sizeof(xicro_pkg__msg__Pulse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xicro_pkg__msg__Pulse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xicro_pkg__msg__Pulse__Sequence__destroy(xicro_pkg__msg__Pulse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xicro_pkg__msg__Pulse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xicro_pkg__msg__Pulse__Sequence__are_equal(const xicro_pkg__msg__Pulse__Sequence * lhs, const xicro_pkg__msg__Pulse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xicro_pkg__msg__Pulse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xicro_pkg__msg__Pulse__Sequence__copy(
  const xicro_pkg__msg__Pulse__Sequence * input,
  xicro_pkg__msg__Pulse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xicro_pkg__msg__Pulse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xicro_pkg__msg__Pulse * data =
      (xicro_pkg__msg__Pulse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xicro_pkg__msg__Pulse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xicro_pkg__msg__Pulse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xicro_pkg__msg__Pulse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
