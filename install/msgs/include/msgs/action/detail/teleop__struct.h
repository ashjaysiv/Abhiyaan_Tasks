// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msgs:action/Teleop.idl
// generated code does not contain a copyright notice

#ifndef MSGS__ACTION__DETAIL__TELEOP__STRUCT_H_
#define MSGS__ACTION__DETAIL__TELEOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in action/Teleop in the package msgs.
typedef struct msgs__action__Teleop_Goal
{
  builtin_interfaces__msg__Duration time;
} msgs__action__Teleop_Goal;

// Struct for a sequence of msgs__action__Teleop_Goal.
typedef struct msgs__action__Teleop_Goal__Sequence
{
  msgs__action__Teleop_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs__action__Teleop_Goal__Sequence;


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  msgs__action__Teleop_Result__NONE = 0
};

/// Constant 'TIMEOUT'.
enum
{
  msgs__action__Teleop_Result__TIMEOUT = 731
};

/// Constant 'TF_ERROR'.
enum
{
  msgs__action__Teleop_Result__TF_ERROR = 732
};

// Include directives for member types
// Member 'total_elapsed_time'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in action/Teleop in the package msgs.
typedef struct msgs__action__Teleop_Result
{
  builtin_interfaces__msg__Duration total_elapsed_time;
  uint16_t error_code;
} msgs__action__Teleop_Result;

// Struct for a sequence of msgs__action__Teleop_Result.
typedef struct msgs__action__Teleop_Result__Sequence
{
  msgs__action__Teleop_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs__action__Teleop_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'time_left'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in action/Teleop in the package msgs.
typedef struct msgs__action__Teleop_Feedback
{
  builtin_interfaces__msg__Duration time_left;
} msgs__action__Teleop_Feedback;

// Struct for a sequence of msgs__action__Teleop_Feedback.
typedef struct msgs__action__Teleop_Feedback__Sequence
{
  msgs__action__Teleop_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs__action__Teleop_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "msgs/action/detail/teleop__struct.h"

// Struct defined in action/Teleop in the package msgs.
typedef struct msgs__action__Teleop_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  msgs__action__Teleop_Goal goal;
} msgs__action__Teleop_SendGoal_Request;

// Struct for a sequence of msgs__action__Teleop_SendGoal_Request.
typedef struct msgs__action__Teleop_SendGoal_Request__Sequence
{
  msgs__action__Teleop_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs__action__Teleop_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Teleop in the package msgs.
typedef struct msgs__action__Teleop_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} msgs__action__Teleop_SendGoal_Response;

// Struct for a sequence of msgs__action__Teleop_SendGoal_Response.
typedef struct msgs__action__Teleop_SendGoal_Response__Sequence
{
  msgs__action__Teleop_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs__action__Teleop_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Teleop in the package msgs.
typedef struct msgs__action__Teleop_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} msgs__action__Teleop_GetResult_Request;

// Struct for a sequence of msgs__action__Teleop_GetResult_Request.
typedef struct msgs__action__Teleop_GetResult_Request__Sequence
{
  msgs__action__Teleop_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs__action__Teleop_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "msgs/action/detail/teleop__struct.h"

// Struct defined in action/Teleop in the package msgs.
typedef struct msgs__action__Teleop_GetResult_Response
{
  int8_t status;
  msgs__action__Teleop_Result result;
} msgs__action__Teleop_GetResult_Response;

// Struct for a sequence of msgs__action__Teleop_GetResult_Response.
typedef struct msgs__action__Teleop_GetResult_Response__Sequence
{
  msgs__action__Teleop_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs__action__Teleop_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "msgs/action/detail/teleop__struct.h"

// Struct defined in action/Teleop in the package msgs.
typedef struct msgs__action__Teleop_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  msgs__action__Teleop_Feedback feedback;
} msgs__action__Teleop_FeedbackMessage;

// Struct for a sequence of msgs__action__Teleop_FeedbackMessage.
typedef struct msgs__action__Teleop_FeedbackMessage__Sequence
{
  msgs__action__Teleop_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs__action__Teleop_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSGS__ACTION__DETAIL__TELEOP__STRUCT_H_
