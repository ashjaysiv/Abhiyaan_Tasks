// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msgs:action/Teleop.idl
// generated code does not contain a copyright notice
#include "msgs/action/detail/teleop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
msgs__action__Teleop_Goal__init(msgs__action__Teleop_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Duration__init(&msg->time)) {
    msgs__action__Teleop_Goal__fini(msg);
    return false;
  }
  return true;
}

void
msgs__action__Teleop_Goal__fini(msgs__action__Teleop_Goal * msg)
{
  if (!msg) {
    return;
  }
  // time
  builtin_interfaces__msg__Duration__fini(&msg->time);
}

bool
msgs__action__Teleop_Goal__are_equal(const msgs__action__Teleop_Goal * lhs, const msgs__action__Teleop_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  return true;
}

bool
msgs__action__Teleop_Goal__copy(
  const msgs__action__Teleop_Goal * input,
  msgs__action__Teleop_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  return true;
}

msgs__action__Teleop_Goal *
msgs__action__Teleop_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_Goal * msg = (msgs__action__Teleop_Goal *)allocator.allocate(sizeof(msgs__action__Teleop_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs__action__Teleop_Goal));
  bool success = msgs__action__Teleop_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgs__action__Teleop_Goal__destroy(msgs__action__Teleop_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgs__action__Teleop_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgs__action__Teleop_Goal__Sequence__init(msgs__action__Teleop_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_Goal * data = NULL;

  if (size) {
    data = (msgs__action__Teleop_Goal *)allocator.zero_allocate(size, sizeof(msgs__action__Teleop_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs__action__Teleop_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs__action__Teleop_Goal__fini(&data[i - 1]);
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
msgs__action__Teleop_Goal__Sequence__fini(msgs__action__Teleop_Goal__Sequence * array)
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
      msgs__action__Teleop_Goal__fini(&array->data[i]);
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

msgs__action__Teleop_Goal__Sequence *
msgs__action__Teleop_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_Goal__Sequence * array = (msgs__action__Teleop_Goal__Sequence *)allocator.allocate(sizeof(msgs__action__Teleop_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgs__action__Teleop_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgs__action__Teleop_Goal__Sequence__destroy(msgs__action__Teleop_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgs__action__Teleop_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgs__action__Teleop_Goal__Sequence__are_equal(const msgs__action__Teleop_Goal__Sequence * lhs, const msgs__action__Teleop_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgs__action__Teleop_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgs__action__Teleop_Goal__Sequence__copy(
  const msgs__action__Teleop_Goal__Sequence * input,
  msgs__action__Teleop_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgs__action__Teleop_Goal);
    msgs__action__Teleop_Goal * data =
      (msgs__action__Teleop_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgs__action__Teleop_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msgs__action__Teleop_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgs__action__Teleop_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `total_elapsed_time`
// already included above
// #include "builtin_interfaces/msg/detail/duration__functions.h"

bool
msgs__action__Teleop_Result__init(msgs__action__Teleop_Result * msg)
{
  if (!msg) {
    return false;
  }
  // total_elapsed_time
  if (!builtin_interfaces__msg__Duration__init(&msg->total_elapsed_time)) {
    msgs__action__Teleop_Result__fini(msg);
    return false;
  }
  // error_code
  return true;
}

void
msgs__action__Teleop_Result__fini(msgs__action__Teleop_Result * msg)
{
  if (!msg) {
    return;
  }
  // total_elapsed_time
  builtin_interfaces__msg__Duration__fini(&msg->total_elapsed_time);
  // error_code
}

bool
msgs__action__Teleop_Result__are_equal(const msgs__action__Teleop_Result * lhs, const msgs__action__Teleop_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // total_elapsed_time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->total_elapsed_time), &(rhs->total_elapsed_time)))
  {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
msgs__action__Teleop_Result__copy(
  const msgs__action__Teleop_Result * input,
  msgs__action__Teleop_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // total_elapsed_time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->total_elapsed_time), &(output->total_elapsed_time)))
  {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  return true;
}

msgs__action__Teleop_Result *
msgs__action__Teleop_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_Result * msg = (msgs__action__Teleop_Result *)allocator.allocate(sizeof(msgs__action__Teleop_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs__action__Teleop_Result));
  bool success = msgs__action__Teleop_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgs__action__Teleop_Result__destroy(msgs__action__Teleop_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgs__action__Teleop_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgs__action__Teleop_Result__Sequence__init(msgs__action__Teleop_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_Result * data = NULL;

  if (size) {
    data = (msgs__action__Teleop_Result *)allocator.zero_allocate(size, sizeof(msgs__action__Teleop_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs__action__Teleop_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs__action__Teleop_Result__fini(&data[i - 1]);
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
msgs__action__Teleop_Result__Sequence__fini(msgs__action__Teleop_Result__Sequence * array)
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
      msgs__action__Teleop_Result__fini(&array->data[i]);
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

msgs__action__Teleop_Result__Sequence *
msgs__action__Teleop_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_Result__Sequence * array = (msgs__action__Teleop_Result__Sequence *)allocator.allocate(sizeof(msgs__action__Teleop_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgs__action__Teleop_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgs__action__Teleop_Result__Sequence__destroy(msgs__action__Teleop_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgs__action__Teleop_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgs__action__Teleop_Result__Sequence__are_equal(const msgs__action__Teleop_Result__Sequence * lhs, const msgs__action__Teleop_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgs__action__Teleop_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgs__action__Teleop_Result__Sequence__copy(
  const msgs__action__Teleop_Result__Sequence * input,
  msgs__action__Teleop_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgs__action__Teleop_Result);
    msgs__action__Teleop_Result * data =
      (msgs__action__Teleop_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgs__action__Teleop_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msgs__action__Teleop_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgs__action__Teleop_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `time_left`
// already included above
// #include "builtin_interfaces/msg/detail/duration__functions.h"

bool
msgs__action__Teleop_Feedback__init(msgs__action__Teleop_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // time_left
  if (!builtin_interfaces__msg__Duration__init(&msg->time_left)) {
    msgs__action__Teleop_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
msgs__action__Teleop_Feedback__fini(msgs__action__Teleop_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // time_left
  builtin_interfaces__msg__Duration__fini(&msg->time_left);
}

bool
msgs__action__Teleop_Feedback__are_equal(const msgs__action__Teleop_Feedback * lhs, const msgs__action__Teleop_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_left
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->time_left), &(rhs->time_left)))
  {
    return false;
  }
  return true;
}

bool
msgs__action__Teleop_Feedback__copy(
  const msgs__action__Teleop_Feedback * input,
  msgs__action__Teleop_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // time_left
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->time_left), &(output->time_left)))
  {
    return false;
  }
  return true;
}

msgs__action__Teleop_Feedback *
msgs__action__Teleop_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_Feedback * msg = (msgs__action__Teleop_Feedback *)allocator.allocate(sizeof(msgs__action__Teleop_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs__action__Teleop_Feedback));
  bool success = msgs__action__Teleop_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgs__action__Teleop_Feedback__destroy(msgs__action__Teleop_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgs__action__Teleop_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgs__action__Teleop_Feedback__Sequence__init(msgs__action__Teleop_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_Feedback * data = NULL;

  if (size) {
    data = (msgs__action__Teleop_Feedback *)allocator.zero_allocate(size, sizeof(msgs__action__Teleop_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs__action__Teleop_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs__action__Teleop_Feedback__fini(&data[i - 1]);
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
msgs__action__Teleop_Feedback__Sequence__fini(msgs__action__Teleop_Feedback__Sequence * array)
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
      msgs__action__Teleop_Feedback__fini(&array->data[i]);
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

msgs__action__Teleop_Feedback__Sequence *
msgs__action__Teleop_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_Feedback__Sequence * array = (msgs__action__Teleop_Feedback__Sequence *)allocator.allocate(sizeof(msgs__action__Teleop_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgs__action__Teleop_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgs__action__Teleop_Feedback__Sequence__destroy(msgs__action__Teleop_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgs__action__Teleop_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgs__action__Teleop_Feedback__Sequence__are_equal(const msgs__action__Teleop_Feedback__Sequence * lhs, const msgs__action__Teleop_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgs__action__Teleop_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgs__action__Teleop_Feedback__Sequence__copy(
  const msgs__action__Teleop_Feedback__Sequence * input,
  msgs__action__Teleop_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgs__action__Teleop_Feedback);
    msgs__action__Teleop_Feedback * data =
      (msgs__action__Teleop_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgs__action__Teleop_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msgs__action__Teleop_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgs__action__Teleop_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "msgs/action/detail/teleop__functions.h"

bool
msgs__action__Teleop_SendGoal_Request__init(msgs__action__Teleop_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msgs__action__Teleop_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!msgs__action__Teleop_Goal__init(&msg->goal)) {
    msgs__action__Teleop_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
msgs__action__Teleop_SendGoal_Request__fini(msgs__action__Teleop_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  msgs__action__Teleop_Goal__fini(&msg->goal);
}

bool
msgs__action__Teleop_SendGoal_Request__are_equal(const msgs__action__Teleop_SendGoal_Request * lhs, const msgs__action__Teleop_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!msgs__action__Teleop_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
msgs__action__Teleop_SendGoal_Request__copy(
  const msgs__action__Teleop_SendGoal_Request * input,
  msgs__action__Teleop_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!msgs__action__Teleop_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

msgs__action__Teleop_SendGoal_Request *
msgs__action__Teleop_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_SendGoal_Request * msg = (msgs__action__Teleop_SendGoal_Request *)allocator.allocate(sizeof(msgs__action__Teleop_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs__action__Teleop_SendGoal_Request));
  bool success = msgs__action__Teleop_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgs__action__Teleop_SendGoal_Request__destroy(msgs__action__Teleop_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgs__action__Teleop_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgs__action__Teleop_SendGoal_Request__Sequence__init(msgs__action__Teleop_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_SendGoal_Request * data = NULL;

  if (size) {
    data = (msgs__action__Teleop_SendGoal_Request *)allocator.zero_allocate(size, sizeof(msgs__action__Teleop_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs__action__Teleop_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs__action__Teleop_SendGoal_Request__fini(&data[i - 1]);
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
msgs__action__Teleop_SendGoal_Request__Sequence__fini(msgs__action__Teleop_SendGoal_Request__Sequence * array)
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
      msgs__action__Teleop_SendGoal_Request__fini(&array->data[i]);
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

msgs__action__Teleop_SendGoal_Request__Sequence *
msgs__action__Teleop_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_SendGoal_Request__Sequence * array = (msgs__action__Teleop_SendGoal_Request__Sequence *)allocator.allocate(sizeof(msgs__action__Teleop_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgs__action__Teleop_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgs__action__Teleop_SendGoal_Request__Sequence__destroy(msgs__action__Teleop_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgs__action__Teleop_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgs__action__Teleop_SendGoal_Request__Sequence__are_equal(const msgs__action__Teleop_SendGoal_Request__Sequence * lhs, const msgs__action__Teleop_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgs__action__Teleop_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgs__action__Teleop_SendGoal_Request__Sequence__copy(
  const msgs__action__Teleop_SendGoal_Request__Sequence * input,
  msgs__action__Teleop_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgs__action__Teleop_SendGoal_Request);
    msgs__action__Teleop_SendGoal_Request * data =
      (msgs__action__Teleop_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgs__action__Teleop_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msgs__action__Teleop_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgs__action__Teleop_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
msgs__action__Teleop_SendGoal_Response__init(msgs__action__Teleop_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    msgs__action__Teleop_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
msgs__action__Teleop_SendGoal_Response__fini(msgs__action__Teleop_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
msgs__action__Teleop_SendGoal_Response__are_equal(const msgs__action__Teleop_SendGoal_Response * lhs, const msgs__action__Teleop_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
msgs__action__Teleop_SendGoal_Response__copy(
  const msgs__action__Teleop_SendGoal_Response * input,
  msgs__action__Teleop_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

msgs__action__Teleop_SendGoal_Response *
msgs__action__Teleop_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_SendGoal_Response * msg = (msgs__action__Teleop_SendGoal_Response *)allocator.allocate(sizeof(msgs__action__Teleop_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs__action__Teleop_SendGoal_Response));
  bool success = msgs__action__Teleop_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgs__action__Teleop_SendGoal_Response__destroy(msgs__action__Teleop_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgs__action__Teleop_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgs__action__Teleop_SendGoal_Response__Sequence__init(msgs__action__Teleop_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_SendGoal_Response * data = NULL;

  if (size) {
    data = (msgs__action__Teleop_SendGoal_Response *)allocator.zero_allocate(size, sizeof(msgs__action__Teleop_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs__action__Teleop_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs__action__Teleop_SendGoal_Response__fini(&data[i - 1]);
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
msgs__action__Teleop_SendGoal_Response__Sequence__fini(msgs__action__Teleop_SendGoal_Response__Sequence * array)
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
      msgs__action__Teleop_SendGoal_Response__fini(&array->data[i]);
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

msgs__action__Teleop_SendGoal_Response__Sequence *
msgs__action__Teleop_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_SendGoal_Response__Sequence * array = (msgs__action__Teleop_SendGoal_Response__Sequence *)allocator.allocate(sizeof(msgs__action__Teleop_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgs__action__Teleop_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgs__action__Teleop_SendGoal_Response__Sequence__destroy(msgs__action__Teleop_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgs__action__Teleop_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgs__action__Teleop_SendGoal_Response__Sequence__are_equal(const msgs__action__Teleop_SendGoal_Response__Sequence * lhs, const msgs__action__Teleop_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgs__action__Teleop_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgs__action__Teleop_SendGoal_Response__Sequence__copy(
  const msgs__action__Teleop_SendGoal_Response__Sequence * input,
  msgs__action__Teleop_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgs__action__Teleop_SendGoal_Response);
    msgs__action__Teleop_SendGoal_Response * data =
      (msgs__action__Teleop_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgs__action__Teleop_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msgs__action__Teleop_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgs__action__Teleop_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
msgs__action__Teleop_GetResult_Request__init(msgs__action__Teleop_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msgs__action__Teleop_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
msgs__action__Teleop_GetResult_Request__fini(msgs__action__Teleop_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
msgs__action__Teleop_GetResult_Request__are_equal(const msgs__action__Teleop_GetResult_Request * lhs, const msgs__action__Teleop_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
msgs__action__Teleop_GetResult_Request__copy(
  const msgs__action__Teleop_GetResult_Request * input,
  msgs__action__Teleop_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

msgs__action__Teleop_GetResult_Request *
msgs__action__Teleop_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_GetResult_Request * msg = (msgs__action__Teleop_GetResult_Request *)allocator.allocate(sizeof(msgs__action__Teleop_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs__action__Teleop_GetResult_Request));
  bool success = msgs__action__Teleop_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgs__action__Teleop_GetResult_Request__destroy(msgs__action__Teleop_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgs__action__Teleop_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgs__action__Teleop_GetResult_Request__Sequence__init(msgs__action__Teleop_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_GetResult_Request * data = NULL;

  if (size) {
    data = (msgs__action__Teleop_GetResult_Request *)allocator.zero_allocate(size, sizeof(msgs__action__Teleop_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs__action__Teleop_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs__action__Teleop_GetResult_Request__fini(&data[i - 1]);
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
msgs__action__Teleop_GetResult_Request__Sequence__fini(msgs__action__Teleop_GetResult_Request__Sequence * array)
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
      msgs__action__Teleop_GetResult_Request__fini(&array->data[i]);
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

msgs__action__Teleop_GetResult_Request__Sequence *
msgs__action__Teleop_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_GetResult_Request__Sequence * array = (msgs__action__Teleop_GetResult_Request__Sequence *)allocator.allocate(sizeof(msgs__action__Teleop_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgs__action__Teleop_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgs__action__Teleop_GetResult_Request__Sequence__destroy(msgs__action__Teleop_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgs__action__Teleop_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgs__action__Teleop_GetResult_Request__Sequence__are_equal(const msgs__action__Teleop_GetResult_Request__Sequence * lhs, const msgs__action__Teleop_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgs__action__Teleop_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgs__action__Teleop_GetResult_Request__Sequence__copy(
  const msgs__action__Teleop_GetResult_Request__Sequence * input,
  msgs__action__Teleop_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgs__action__Teleop_GetResult_Request);
    msgs__action__Teleop_GetResult_Request * data =
      (msgs__action__Teleop_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgs__action__Teleop_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msgs__action__Teleop_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgs__action__Teleop_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "msgs/action/detail/teleop__functions.h"

bool
msgs__action__Teleop_GetResult_Response__init(msgs__action__Teleop_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!msgs__action__Teleop_Result__init(&msg->result)) {
    msgs__action__Teleop_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
msgs__action__Teleop_GetResult_Response__fini(msgs__action__Teleop_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  msgs__action__Teleop_Result__fini(&msg->result);
}

bool
msgs__action__Teleop_GetResult_Response__are_equal(const msgs__action__Teleop_GetResult_Response * lhs, const msgs__action__Teleop_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!msgs__action__Teleop_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
msgs__action__Teleop_GetResult_Response__copy(
  const msgs__action__Teleop_GetResult_Response * input,
  msgs__action__Teleop_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!msgs__action__Teleop_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

msgs__action__Teleop_GetResult_Response *
msgs__action__Teleop_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_GetResult_Response * msg = (msgs__action__Teleop_GetResult_Response *)allocator.allocate(sizeof(msgs__action__Teleop_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs__action__Teleop_GetResult_Response));
  bool success = msgs__action__Teleop_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgs__action__Teleop_GetResult_Response__destroy(msgs__action__Teleop_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgs__action__Teleop_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgs__action__Teleop_GetResult_Response__Sequence__init(msgs__action__Teleop_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_GetResult_Response * data = NULL;

  if (size) {
    data = (msgs__action__Teleop_GetResult_Response *)allocator.zero_allocate(size, sizeof(msgs__action__Teleop_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs__action__Teleop_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs__action__Teleop_GetResult_Response__fini(&data[i - 1]);
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
msgs__action__Teleop_GetResult_Response__Sequence__fini(msgs__action__Teleop_GetResult_Response__Sequence * array)
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
      msgs__action__Teleop_GetResult_Response__fini(&array->data[i]);
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

msgs__action__Teleop_GetResult_Response__Sequence *
msgs__action__Teleop_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_GetResult_Response__Sequence * array = (msgs__action__Teleop_GetResult_Response__Sequence *)allocator.allocate(sizeof(msgs__action__Teleop_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgs__action__Teleop_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgs__action__Teleop_GetResult_Response__Sequence__destroy(msgs__action__Teleop_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgs__action__Teleop_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgs__action__Teleop_GetResult_Response__Sequence__are_equal(const msgs__action__Teleop_GetResult_Response__Sequence * lhs, const msgs__action__Teleop_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgs__action__Teleop_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgs__action__Teleop_GetResult_Response__Sequence__copy(
  const msgs__action__Teleop_GetResult_Response__Sequence * input,
  msgs__action__Teleop_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgs__action__Teleop_GetResult_Response);
    msgs__action__Teleop_GetResult_Response * data =
      (msgs__action__Teleop_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgs__action__Teleop_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msgs__action__Teleop_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgs__action__Teleop_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "msgs/action/detail/teleop__functions.h"

bool
msgs__action__Teleop_FeedbackMessage__init(msgs__action__Teleop_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msgs__action__Teleop_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!msgs__action__Teleop_Feedback__init(&msg->feedback)) {
    msgs__action__Teleop_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
msgs__action__Teleop_FeedbackMessage__fini(msgs__action__Teleop_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  msgs__action__Teleop_Feedback__fini(&msg->feedback);
}

bool
msgs__action__Teleop_FeedbackMessage__are_equal(const msgs__action__Teleop_FeedbackMessage * lhs, const msgs__action__Teleop_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!msgs__action__Teleop_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
msgs__action__Teleop_FeedbackMessage__copy(
  const msgs__action__Teleop_FeedbackMessage * input,
  msgs__action__Teleop_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!msgs__action__Teleop_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

msgs__action__Teleop_FeedbackMessage *
msgs__action__Teleop_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_FeedbackMessage * msg = (msgs__action__Teleop_FeedbackMessage *)allocator.allocate(sizeof(msgs__action__Teleop_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs__action__Teleop_FeedbackMessage));
  bool success = msgs__action__Teleop_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgs__action__Teleop_FeedbackMessage__destroy(msgs__action__Teleop_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgs__action__Teleop_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgs__action__Teleop_FeedbackMessage__Sequence__init(msgs__action__Teleop_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_FeedbackMessage * data = NULL;

  if (size) {
    data = (msgs__action__Teleop_FeedbackMessage *)allocator.zero_allocate(size, sizeof(msgs__action__Teleop_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs__action__Teleop_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs__action__Teleop_FeedbackMessage__fini(&data[i - 1]);
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
msgs__action__Teleop_FeedbackMessage__Sequence__fini(msgs__action__Teleop_FeedbackMessage__Sequence * array)
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
      msgs__action__Teleop_FeedbackMessage__fini(&array->data[i]);
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

msgs__action__Teleop_FeedbackMessage__Sequence *
msgs__action__Teleop_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs__action__Teleop_FeedbackMessage__Sequence * array = (msgs__action__Teleop_FeedbackMessage__Sequence *)allocator.allocate(sizeof(msgs__action__Teleop_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgs__action__Teleop_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgs__action__Teleop_FeedbackMessage__Sequence__destroy(msgs__action__Teleop_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgs__action__Teleop_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgs__action__Teleop_FeedbackMessage__Sequence__are_equal(const msgs__action__Teleop_FeedbackMessage__Sequence * lhs, const msgs__action__Teleop_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgs__action__Teleop_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgs__action__Teleop_FeedbackMessage__Sequence__copy(
  const msgs__action__Teleop_FeedbackMessage__Sequence * input,
  msgs__action__Teleop_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgs__action__Teleop_FeedbackMessage);
    msgs__action__Teleop_FeedbackMessage * data =
      (msgs__action__Teleop_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgs__action__Teleop_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msgs__action__Teleop_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgs__action__Teleop_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
