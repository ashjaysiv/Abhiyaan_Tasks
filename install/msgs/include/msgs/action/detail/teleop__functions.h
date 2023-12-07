// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msgs:action/Teleop.idl
// generated code does not contain a copyright notice

#ifndef MSGS__ACTION__DETAIL__TELEOP__FUNCTIONS_H_
#define MSGS__ACTION__DETAIL__TELEOP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msgs/msg/rosidl_generator_c__visibility_control.h"

#include "msgs/action/detail/teleop__struct.h"

/// Initialize action/Teleop message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs__action__Teleop_Goal
 * )) before or use
 * msgs__action__Teleop_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Goal__init(msgs__action__Teleop_Goal * msg);

/// Finalize action/Teleop message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_Goal__fini(msgs__action__Teleop_Goal * msg);

/// Create action/Teleop message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs__action__Teleop_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_Goal *
msgs__action__Teleop_Goal__create();

/// Destroy action/Teleop message.
/**
 * It calls
 * msgs__action__Teleop_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_Goal__destroy(msgs__action__Teleop_Goal * msg);

/// Check for action/Teleop message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Goal__are_equal(const msgs__action__Teleop_Goal * lhs, const msgs__action__Teleop_Goal * rhs);

/// Copy a action/Teleop message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Goal__copy(
  const msgs__action__Teleop_Goal * input,
  msgs__action__Teleop_Goal * output);

/// Initialize array of action/Teleop messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs__action__Teleop_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Goal__Sequence__init(msgs__action__Teleop_Goal__Sequence * array, size_t size);

/// Finalize array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_Goal__Sequence__fini(msgs__action__Teleop_Goal__Sequence * array);

/// Create array of action/Teleop messages.
/**
 * It allocates the memory for the array and calls
 * msgs__action__Teleop_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_Goal__Sequence *
msgs__action__Teleop_Goal__Sequence__create(size_t size);

/// Destroy array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_Goal__Sequence__destroy(msgs__action__Teleop_Goal__Sequence * array);

/// Check for action/Teleop message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Goal__Sequence__are_equal(const msgs__action__Teleop_Goal__Sequence * lhs, const msgs__action__Teleop_Goal__Sequence * rhs);

/// Copy an array of action/Teleop messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Goal__Sequence__copy(
  const msgs__action__Teleop_Goal__Sequence * input,
  msgs__action__Teleop_Goal__Sequence * output);

/// Initialize action/Teleop message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs__action__Teleop_Result
 * )) before or use
 * msgs__action__Teleop_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Result__init(msgs__action__Teleop_Result * msg);

/// Finalize action/Teleop message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_Result__fini(msgs__action__Teleop_Result * msg);

/// Create action/Teleop message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs__action__Teleop_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_Result *
msgs__action__Teleop_Result__create();

/// Destroy action/Teleop message.
/**
 * It calls
 * msgs__action__Teleop_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_Result__destroy(msgs__action__Teleop_Result * msg);

/// Check for action/Teleop message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Result__are_equal(const msgs__action__Teleop_Result * lhs, const msgs__action__Teleop_Result * rhs);

/// Copy a action/Teleop message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Result__copy(
  const msgs__action__Teleop_Result * input,
  msgs__action__Teleop_Result * output);

/// Initialize array of action/Teleop messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs__action__Teleop_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Result__Sequence__init(msgs__action__Teleop_Result__Sequence * array, size_t size);

/// Finalize array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_Result__Sequence__fini(msgs__action__Teleop_Result__Sequence * array);

/// Create array of action/Teleop messages.
/**
 * It allocates the memory for the array and calls
 * msgs__action__Teleop_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_Result__Sequence *
msgs__action__Teleop_Result__Sequence__create(size_t size);

/// Destroy array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_Result__Sequence__destroy(msgs__action__Teleop_Result__Sequence * array);

/// Check for action/Teleop message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Result__Sequence__are_equal(const msgs__action__Teleop_Result__Sequence * lhs, const msgs__action__Teleop_Result__Sequence * rhs);

/// Copy an array of action/Teleop messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Result__Sequence__copy(
  const msgs__action__Teleop_Result__Sequence * input,
  msgs__action__Teleop_Result__Sequence * output);

/// Initialize action/Teleop message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs__action__Teleop_Feedback
 * )) before or use
 * msgs__action__Teleop_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Feedback__init(msgs__action__Teleop_Feedback * msg);

/// Finalize action/Teleop message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_Feedback__fini(msgs__action__Teleop_Feedback * msg);

/// Create action/Teleop message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs__action__Teleop_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_Feedback *
msgs__action__Teleop_Feedback__create();

/// Destroy action/Teleop message.
/**
 * It calls
 * msgs__action__Teleop_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_Feedback__destroy(msgs__action__Teleop_Feedback * msg);

/// Check for action/Teleop message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Feedback__are_equal(const msgs__action__Teleop_Feedback * lhs, const msgs__action__Teleop_Feedback * rhs);

/// Copy a action/Teleop message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Feedback__copy(
  const msgs__action__Teleop_Feedback * input,
  msgs__action__Teleop_Feedback * output);

/// Initialize array of action/Teleop messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs__action__Teleop_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Feedback__Sequence__init(msgs__action__Teleop_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_Feedback__Sequence__fini(msgs__action__Teleop_Feedback__Sequence * array);

/// Create array of action/Teleop messages.
/**
 * It allocates the memory for the array and calls
 * msgs__action__Teleop_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_Feedback__Sequence *
msgs__action__Teleop_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_Feedback__Sequence__destroy(msgs__action__Teleop_Feedback__Sequence * array);

/// Check for action/Teleop message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Feedback__Sequence__are_equal(const msgs__action__Teleop_Feedback__Sequence * lhs, const msgs__action__Teleop_Feedback__Sequence * rhs);

/// Copy an array of action/Teleop messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_Feedback__Sequence__copy(
  const msgs__action__Teleop_Feedback__Sequence * input,
  msgs__action__Teleop_Feedback__Sequence * output);

/// Initialize action/Teleop message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs__action__Teleop_SendGoal_Request
 * )) before or use
 * msgs__action__Teleop_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_SendGoal_Request__init(msgs__action__Teleop_SendGoal_Request * msg);

/// Finalize action/Teleop message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_SendGoal_Request__fini(msgs__action__Teleop_SendGoal_Request * msg);

/// Create action/Teleop message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs__action__Teleop_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_SendGoal_Request *
msgs__action__Teleop_SendGoal_Request__create();

/// Destroy action/Teleop message.
/**
 * It calls
 * msgs__action__Teleop_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_SendGoal_Request__destroy(msgs__action__Teleop_SendGoal_Request * msg);

/// Check for action/Teleop message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_SendGoal_Request__are_equal(const msgs__action__Teleop_SendGoal_Request * lhs, const msgs__action__Teleop_SendGoal_Request * rhs);

/// Copy a action/Teleop message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_SendGoal_Request__copy(
  const msgs__action__Teleop_SendGoal_Request * input,
  msgs__action__Teleop_SendGoal_Request * output);

/// Initialize array of action/Teleop messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs__action__Teleop_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_SendGoal_Request__Sequence__init(msgs__action__Teleop_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_SendGoal_Request__Sequence__fini(msgs__action__Teleop_SendGoal_Request__Sequence * array);

/// Create array of action/Teleop messages.
/**
 * It allocates the memory for the array and calls
 * msgs__action__Teleop_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_SendGoal_Request__Sequence *
msgs__action__Teleop_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_SendGoal_Request__Sequence__destroy(msgs__action__Teleop_SendGoal_Request__Sequence * array);

/// Check for action/Teleop message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_SendGoal_Request__Sequence__are_equal(const msgs__action__Teleop_SendGoal_Request__Sequence * lhs, const msgs__action__Teleop_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Teleop messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_SendGoal_Request__Sequence__copy(
  const msgs__action__Teleop_SendGoal_Request__Sequence * input,
  msgs__action__Teleop_SendGoal_Request__Sequence * output);

/// Initialize action/Teleop message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs__action__Teleop_SendGoal_Response
 * )) before or use
 * msgs__action__Teleop_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_SendGoal_Response__init(msgs__action__Teleop_SendGoal_Response * msg);

/// Finalize action/Teleop message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_SendGoal_Response__fini(msgs__action__Teleop_SendGoal_Response * msg);

/// Create action/Teleop message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs__action__Teleop_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_SendGoal_Response *
msgs__action__Teleop_SendGoal_Response__create();

/// Destroy action/Teleop message.
/**
 * It calls
 * msgs__action__Teleop_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_SendGoal_Response__destroy(msgs__action__Teleop_SendGoal_Response * msg);

/// Check for action/Teleop message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_SendGoal_Response__are_equal(const msgs__action__Teleop_SendGoal_Response * lhs, const msgs__action__Teleop_SendGoal_Response * rhs);

/// Copy a action/Teleop message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_SendGoal_Response__copy(
  const msgs__action__Teleop_SendGoal_Response * input,
  msgs__action__Teleop_SendGoal_Response * output);

/// Initialize array of action/Teleop messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs__action__Teleop_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_SendGoal_Response__Sequence__init(msgs__action__Teleop_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_SendGoal_Response__Sequence__fini(msgs__action__Teleop_SendGoal_Response__Sequence * array);

/// Create array of action/Teleop messages.
/**
 * It allocates the memory for the array and calls
 * msgs__action__Teleop_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_SendGoal_Response__Sequence *
msgs__action__Teleop_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_SendGoal_Response__Sequence__destroy(msgs__action__Teleop_SendGoal_Response__Sequence * array);

/// Check for action/Teleop message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_SendGoal_Response__Sequence__are_equal(const msgs__action__Teleop_SendGoal_Response__Sequence * lhs, const msgs__action__Teleop_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Teleop messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_SendGoal_Response__Sequence__copy(
  const msgs__action__Teleop_SendGoal_Response__Sequence * input,
  msgs__action__Teleop_SendGoal_Response__Sequence * output);

/// Initialize action/Teleop message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs__action__Teleop_GetResult_Request
 * )) before or use
 * msgs__action__Teleop_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_GetResult_Request__init(msgs__action__Teleop_GetResult_Request * msg);

/// Finalize action/Teleop message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_GetResult_Request__fini(msgs__action__Teleop_GetResult_Request * msg);

/// Create action/Teleop message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs__action__Teleop_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_GetResult_Request *
msgs__action__Teleop_GetResult_Request__create();

/// Destroy action/Teleop message.
/**
 * It calls
 * msgs__action__Teleop_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_GetResult_Request__destroy(msgs__action__Teleop_GetResult_Request * msg);

/// Check for action/Teleop message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_GetResult_Request__are_equal(const msgs__action__Teleop_GetResult_Request * lhs, const msgs__action__Teleop_GetResult_Request * rhs);

/// Copy a action/Teleop message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_GetResult_Request__copy(
  const msgs__action__Teleop_GetResult_Request * input,
  msgs__action__Teleop_GetResult_Request * output);

/// Initialize array of action/Teleop messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs__action__Teleop_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_GetResult_Request__Sequence__init(msgs__action__Teleop_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_GetResult_Request__Sequence__fini(msgs__action__Teleop_GetResult_Request__Sequence * array);

/// Create array of action/Teleop messages.
/**
 * It allocates the memory for the array and calls
 * msgs__action__Teleop_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_GetResult_Request__Sequence *
msgs__action__Teleop_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_GetResult_Request__Sequence__destroy(msgs__action__Teleop_GetResult_Request__Sequence * array);

/// Check for action/Teleop message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_GetResult_Request__Sequence__are_equal(const msgs__action__Teleop_GetResult_Request__Sequence * lhs, const msgs__action__Teleop_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Teleop messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_GetResult_Request__Sequence__copy(
  const msgs__action__Teleop_GetResult_Request__Sequence * input,
  msgs__action__Teleop_GetResult_Request__Sequence * output);

/// Initialize action/Teleop message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs__action__Teleop_GetResult_Response
 * )) before or use
 * msgs__action__Teleop_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_GetResult_Response__init(msgs__action__Teleop_GetResult_Response * msg);

/// Finalize action/Teleop message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_GetResult_Response__fini(msgs__action__Teleop_GetResult_Response * msg);

/// Create action/Teleop message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs__action__Teleop_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_GetResult_Response *
msgs__action__Teleop_GetResult_Response__create();

/// Destroy action/Teleop message.
/**
 * It calls
 * msgs__action__Teleop_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_GetResult_Response__destroy(msgs__action__Teleop_GetResult_Response * msg);

/// Check for action/Teleop message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_GetResult_Response__are_equal(const msgs__action__Teleop_GetResult_Response * lhs, const msgs__action__Teleop_GetResult_Response * rhs);

/// Copy a action/Teleop message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_GetResult_Response__copy(
  const msgs__action__Teleop_GetResult_Response * input,
  msgs__action__Teleop_GetResult_Response * output);

/// Initialize array of action/Teleop messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs__action__Teleop_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_GetResult_Response__Sequence__init(msgs__action__Teleop_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_GetResult_Response__Sequence__fini(msgs__action__Teleop_GetResult_Response__Sequence * array);

/// Create array of action/Teleop messages.
/**
 * It allocates the memory for the array and calls
 * msgs__action__Teleop_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_GetResult_Response__Sequence *
msgs__action__Teleop_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_GetResult_Response__Sequence__destroy(msgs__action__Teleop_GetResult_Response__Sequence * array);

/// Check for action/Teleop message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_GetResult_Response__Sequence__are_equal(const msgs__action__Teleop_GetResult_Response__Sequence * lhs, const msgs__action__Teleop_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Teleop messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_GetResult_Response__Sequence__copy(
  const msgs__action__Teleop_GetResult_Response__Sequence * input,
  msgs__action__Teleop_GetResult_Response__Sequence * output);

/// Initialize action/Teleop message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs__action__Teleop_FeedbackMessage
 * )) before or use
 * msgs__action__Teleop_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_FeedbackMessage__init(msgs__action__Teleop_FeedbackMessage * msg);

/// Finalize action/Teleop message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_FeedbackMessage__fini(msgs__action__Teleop_FeedbackMessage * msg);

/// Create action/Teleop message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs__action__Teleop_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_FeedbackMessage *
msgs__action__Teleop_FeedbackMessage__create();

/// Destroy action/Teleop message.
/**
 * It calls
 * msgs__action__Teleop_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_FeedbackMessage__destroy(msgs__action__Teleop_FeedbackMessage * msg);

/// Check for action/Teleop message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_FeedbackMessage__are_equal(const msgs__action__Teleop_FeedbackMessage * lhs, const msgs__action__Teleop_FeedbackMessage * rhs);

/// Copy a action/Teleop message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_FeedbackMessage__copy(
  const msgs__action__Teleop_FeedbackMessage * input,
  msgs__action__Teleop_FeedbackMessage * output);

/// Initialize array of action/Teleop messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs__action__Teleop_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_FeedbackMessage__Sequence__init(msgs__action__Teleop_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_FeedbackMessage__Sequence__fini(msgs__action__Teleop_FeedbackMessage__Sequence * array);

/// Create array of action/Teleop messages.
/**
 * It allocates the memory for the array and calls
 * msgs__action__Teleop_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
msgs__action__Teleop_FeedbackMessage__Sequence *
msgs__action__Teleop_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Teleop messages.
/**
 * It calls
 * msgs__action__Teleop_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
void
msgs__action__Teleop_FeedbackMessage__Sequence__destroy(msgs__action__Teleop_FeedbackMessage__Sequence * array);

/// Check for action/Teleop message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_FeedbackMessage__Sequence__are_equal(const msgs__action__Teleop_FeedbackMessage__Sequence * lhs, const msgs__action__Teleop_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Teleop messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs
bool
msgs__action__Teleop_FeedbackMessage__Sequence__copy(
  const msgs__action__Teleop_FeedbackMessage__Sequence * input,
  msgs__action__Teleop_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MSGS__ACTION__DETAIL__TELEOP__FUNCTIONS_H_
