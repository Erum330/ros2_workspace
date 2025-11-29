// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from new_interfaces:srv/RectangleArea.idl
// generated code does not contain a copyright notice
#include "new_interfaces/srv/detail/rectangle_area__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
new_interfaces__srv__RectangleArea_Request__init(new_interfaces__srv__RectangleArea_Request * msg)
{
  if (!msg) {
    return false;
  }
  // length
  // width
  return true;
}

void
new_interfaces__srv__RectangleArea_Request__fini(new_interfaces__srv__RectangleArea_Request * msg)
{
  if (!msg) {
    return;
  }
  // length
  // width
}

bool
new_interfaces__srv__RectangleArea_Request__are_equal(const new_interfaces__srv__RectangleArea_Request * lhs, const new_interfaces__srv__RectangleArea_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  return true;
}

bool
new_interfaces__srv__RectangleArea_Request__copy(
  const new_interfaces__srv__RectangleArea_Request * input,
  new_interfaces__srv__RectangleArea_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  return true;
}

new_interfaces__srv__RectangleArea_Request *
new_interfaces__srv__RectangleArea_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  new_interfaces__srv__RectangleArea_Request * msg = (new_interfaces__srv__RectangleArea_Request *)allocator.allocate(sizeof(new_interfaces__srv__RectangleArea_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(new_interfaces__srv__RectangleArea_Request));
  bool success = new_interfaces__srv__RectangleArea_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
new_interfaces__srv__RectangleArea_Request__destroy(new_interfaces__srv__RectangleArea_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    new_interfaces__srv__RectangleArea_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
new_interfaces__srv__RectangleArea_Request__Sequence__init(new_interfaces__srv__RectangleArea_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  new_interfaces__srv__RectangleArea_Request * data = NULL;

  if (size) {
    data = (new_interfaces__srv__RectangleArea_Request *)allocator.zero_allocate(size, sizeof(new_interfaces__srv__RectangleArea_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = new_interfaces__srv__RectangleArea_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        new_interfaces__srv__RectangleArea_Request__fini(&data[i - 1]);
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
new_interfaces__srv__RectangleArea_Request__Sequence__fini(new_interfaces__srv__RectangleArea_Request__Sequence * array)
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
      new_interfaces__srv__RectangleArea_Request__fini(&array->data[i]);
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

new_interfaces__srv__RectangleArea_Request__Sequence *
new_interfaces__srv__RectangleArea_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  new_interfaces__srv__RectangleArea_Request__Sequence * array = (new_interfaces__srv__RectangleArea_Request__Sequence *)allocator.allocate(sizeof(new_interfaces__srv__RectangleArea_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = new_interfaces__srv__RectangleArea_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
new_interfaces__srv__RectangleArea_Request__Sequence__destroy(new_interfaces__srv__RectangleArea_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    new_interfaces__srv__RectangleArea_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
new_interfaces__srv__RectangleArea_Request__Sequence__are_equal(const new_interfaces__srv__RectangleArea_Request__Sequence * lhs, const new_interfaces__srv__RectangleArea_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!new_interfaces__srv__RectangleArea_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
new_interfaces__srv__RectangleArea_Request__Sequence__copy(
  const new_interfaces__srv__RectangleArea_Request__Sequence * input,
  new_interfaces__srv__RectangleArea_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(new_interfaces__srv__RectangleArea_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    new_interfaces__srv__RectangleArea_Request * data =
      (new_interfaces__srv__RectangleArea_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!new_interfaces__srv__RectangleArea_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          new_interfaces__srv__RectangleArea_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!new_interfaces__srv__RectangleArea_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
new_interfaces__srv__RectangleArea_Response__init(new_interfaces__srv__RectangleArea_Response * msg)
{
  if (!msg) {
    return false;
  }
  // area
  return true;
}

void
new_interfaces__srv__RectangleArea_Response__fini(new_interfaces__srv__RectangleArea_Response * msg)
{
  if (!msg) {
    return;
  }
  // area
}

bool
new_interfaces__srv__RectangleArea_Response__are_equal(const new_interfaces__srv__RectangleArea_Response * lhs, const new_interfaces__srv__RectangleArea_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // area
  if (lhs->area != rhs->area) {
    return false;
  }
  return true;
}

bool
new_interfaces__srv__RectangleArea_Response__copy(
  const new_interfaces__srv__RectangleArea_Response * input,
  new_interfaces__srv__RectangleArea_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // area
  output->area = input->area;
  return true;
}

new_interfaces__srv__RectangleArea_Response *
new_interfaces__srv__RectangleArea_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  new_interfaces__srv__RectangleArea_Response * msg = (new_interfaces__srv__RectangleArea_Response *)allocator.allocate(sizeof(new_interfaces__srv__RectangleArea_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(new_interfaces__srv__RectangleArea_Response));
  bool success = new_interfaces__srv__RectangleArea_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
new_interfaces__srv__RectangleArea_Response__destroy(new_interfaces__srv__RectangleArea_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    new_interfaces__srv__RectangleArea_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
new_interfaces__srv__RectangleArea_Response__Sequence__init(new_interfaces__srv__RectangleArea_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  new_interfaces__srv__RectangleArea_Response * data = NULL;

  if (size) {
    data = (new_interfaces__srv__RectangleArea_Response *)allocator.zero_allocate(size, sizeof(new_interfaces__srv__RectangleArea_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = new_interfaces__srv__RectangleArea_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        new_interfaces__srv__RectangleArea_Response__fini(&data[i - 1]);
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
new_interfaces__srv__RectangleArea_Response__Sequence__fini(new_interfaces__srv__RectangleArea_Response__Sequence * array)
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
      new_interfaces__srv__RectangleArea_Response__fini(&array->data[i]);
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

new_interfaces__srv__RectangleArea_Response__Sequence *
new_interfaces__srv__RectangleArea_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  new_interfaces__srv__RectangleArea_Response__Sequence * array = (new_interfaces__srv__RectangleArea_Response__Sequence *)allocator.allocate(sizeof(new_interfaces__srv__RectangleArea_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = new_interfaces__srv__RectangleArea_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
new_interfaces__srv__RectangleArea_Response__Sequence__destroy(new_interfaces__srv__RectangleArea_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    new_interfaces__srv__RectangleArea_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
new_interfaces__srv__RectangleArea_Response__Sequence__are_equal(const new_interfaces__srv__RectangleArea_Response__Sequence * lhs, const new_interfaces__srv__RectangleArea_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!new_interfaces__srv__RectangleArea_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
new_interfaces__srv__RectangleArea_Response__Sequence__copy(
  const new_interfaces__srv__RectangleArea_Response__Sequence * input,
  new_interfaces__srv__RectangleArea_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(new_interfaces__srv__RectangleArea_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    new_interfaces__srv__RectangleArea_Response * data =
      (new_interfaces__srv__RectangleArea_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!new_interfaces__srv__RectangleArea_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          new_interfaces__srv__RectangleArea_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!new_interfaces__srv__RectangleArea_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "new_interfaces/srv/detail/rectangle_area__functions.h"

bool
new_interfaces__srv__RectangleArea_Event__init(new_interfaces__srv__RectangleArea_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    new_interfaces__srv__RectangleArea_Event__fini(msg);
    return false;
  }
  // request
  if (!new_interfaces__srv__RectangleArea_Request__Sequence__init(&msg->request, 0)) {
    new_interfaces__srv__RectangleArea_Event__fini(msg);
    return false;
  }
  // response
  if (!new_interfaces__srv__RectangleArea_Response__Sequence__init(&msg->response, 0)) {
    new_interfaces__srv__RectangleArea_Event__fini(msg);
    return false;
  }
  return true;
}

void
new_interfaces__srv__RectangleArea_Event__fini(new_interfaces__srv__RectangleArea_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  new_interfaces__srv__RectangleArea_Request__Sequence__fini(&msg->request);
  // response
  new_interfaces__srv__RectangleArea_Response__Sequence__fini(&msg->response);
}

bool
new_interfaces__srv__RectangleArea_Event__are_equal(const new_interfaces__srv__RectangleArea_Event * lhs, const new_interfaces__srv__RectangleArea_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!new_interfaces__srv__RectangleArea_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!new_interfaces__srv__RectangleArea_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
new_interfaces__srv__RectangleArea_Event__copy(
  const new_interfaces__srv__RectangleArea_Event * input,
  new_interfaces__srv__RectangleArea_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!new_interfaces__srv__RectangleArea_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!new_interfaces__srv__RectangleArea_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

new_interfaces__srv__RectangleArea_Event *
new_interfaces__srv__RectangleArea_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  new_interfaces__srv__RectangleArea_Event * msg = (new_interfaces__srv__RectangleArea_Event *)allocator.allocate(sizeof(new_interfaces__srv__RectangleArea_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(new_interfaces__srv__RectangleArea_Event));
  bool success = new_interfaces__srv__RectangleArea_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
new_interfaces__srv__RectangleArea_Event__destroy(new_interfaces__srv__RectangleArea_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    new_interfaces__srv__RectangleArea_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
new_interfaces__srv__RectangleArea_Event__Sequence__init(new_interfaces__srv__RectangleArea_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  new_interfaces__srv__RectangleArea_Event * data = NULL;

  if (size) {
    data = (new_interfaces__srv__RectangleArea_Event *)allocator.zero_allocate(size, sizeof(new_interfaces__srv__RectangleArea_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = new_interfaces__srv__RectangleArea_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        new_interfaces__srv__RectangleArea_Event__fini(&data[i - 1]);
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
new_interfaces__srv__RectangleArea_Event__Sequence__fini(new_interfaces__srv__RectangleArea_Event__Sequence * array)
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
      new_interfaces__srv__RectangleArea_Event__fini(&array->data[i]);
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

new_interfaces__srv__RectangleArea_Event__Sequence *
new_interfaces__srv__RectangleArea_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  new_interfaces__srv__RectangleArea_Event__Sequence * array = (new_interfaces__srv__RectangleArea_Event__Sequence *)allocator.allocate(sizeof(new_interfaces__srv__RectangleArea_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = new_interfaces__srv__RectangleArea_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
new_interfaces__srv__RectangleArea_Event__Sequence__destroy(new_interfaces__srv__RectangleArea_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    new_interfaces__srv__RectangleArea_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
new_interfaces__srv__RectangleArea_Event__Sequence__are_equal(const new_interfaces__srv__RectangleArea_Event__Sequence * lhs, const new_interfaces__srv__RectangleArea_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!new_interfaces__srv__RectangleArea_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
new_interfaces__srv__RectangleArea_Event__Sequence__copy(
  const new_interfaces__srv__RectangleArea_Event__Sequence * input,
  new_interfaces__srv__RectangleArea_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(new_interfaces__srv__RectangleArea_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    new_interfaces__srv__RectangleArea_Event * data =
      (new_interfaces__srv__RectangleArea_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!new_interfaces__srv__RectangleArea_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          new_interfaces__srv__RectangleArea_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!new_interfaces__srv__RectangleArea_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
