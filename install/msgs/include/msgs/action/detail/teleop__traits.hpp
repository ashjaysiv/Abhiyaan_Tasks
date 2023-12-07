// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msgs:action/Teleop.idl
// generated code does not contain a copyright notice

#ifndef MSGS__ACTION__DETAIL__TELEOP__TRAITS_HPP_
#define MSGS__ACTION__DETAIL__TELEOP__TRAITS_HPP_

#include "msgs/action/detail/teleop__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs::action::Teleop_Goal>()
{
  return "msgs::action::Teleop_Goal";
}

template<>
inline const char * name<msgs::action::Teleop_Goal>()
{
  return "msgs/action/Teleop_Goal";
}

template<>
struct has_fixed_size<msgs::action::Teleop_Goal>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<msgs::action::Teleop_Goal>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<msgs::action::Teleop_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'total_elapsed_time'
// already included above
// #include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs::action::Teleop_Result>()
{
  return "msgs::action::Teleop_Result";
}

template<>
inline const char * name<msgs::action::Teleop_Result>()
{
  return "msgs/action/Teleop_Result";
}

template<>
struct has_fixed_size<msgs::action::Teleop_Result>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<msgs::action::Teleop_Result>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<msgs::action::Teleop_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'time_left'
// already included above
// #include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs::action::Teleop_Feedback>()
{
  return "msgs::action::Teleop_Feedback";
}

template<>
inline const char * name<msgs::action::Teleop_Feedback>()
{
  return "msgs/action/Teleop_Feedback";
}

template<>
struct has_fixed_size<msgs::action::Teleop_Feedback>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<msgs::action::Teleop_Feedback>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<msgs::action::Teleop_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "msgs/action/detail/teleop__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs::action::Teleop_SendGoal_Request>()
{
  return "msgs::action::Teleop_SendGoal_Request";
}

template<>
inline const char * name<msgs::action::Teleop_SendGoal_Request>()
{
  return "msgs/action/Teleop_SendGoal_Request";
}

template<>
struct has_fixed_size<msgs::action::Teleop_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<msgs::action::Teleop_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<msgs::action::Teleop_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<msgs::action::Teleop_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<msgs::action::Teleop_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs::action::Teleop_SendGoal_Response>()
{
  return "msgs::action::Teleop_SendGoal_Response";
}

template<>
inline const char * name<msgs::action::Teleop_SendGoal_Response>()
{
  return "msgs/action/Teleop_SendGoal_Response";
}

template<>
struct has_fixed_size<msgs::action::Teleop_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<msgs::action::Teleop_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<msgs::action::Teleop_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs::action::Teleop_SendGoal>()
{
  return "msgs::action::Teleop_SendGoal";
}

template<>
inline const char * name<msgs::action::Teleop_SendGoal>()
{
  return "msgs/action/Teleop_SendGoal";
}

template<>
struct has_fixed_size<msgs::action::Teleop_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<msgs::action::Teleop_SendGoal_Request>::value &&
    has_fixed_size<msgs::action::Teleop_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<msgs::action::Teleop_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<msgs::action::Teleop_SendGoal_Request>::value &&
    has_bounded_size<msgs::action::Teleop_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<msgs::action::Teleop_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<msgs::action::Teleop_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msgs::action::Teleop_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs::action::Teleop_GetResult_Request>()
{
  return "msgs::action::Teleop_GetResult_Request";
}

template<>
inline const char * name<msgs::action::Teleop_GetResult_Request>()
{
  return "msgs/action/Teleop_GetResult_Request";
}

template<>
struct has_fixed_size<msgs::action::Teleop_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<msgs::action::Teleop_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<msgs::action::Teleop_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "msgs/action/detail/teleop__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs::action::Teleop_GetResult_Response>()
{
  return "msgs::action::Teleop_GetResult_Response";
}

template<>
inline const char * name<msgs::action::Teleop_GetResult_Response>()
{
  return "msgs/action/Teleop_GetResult_Response";
}

template<>
struct has_fixed_size<msgs::action::Teleop_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<msgs::action::Teleop_Result>::value> {};

template<>
struct has_bounded_size<msgs::action::Teleop_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<msgs::action::Teleop_Result>::value> {};

template<>
struct is_message<msgs::action::Teleop_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs::action::Teleop_GetResult>()
{
  return "msgs::action::Teleop_GetResult";
}

template<>
inline const char * name<msgs::action::Teleop_GetResult>()
{
  return "msgs/action/Teleop_GetResult";
}

template<>
struct has_fixed_size<msgs::action::Teleop_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<msgs::action::Teleop_GetResult_Request>::value &&
    has_fixed_size<msgs::action::Teleop_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<msgs::action::Teleop_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<msgs::action::Teleop_GetResult_Request>::value &&
    has_bounded_size<msgs::action::Teleop_GetResult_Response>::value
  >
{
};

template<>
struct is_service<msgs::action::Teleop_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<msgs::action::Teleop_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msgs::action::Teleop_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "msgs/action/detail/teleop__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs::action::Teleop_FeedbackMessage>()
{
  return "msgs::action::Teleop_FeedbackMessage";
}

template<>
inline const char * name<msgs::action::Teleop_FeedbackMessage>()
{
  return "msgs/action/Teleop_FeedbackMessage";
}

template<>
struct has_fixed_size<msgs::action::Teleop_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<msgs::action::Teleop_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<msgs::action::Teleop_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<msgs::action::Teleop_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<msgs::action::Teleop_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<msgs::action::Teleop>
  : std::true_type
{
};

template<>
struct is_action_goal<msgs::action::Teleop_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<msgs::action::Teleop_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<msgs::action::Teleop_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MSGS__ACTION__DETAIL__TELEOP__TRAITS_HPP_
