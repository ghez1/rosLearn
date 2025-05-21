// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from finalprojectinterfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice
#include "finalprojectinterfaces/msg/detail/turtle_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `debug_message`
#include "rosidl_runtime_c/string_functions.h"

bool
finalprojectinterfaces__msg__TurtleArray__init(finalprojectinterfaces__msg__TurtleArray * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  // are_motors_ready
  // debug_message
  if (!rosidl_runtime_c__String__init(&msg->debug_message)) {
    finalprojectinterfaces__msg__TurtleArray__fini(msg);
    return false;
  }
  return true;
}

void
finalprojectinterfaces__msg__TurtleArray__fini(finalprojectinterfaces__msg__TurtleArray * msg)
{
  if (!msg) {
    return;
  }
  // temperature
  // are_motors_ready
  // debug_message
  rosidl_runtime_c__String__fini(&msg->debug_message);
}

bool
finalprojectinterfaces__msg__TurtleArray__are_equal(const finalprojectinterfaces__msg__TurtleArray * lhs, const finalprojectinterfaces__msg__TurtleArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // are_motors_ready
  if (lhs->are_motors_ready != rhs->are_motors_ready) {
    return false;
  }
  // debug_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->debug_message), &(rhs->debug_message)))
  {
    return false;
  }
  return true;
}

bool
finalprojectinterfaces__msg__TurtleArray__copy(
  const finalprojectinterfaces__msg__TurtleArray * input,
  finalprojectinterfaces__msg__TurtleArray * output)
{
  if (!input || !output) {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  // are_motors_ready
  output->are_motors_ready = input->are_motors_ready;
  // debug_message
  if (!rosidl_runtime_c__String__copy(
      &(input->debug_message), &(output->debug_message)))
  {
    return false;
  }
  return true;
}

finalprojectinterfaces__msg__TurtleArray *
finalprojectinterfaces__msg__TurtleArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalprojectinterfaces__msg__TurtleArray * msg = (finalprojectinterfaces__msg__TurtleArray *)allocator.allocate(sizeof(finalprojectinterfaces__msg__TurtleArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(finalprojectinterfaces__msg__TurtleArray));
  bool success = finalprojectinterfaces__msg__TurtleArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
finalprojectinterfaces__msg__TurtleArray__destroy(finalprojectinterfaces__msg__TurtleArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    finalprojectinterfaces__msg__TurtleArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
finalprojectinterfaces__msg__TurtleArray__Sequence__init(finalprojectinterfaces__msg__TurtleArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalprojectinterfaces__msg__TurtleArray * data = NULL;

  if (size) {
    data = (finalprojectinterfaces__msg__TurtleArray *)allocator.zero_allocate(size, sizeof(finalprojectinterfaces__msg__TurtleArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = finalprojectinterfaces__msg__TurtleArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        finalprojectinterfaces__msg__TurtleArray__fini(&data[i - 1]);
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
finalprojectinterfaces__msg__TurtleArray__Sequence__fini(finalprojectinterfaces__msg__TurtleArray__Sequence * array)
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
      finalprojectinterfaces__msg__TurtleArray__fini(&array->data[i]);
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

finalprojectinterfaces__msg__TurtleArray__Sequence *
finalprojectinterfaces__msg__TurtleArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  finalprojectinterfaces__msg__TurtleArray__Sequence * array = (finalprojectinterfaces__msg__TurtleArray__Sequence *)allocator.allocate(sizeof(finalprojectinterfaces__msg__TurtleArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = finalprojectinterfaces__msg__TurtleArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
finalprojectinterfaces__msg__TurtleArray__Sequence__destroy(finalprojectinterfaces__msg__TurtleArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    finalprojectinterfaces__msg__TurtleArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
finalprojectinterfaces__msg__TurtleArray__Sequence__are_equal(const finalprojectinterfaces__msg__TurtleArray__Sequence * lhs, const finalprojectinterfaces__msg__TurtleArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!finalprojectinterfaces__msg__TurtleArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
finalprojectinterfaces__msg__TurtleArray__Sequence__copy(
  const finalprojectinterfaces__msg__TurtleArray__Sequence * input,
  finalprojectinterfaces__msg__TurtleArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(finalprojectinterfaces__msg__TurtleArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    finalprojectinterfaces__msg__TurtleArray * data =
      (finalprojectinterfaces__msg__TurtleArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!finalprojectinterfaces__msg__TurtleArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          finalprojectinterfaces__msg__TurtleArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!finalprojectinterfaces__msg__TurtleArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
