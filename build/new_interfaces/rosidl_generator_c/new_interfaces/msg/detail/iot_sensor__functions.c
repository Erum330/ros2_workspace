// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from new_interfaces:msg/IotSensor.idl
// generated code does not contain a copyright notice
#include "new_interfaces/msg/detail/iot_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
new_interfaces__msg__IotSensor__init(new_interfaces__msg__IotSensor * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    new_interfaces__msg__IotSensor__fini(msg);
    return false;
  }
  // id
  // humidity
  // temperature
  return true;
}

void
new_interfaces__msg__IotSensor__fini(new_interfaces__msg__IotSensor * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // id
  // humidity
  // temperature
}

bool
new_interfaces__msg__IotSensor__are_equal(const new_interfaces__msg__IotSensor * lhs, const new_interfaces__msg__IotSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // humidity
  if (lhs->humidity != rhs->humidity) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  return true;
}

bool
new_interfaces__msg__IotSensor__copy(
  const new_interfaces__msg__IotSensor * input,
  new_interfaces__msg__IotSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // humidity
  output->humidity = input->humidity;
  // temperature
  output->temperature = input->temperature;
  return true;
}

new_interfaces__msg__IotSensor *
new_interfaces__msg__IotSensor__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  new_interfaces__msg__IotSensor * msg = (new_interfaces__msg__IotSensor *)allocator.allocate(sizeof(new_interfaces__msg__IotSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(new_interfaces__msg__IotSensor));
  bool success = new_interfaces__msg__IotSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
new_interfaces__msg__IotSensor__destroy(new_interfaces__msg__IotSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    new_interfaces__msg__IotSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
new_interfaces__msg__IotSensor__Sequence__init(new_interfaces__msg__IotSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  new_interfaces__msg__IotSensor * data = NULL;

  if (size) {
    data = (new_interfaces__msg__IotSensor *)allocator.zero_allocate(size, sizeof(new_interfaces__msg__IotSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = new_interfaces__msg__IotSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        new_interfaces__msg__IotSensor__fini(&data[i - 1]);
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
new_interfaces__msg__IotSensor__Sequence__fini(new_interfaces__msg__IotSensor__Sequence * array)
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
      new_interfaces__msg__IotSensor__fini(&array->data[i]);
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

new_interfaces__msg__IotSensor__Sequence *
new_interfaces__msg__IotSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  new_interfaces__msg__IotSensor__Sequence * array = (new_interfaces__msg__IotSensor__Sequence *)allocator.allocate(sizeof(new_interfaces__msg__IotSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = new_interfaces__msg__IotSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
new_interfaces__msg__IotSensor__Sequence__destroy(new_interfaces__msg__IotSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    new_interfaces__msg__IotSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
new_interfaces__msg__IotSensor__Sequence__are_equal(const new_interfaces__msg__IotSensor__Sequence * lhs, const new_interfaces__msg__IotSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!new_interfaces__msg__IotSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
new_interfaces__msg__IotSensor__Sequence__copy(
  const new_interfaces__msg__IotSensor__Sequence * input,
  new_interfaces__msg__IotSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(new_interfaces__msg__IotSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    new_interfaces__msg__IotSensor * data =
      (new_interfaces__msg__IotSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!new_interfaces__msg__IotSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          new_interfaces__msg__IotSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!new_interfaces__msg__IotSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
