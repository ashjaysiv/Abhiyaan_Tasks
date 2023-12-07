// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from msgs:action/Teleop.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "msgs/action/detail/teleop__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Teleop_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleop_Goal_type_support_ids_t;

static const _Teleop_Goal_type_support_ids_t _Teleop_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleop_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleop_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleop_Goal_type_support_symbol_names_t _Teleop_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs, action, Teleop_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_Goal)),
  }
};

typedef struct _Teleop_Goal_type_support_data_t
{
  void * data[2];
} _Teleop_Goal_type_support_data_t;

static _Teleop_Goal_type_support_data_t _Teleop_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleop_Goal_message_typesupport_map = {
  2,
  "msgs",
  &_Teleop_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Teleop_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Teleop_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Teleop_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleop_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msgs, action, Teleop_Goal)() {
  return &::msgs::action::rosidl_typesupport_c::Teleop_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Teleop_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleop_Result_type_support_ids_t;

static const _Teleop_Result_type_support_ids_t _Teleop_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleop_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleop_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleop_Result_type_support_symbol_names_t _Teleop_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs, action, Teleop_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_Result)),
  }
};

typedef struct _Teleop_Result_type_support_data_t
{
  void * data[2];
} _Teleop_Result_type_support_data_t;

static _Teleop_Result_type_support_data_t _Teleop_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleop_Result_message_typesupport_map = {
  2,
  "msgs",
  &_Teleop_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Teleop_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Teleop_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Teleop_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleop_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msgs, action, Teleop_Result)() {
  return &::msgs::action::rosidl_typesupport_c::Teleop_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Teleop_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleop_Feedback_type_support_ids_t;

static const _Teleop_Feedback_type_support_ids_t _Teleop_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleop_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleop_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleop_Feedback_type_support_symbol_names_t _Teleop_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs, action, Teleop_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_Feedback)),
  }
};

typedef struct _Teleop_Feedback_type_support_data_t
{
  void * data[2];
} _Teleop_Feedback_type_support_data_t;

static _Teleop_Feedback_type_support_data_t _Teleop_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleop_Feedback_message_typesupport_map = {
  2,
  "msgs",
  &_Teleop_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Teleop_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Teleop_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Teleop_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleop_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msgs, action, Teleop_Feedback)() {
  return &::msgs::action::rosidl_typesupport_c::Teleop_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Teleop_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleop_SendGoal_Request_type_support_ids_t;

static const _Teleop_SendGoal_Request_type_support_ids_t _Teleop_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleop_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleop_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleop_SendGoal_Request_type_support_symbol_names_t _Teleop_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs, action, Teleop_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_SendGoal_Request)),
  }
};

typedef struct _Teleop_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Teleop_SendGoal_Request_type_support_data_t;

static _Teleop_SendGoal_Request_type_support_data_t _Teleop_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleop_SendGoal_Request_message_typesupport_map = {
  2,
  "msgs",
  &_Teleop_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Teleop_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Teleop_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Teleop_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleop_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msgs, action, Teleop_SendGoal_Request)() {
  return &::msgs::action::rosidl_typesupport_c::Teleop_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Teleop_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleop_SendGoal_Response_type_support_ids_t;

static const _Teleop_SendGoal_Response_type_support_ids_t _Teleop_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleop_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleop_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleop_SendGoal_Response_type_support_symbol_names_t _Teleop_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs, action, Teleop_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_SendGoal_Response)),
  }
};

typedef struct _Teleop_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Teleop_SendGoal_Response_type_support_data_t;

static _Teleop_SendGoal_Response_type_support_data_t _Teleop_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleop_SendGoal_Response_message_typesupport_map = {
  2,
  "msgs",
  &_Teleop_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Teleop_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Teleop_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Teleop_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleop_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msgs, action, Teleop_SendGoal_Response)() {
  return &::msgs::action::rosidl_typesupport_c::Teleop_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Teleop_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleop_SendGoal_type_support_ids_t;

static const _Teleop_SendGoal_type_support_ids_t _Teleop_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleop_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleop_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleop_SendGoal_type_support_symbol_names_t _Teleop_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs, action, Teleop_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_SendGoal)),
  }
};

