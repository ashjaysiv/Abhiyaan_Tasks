// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msgs:action/Teleop.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"
#include "msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msgs/action/detail/teleop__functions.h"
#include "msgs/action/detail/teleop__struct.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/duration.h"
// Member `time`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs__action__Teleop_Goal__init(message_memory);
}

void Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_fini_function(void * message_memory)
{
  msgs__action__Teleop_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_message_member_array[1] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_Goal, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_message_members = {
  "msgs__action",  // message namespace
  "Teleop_Goal",  // message name
  1,  // number of fields
  sizeof(msgs__action__Teleop_Goal),
  Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_message_member_array,  // message members
  Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_message_type_support_handle = {
  0,
  &Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_Goal)() {
  Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_message_type_support_handle.typesupport_identifier) {
    Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Teleop_Goal__rosidl_typesupport_introspection_c__Teleop_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msgs/action/detail/teleop__functions.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"


// Include directives for member types
// Member `total_elapsed_time`
// already included above
// #include "builtin_interfaces/msg/duration.h"
// Member `total_elapsed_time`
// already included above
// #include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs__action__Teleop_Result__init(message_memory);
}

void Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_fini_function(void * message_memory)
{
  msgs__action__Teleop_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_message_member_array[2] = {
  {
    "total_elapsed_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_Result, total_elapsed_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_message_members = {
  "msgs__action",  // message namespace
  "Teleop_Result",  // message name
  2,  // number of fields
  sizeof(msgs__action__Teleop_Result),
  Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_message_member_array,  // message members
  Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_message_type_support_handle = {
  0,
  &Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_Result)() {
  Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_message_type_support_handle.typesupport_identifier) {
    Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Teleop_Result__rosidl_typesupport_introspection_c__Teleop_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msgs/action/detail/teleop__functions.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"


// Include directives for member types
// Member `time_left`
// already included above
// #include "builtin_interfaces/msg/duration.h"
// Member `time_left`
// already included above
// #include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs__action__Teleop_Feedback__init(message_memory);
}

void Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_fini_function(void * message_memory)
{
  msgs__action__Teleop_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_message_member_array[1] = {
  {
    "time_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_Feedback, time_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_message_members = {
  "msgs__action",  // message namespace
  "Teleop_Feedback",  // message name
  1,  // number of fields
  sizeof(msgs__action__Teleop_Feedback),
  Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_message_member_array,  // message members
  Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_message_type_support_handle = {
  0,
  &Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_Feedback)() {
  Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_message_type_support_handle.typesupport_identifier) {
    Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Teleop_Feedback__rosidl_typesupport_introspection_c__Teleop_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msgs/action/detail/teleop__functions.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "msgs/action/teleop.h"
// Member `goal`
// already included above
// #include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs__action__Teleop_SendGoal_Request__init(message_memory);
}

void Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_fini_function(void * message_memory)
{
  msgs__action__Teleop_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_message_members = {
  "msgs__action",  // message namespace
  "Teleop_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(msgs__action__Teleop_SendGoal_Request),
  Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_message_member_array,  // message members
  Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_message_type_support_handle = {
  0,
  &Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_SendGoal_Request)() {
  Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_Goal)();
  if (!Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Teleop_SendGoal_Request__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msgs/action/detail/teleop__functions.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs__action__Teleop_SendGoal_Response__init(message_memory);
}

void Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_fini_function(void * message_memory)
{
  msgs__action__Teleop_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_message_members = {
  "msgs__action",  // message namespace
  "Teleop_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(msgs__action__Teleop_SendGoal_Response),
  Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_message_member_array,  // message members
  Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_message_type_support_handle = {
  0,
  &Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_SendGoal_Response)() {
  Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Teleop_SendGoal_Response__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_SendGoal_service_members = {
  "msgs__action",  // service namespace
  "Teleop_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_SendGoal_service_type_support_handle = {
  0,
  &msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_SendGoal)() {
  if (!msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_SendGoal_service_type_support_handle.typesupport_identifier) {
    msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_SendGoal_Response)()->data;
  }

  return &msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msgs/action/detail/teleop__functions.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs__action__Teleop_GetResult_Request__init(message_memory);
}

void Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_fini_function(void * message_memory)
{
  msgs__action__Teleop_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_message_members = {
  "msgs__action",  // message namespace
  "Teleop_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(msgs__action__Teleop_GetResult_Request),
  Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_message_member_array,  // message members
  Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_message_type_support_handle = {
  0,
  &Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_GetResult_Request)() {
  Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Teleop_GetResult_Request__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msgs/action/detail/teleop__functions.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "msgs/action/teleop.h"
// Member `result`
// already included above
// #include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs__action__Teleop_GetResult_Response__init(message_memory);
}

void Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_fini_function(void * message_memory)
{
  msgs__action__Teleop_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_message_members = {
  "msgs__action",  // message namespace
  "Teleop_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(msgs__action__Teleop_GetResult_Response),
  Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_message_member_array,  // message members
  Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_message_type_support_handle = {
  0,
  &Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_GetResult_Response)() {
  Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_Result)();
  if (!Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Teleop_GetResult_Response__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_GetResult_service_members = {
  "msgs__action",  // service namespace
  "Teleop_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_GetResult_service_type_support_handle = {
  0,
  &msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_GetResult)() {
  if (!msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_GetResult_service_type_support_handle.typesupport_identifier) {
    msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_GetResult_Response)()->data;
  }

  return &msgs__action__detail__teleop__rosidl_typesupport_introspection_c__Teleop_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msgs/action/detail/teleop__functions.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "msgs/action/teleop.h"
// Member `feedback`
// already included above
// #include "msgs/action/detail/teleop__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs__action__Teleop_FeedbackMessage__init(message_memory);
}

void Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_fini_function(void * message_memory)
{
  msgs__action__Teleop_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs__action__Teleop_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_message_members = {
  "msgs__action",  // message namespace
  "Teleop_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(msgs__action__Teleop_FeedbackMessage),
  Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_message_member_array,  // message members
  Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_message_type_support_handle = {
  0,
  &Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_FeedbackMessage)() {
  Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_Feedback)();
  if (!Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Teleop_FeedbackMessage__rosidl_typesupport_introspection_c__Teleop_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
