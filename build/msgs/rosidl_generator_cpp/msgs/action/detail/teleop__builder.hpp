// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msgs:action/Teleop.idl
// generated code does not contain a copyright notice

#ifndef MSGS__ACTION__DETAIL__TELEOP__BUILDER_HPP_
#define MSGS__ACTION__DETAIL__TELEOP__BUILDER_HPP_

#include "msgs/action/detail/teleop__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msgs
{

namespace action
{

namespace builder
{

class Init_Teleop_Goal_time
{
public:
  Init_Teleop_Goal_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msgs::action::Teleop_Goal time(::msgs::action::Teleop_Goal::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs::action::Teleop_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs::action::Teleop_Goal>()
{
  return msgs::action::builder::Init_Teleop_Goal_time();
}

}  // namespace msgs


namespace msgs
{

namespace action
{

namespace builder
{

class Init_Teleop_Result_error_code
{
public:
  explicit Init_Teleop_Result_error_code(::msgs::action::Teleop_Result & msg)
  : msg_(msg)
  {}
  ::msgs::action::Teleop_Result error_code(::msgs::action::Teleop_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs::action::Teleop_Result msg_;
};

class Init_Teleop_Result_total_elapsed_time
{
public:
  Init_Teleop_Result_total_elapsed_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Teleop_Result_error_code total_elapsed_time(::msgs::action::Teleop_Result::_total_elapsed_time_type arg)
  {
    msg_.total_elapsed_time = std::move(arg);
    return Init_Teleop_Result_error_code(msg_);
  }

private:
  ::msgs::action::Teleop_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs::action::Teleop_Result>()
{
  return msgs::action::builder::Init_Teleop_Result_total_elapsed_time();
}

}  // namespace msgs


namespace msgs
{

namespace action
{

namespace builder
{

class Init_Teleop_Feedback_time_left
{
public:
  Init_Teleop_Feedback_time_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msgs::action::Teleop_Feedback time_left(::msgs::action::Teleop_Feedback::_time_left_type arg)
  {
    msg_.time_left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs::action::Teleop_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs::action::Teleop_Feedback>()
{
  return msgs::action::builder::Init_Teleop_Feedback_time_left();
}

}  // namespace msgs


namespace msgs
{

namespace action
{

namespace builder
{

class Init_Teleop_SendGoal_Request_goal
{
public:
  explicit Init_Teleop_SendGoal_Request_goal(::msgs::action::Teleop_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::msgs::action::Teleop_SendGoal_Request goal(::msgs::action::Teleop_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs::action::Teleop_SendGoal_Request msg_;
};

class Init_Teleop_SendGoal_Request_goal_id
{
public:
  Init_Teleop_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Teleop_SendGoal_Request_goal goal_id(::msgs::action::Teleop_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Teleop_SendGoal_Request_goal(msg_);
  }

private:
  ::msgs::action::Teleop_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs::action::Teleop_SendGoal_Request>()
{
  return msgs::action::builder::Init_Teleop_SendGoal_Request_goal_id();
}

}  // namespace msgs


namespace msgs
{

namespace action
{

namespace builder
{

class Init_Teleop_SendGoal_Response_stamp
{
public:
  explicit Init_Teleop_SendGoal_Response_stamp(::msgs::action::Teleop_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::msgs::action::Teleop_SendGoal_Response stamp(::msgs::action::Teleop_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs::action::Teleop_SendGoal_Response msg_;
};

class Init_Teleop_SendGoal_Response_accepted
{
public:
  Init_Teleop_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Teleop_SendGoal_Response_stamp accepted(::msgs::action::Teleop_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Teleop_SendGoal_Response_stamp(msg_);
  }

private:
  ::msgs::action::Teleop_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs::action::Teleop_SendGoal_Response>()
{
  return msgs::action::builder::Init_Teleop_SendGoal_Response_accepted();
}

}  // namespace msgs


namespace msgs
{

namespace action
{

namespace builder
{

class Init_Teleop_GetResult_Request_goal_id
{
public:
  Init_Teleop_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msgs::action::Teleop_GetResult_Request goal_id(::msgs::action::Teleop_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs::action::Teleop_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs::action::Teleop_GetResult_Request>()
{
  return msgs::action::builder::Init_Teleop_GetResult_Request_goal_id();
}

}  // namespace msgs


namespace msgs
{

namespace action
{

namespace builder
{

class Init_Teleop_GetResult_Response_result
{
public:
  explicit Init_Teleop_GetResult_Response_result(::msgs::action::Teleop_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::msgs::action::Teleop_GetResult_Response result(::msgs::action::Teleop_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs::action::Teleop_GetResult_Response msg_;
};

class Init_Teleop_GetResult_Response_status
{
public:
  Init_Teleop_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Teleop_GetResult_Response_result status(::msgs::action::Teleop_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Teleop_GetResult_Response_result(msg_);
  }

private:
  ::msgs::action::Teleop_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs::action::Teleop_GetResult_Response>()
{
  return msgs::action::builder::Init_Teleop_GetResult_Response_status();
}

}  // namespace msgs


namespace msgs
{

namespace action
{

namespace builder
{

class Init_Teleop_FeedbackMessage_feedback
{
public:
  explicit Init_Teleop_FeedbackMessage_feedback(::msgs::action::Teleop_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::msgs::action::Teleop_FeedbackMessage feedback(::msgs::action::Teleop_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs::action::Teleop_FeedbackMessage msg_;
};

class Init_Teleop_FeedbackMessage_goal_id
{
public:
  Init_Teleop_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Teleop_FeedbackMessage_feedback goal_id(::msgs::action::Teleop_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Teleop_FeedbackMessage_feedback(msg_);
  }

private:
  ::msgs::action::Teleop_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs::action::Teleop_FeedbackMessage>()
{
  return msgs::action::builder::Init_Teleop_FeedbackMessage_goal_id();
}

}  // namespace msgs

#endif  // MSGS__ACTION__DETAIL__TELEOP__BUILDER_HPP_