typedef struct _Teleop_SendGoal_type_support_data_t
{
  void * data[2];
} _Teleop_SendGoal_type_support_data_t;

static _Teleop_SendGoal_type_support_data_t _Teleop_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleop_SendGoal_service_typesupport_map = {
  2,
  "msgs",
  &_Teleop_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Teleop_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Teleop_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Teleop_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleop_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, msgs, action, Teleop_SendGoal)() {
  return &::msgs::action::rosidl_typesupport_c::Teleop_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Teleop_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleop_GetResult_Request_type_support_ids_t;

static const _Teleop_GetResult_Request_type_support_ids_t _Teleop_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleop_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleop_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleop_GetResult_Request_type_support_symbol_names_t _Teleop_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs, action, Teleop_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_GetResult_Request)),
  }
};

typedef struct _Teleop_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Teleop_GetResult_Request_type_support_data_t;

static _Teleop_GetResult_Request_type_support_data_t _Teleop_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleop_GetResult_Request_message_typesupport_map = {
  2,
  "msgs",
  &_Teleop_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Teleop_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Teleop_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Teleop_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleop_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msgs, action, Teleop_GetResult_Request)() {
  return &::msgs::action::rosidl_typesupport_c::Teleop_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Teleop_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleop_GetResult_Response_type_support_ids_t;

static const _Teleop_GetResult_Response_type_support_ids_t _Teleop_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleop_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleop_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleop_GetResult_Response_type_support_symbol_names_t _Teleop_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs, action, Teleop_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_GetResult_Response)),
  }
};

typedef struct _Teleop_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Teleop_GetResult_Response_type_support_data_t;

static _Teleop_GetResult_Response_type_support_data_t _Teleop_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleop_GetResult_Response_message_typesupport_map = {
  2,
  "msgs",
  &_Teleop_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Teleop_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Teleop_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Teleop_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleop_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msgs, action, Teleop_GetResult_Response)() {
  return &::msgs::action::rosidl_typesupport_c::Teleop_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Teleop_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleop_GetResult_type_support_ids_t;

static const _Teleop_GetResult_type_support_ids_t _Teleop_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleop_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleop_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleop_GetResult_type_support_symbol_names_t _Teleop_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs, action, Teleop_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_GetResult)),
  }
};

typedef struct _Teleop_GetResult_type_support_data_t
{
  void * data[2];
} _Teleop_GetResult_type_support_data_t;

static _Teleop_GetResult_type_support_data_t _Teleop_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleop_GetResult_service_typesupport_map = {
  2,
  "msgs",
  &_Teleop_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Teleop_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Teleop_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Teleop_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleop_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, msgs, action, Teleop_GetResult)() {
  return &::msgs::action::rosidl_typesupport_c::Teleop_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "msgs/action/detail/teleop__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Teleop_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Teleop_FeedbackMessage_type_support_ids_t;

static const _Teleop_FeedbackMessage_type_support_ids_t _Teleop_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Teleop_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Teleop_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Teleop_FeedbackMessage_type_support_symbol_names_t _Teleop_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs, action, Teleop_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs, action, Teleop_FeedbackMessage)),
  }
};

typedef struct _Teleop_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Teleop_FeedbackMessage_type_support_data_t;

static _Teleop_FeedbackMessage_type_support_data_t _Teleop_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Teleop_FeedbackMessage_message_typesupport_map = {
  2,
  "msgs",
  &_Teleop_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Teleop_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Teleop_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Teleop_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Teleop_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msgs, action, Teleop_FeedbackMessage)() {
  return &::msgs::action::rosidl_typesupport_c::Teleop_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "msgs/action/teleop.h"
#include "msgs/action/detail/teleop__type_support.h"

static rosidl_action_type_support_t _msgs__action__Teleop__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_msgs
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, msgs, action, Teleop)()
{
  // Thread-safe by always writing the same values to the static struct
  _msgs__action__Teleop__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, msgs, action, Teleop_SendGoal)();
  _msgs__action__Teleop__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, msgs, action, Teleop_GetResult)();
  _msgs__action__Teleop__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _msgs__action__Teleop__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, msgs, action, Teleop_FeedbackMessage)();
  _msgs__action__Teleop__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_msgs__action__Teleop__typesupport_c;
}

#ifdef __cplusplus
}
#endif
