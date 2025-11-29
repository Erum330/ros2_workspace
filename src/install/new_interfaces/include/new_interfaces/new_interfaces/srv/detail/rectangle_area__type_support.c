// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from new_interfaces:srv/RectangleArea.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "new_interfaces/srv/detail/rectangle_area__rosidl_typesupport_introspection_c.h"
#include "new_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "new_interfaces/srv/detail/rectangle_area__functions.h"
#include "new_interfaces/srv/detail/rectangle_area__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  new_interfaces__srv__RectangleArea_Request__init(message_memory);
}

void new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_fini_function(void * message_memory)
{
  new_interfaces__srv__RectangleArea_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_message_member_array[2] = {
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(new_interfaces__srv__RectangleArea_Request, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(new_interfaces__srv__RectangleArea_Request, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_message_members = {
  "new_interfaces__srv",  // message namespace
  "RectangleArea_Request",  // message name
  2,  // number of fields
  sizeof(new_interfaces__srv__RectangleArea_Request),
  false,  // has_any_key_member_
  new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_message_member_array,  // message members
  new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_message_type_support_handle = {
  0,
  &new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_message_members,
  get_message_typesupport_handle_function,
  &new_interfaces__srv__RectangleArea_Request__get_type_hash,
  &new_interfaces__srv__RectangleArea_Request__get_type_description,
  &new_interfaces__srv__RectangleArea_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_new_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, new_interfaces, srv, RectangleArea_Request)() {
  if (!new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_message_type_support_handle.typesupport_identifier) {
    new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "new_interfaces/srv/detail/rectangle_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "new_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "new_interfaces/srv/detail/rectangle_area__functions.h"
// already included above
// #include "new_interfaces/srv/detail/rectangle_area__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  new_interfaces__srv__RectangleArea_Response__init(message_memory);
}

void new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_fini_function(void * message_memory)
{
  new_interfaces__srv__RectangleArea_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_message_member_array[1] = {
  {
    "area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(new_interfaces__srv__RectangleArea_Response, area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_message_members = {
  "new_interfaces__srv",  // message namespace
  "RectangleArea_Response",  // message name
  1,  // number of fields
  sizeof(new_interfaces__srv__RectangleArea_Response),
  false,  // has_any_key_member_
  new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_message_member_array,  // message members
  new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_message_type_support_handle = {
  0,
  &new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_message_members,
  get_message_typesupport_handle_function,
  &new_interfaces__srv__RectangleArea_Response__get_type_hash,
  &new_interfaces__srv__RectangleArea_Response__get_type_description,
  &new_interfaces__srv__RectangleArea_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_new_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, new_interfaces, srv, RectangleArea_Response)() {
  if (!new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_message_type_support_handle.typesupport_identifier) {
    new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "new_interfaces/srv/detail/rectangle_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "new_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "new_interfaces/srv/detail/rectangle_area__functions.h"
// already included above
// #include "new_interfaces/srv/detail/rectangle_area__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "new_interfaces/srv/rectangle_area.h"
// Member `request`
// Member `response`
// already included above
// #include "new_interfaces/srv/detail/rectangle_area__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  new_interfaces__srv__RectangleArea_Event__init(message_memory);
}

void new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_fini_function(void * message_memory)
{
  new_interfaces__srv__RectangleArea_Event__fini(message_memory);
}

size_t new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__size_function__RectangleArea_Event__request(
  const void * untyped_member)
{
  const new_interfaces__srv__RectangleArea_Request__Sequence * member =
    (const new_interfaces__srv__RectangleArea_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__get_const_function__RectangleArea_Event__request(
  const void * untyped_member, size_t index)
{
  const new_interfaces__srv__RectangleArea_Request__Sequence * member =
    (const new_interfaces__srv__RectangleArea_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__get_function__RectangleArea_Event__request(
  void * untyped_member, size_t index)
{
  new_interfaces__srv__RectangleArea_Request__Sequence * member =
    (new_interfaces__srv__RectangleArea_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__fetch_function__RectangleArea_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const new_interfaces__srv__RectangleArea_Request * item =
    ((const new_interfaces__srv__RectangleArea_Request *)
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__get_const_function__RectangleArea_Event__request(untyped_member, index));
  new_interfaces__srv__RectangleArea_Request * value =
    (new_interfaces__srv__RectangleArea_Request *)(untyped_value);
  *value = *item;
}

void new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__assign_function__RectangleArea_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  new_interfaces__srv__RectangleArea_Request * item =
    ((new_interfaces__srv__RectangleArea_Request *)
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__get_function__RectangleArea_Event__request(untyped_member, index));
  const new_interfaces__srv__RectangleArea_Request * value =
    (const new_interfaces__srv__RectangleArea_Request *)(untyped_value);
  *item = *value;
}

bool new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__resize_function__RectangleArea_Event__request(
  void * untyped_member, size_t size)
{
  new_interfaces__srv__RectangleArea_Request__Sequence * member =
    (new_interfaces__srv__RectangleArea_Request__Sequence *)(untyped_member);
  new_interfaces__srv__RectangleArea_Request__Sequence__fini(member);
  return new_interfaces__srv__RectangleArea_Request__Sequence__init(member, size);
}

size_t new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__size_function__RectangleArea_Event__response(
  const void * untyped_member)
{
  const new_interfaces__srv__RectangleArea_Response__Sequence * member =
    (const new_interfaces__srv__RectangleArea_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__get_const_function__RectangleArea_Event__response(
  const void * untyped_member, size_t index)
{
  const new_interfaces__srv__RectangleArea_Response__Sequence * member =
    (const new_interfaces__srv__RectangleArea_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__get_function__RectangleArea_Event__response(
  void * untyped_member, size_t index)
{
  new_interfaces__srv__RectangleArea_Response__Sequence * member =
    (new_interfaces__srv__RectangleArea_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__fetch_function__RectangleArea_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const new_interfaces__srv__RectangleArea_Response * item =
    ((const new_interfaces__srv__RectangleArea_Response *)
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__get_const_function__RectangleArea_Event__response(untyped_member, index));
  new_interfaces__srv__RectangleArea_Response * value =
    (new_interfaces__srv__RectangleArea_Response *)(untyped_value);
  *value = *item;
}

void new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__assign_function__RectangleArea_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  new_interfaces__srv__RectangleArea_Response * item =
    ((new_interfaces__srv__RectangleArea_Response *)
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__get_function__RectangleArea_Event__response(untyped_member, index));
  const new_interfaces__srv__RectangleArea_Response * value =
    (const new_interfaces__srv__RectangleArea_Response *)(untyped_value);
  *item = *value;
}

bool new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__resize_function__RectangleArea_Event__response(
  void * untyped_member, size_t size)
{
  new_interfaces__srv__RectangleArea_Response__Sequence * member =
    (new_interfaces__srv__RectangleArea_Response__Sequence *)(untyped_member);
  new_interfaces__srv__RectangleArea_Response__Sequence__fini(member);
  return new_interfaces__srv__RectangleArea_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(new_interfaces__srv__RectangleArea_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(new_interfaces__srv__RectangleArea_Event, request),  // bytes offset in struct
    NULL,  // default value
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__size_function__RectangleArea_Event__request,  // size() function pointer
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__get_const_function__RectangleArea_Event__request,  // get_const(index) function pointer
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__get_function__RectangleArea_Event__request,  // get(index) function pointer
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__fetch_function__RectangleArea_Event__request,  // fetch(index, &value) function pointer
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__assign_function__RectangleArea_Event__request,  // assign(index, value) function pointer
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__resize_function__RectangleArea_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(new_interfaces__srv__RectangleArea_Event, response),  // bytes offset in struct
    NULL,  // default value
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__size_function__RectangleArea_Event__response,  // size() function pointer
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__get_const_function__RectangleArea_Event__response,  // get_const(index) function pointer
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__get_function__RectangleArea_Event__response,  // get(index) function pointer
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__fetch_function__RectangleArea_Event__response,  // fetch(index, &value) function pointer
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__assign_function__RectangleArea_Event__response,  // assign(index, value) function pointer
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__resize_function__RectangleArea_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_message_members = {
  "new_interfaces__srv",  // message namespace
  "RectangleArea_Event",  // message name
  3,  // number of fields
  sizeof(new_interfaces__srv__RectangleArea_Event),
  false,  // has_any_key_member_
  new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_message_member_array,  // message members
  new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_message_type_support_handle = {
  0,
  &new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_message_members,
  get_message_typesupport_handle_function,
  &new_interfaces__srv__RectangleArea_Event__get_type_hash,
  &new_interfaces__srv__RectangleArea_Event__get_type_description,
  &new_interfaces__srv__RectangleArea_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_new_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, new_interfaces, srv, RectangleArea_Event)() {
  new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, new_interfaces, srv, RectangleArea_Request)();
  new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, new_interfaces, srv, RectangleArea_Response)();
  if (!new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_message_type_support_handle.typesupport_identifier) {
    new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "new_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "new_interfaces/srv/detail/rectangle_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers new_interfaces__srv__detail__rectangle_area__rosidl_typesupport_introspection_c__RectangleArea_service_members = {
  "new_interfaces__srv",  // service namespace
  "RectangleArea",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // new_interfaces__srv__detail__rectangle_area__rosidl_typesupport_introspection_c__RectangleArea_Request_message_type_support_handle,
  NULL,  // response message
  // new_interfaces__srv__detail__rectangle_area__rosidl_typesupport_introspection_c__RectangleArea_Response_message_type_support_handle
  NULL  // event_message
  // new_interfaces__srv__detail__rectangle_area__rosidl_typesupport_introspection_c__RectangleArea_Response_message_type_support_handle
};


static rosidl_service_type_support_t new_interfaces__srv__detail__rectangle_area__rosidl_typesupport_introspection_c__RectangleArea_service_type_support_handle = {
  0,
  &new_interfaces__srv__detail__rectangle_area__rosidl_typesupport_introspection_c__RectangleArea_service_members,
  get_service_typesupport_handle_function,
  &new_interfaces__srv__RectangleArea_Request__rosidl_typesupport_introspection_c__RectangleArea_Request_message_type_support_handle,
  &new_interfaces__srv__RectangleArea_Response__rosidl_typesupport_introspection_c__RectangleArea_Response_message_type_support_handle,
  &new_interfaces__srv__RectangleArea_Event__rosidl_typesupport_introspection_c__RectangleArea_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    new_interfaces,
    srv,
    RectangleArea
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    new_interfaces,
    srv,
    RectangleArea
  ),
  &new_interfaces__srv__RectangleArea__get_type_hash,
  &new_interfaces__srv__RectangleArea__get_type_description,
  &new_interfaces__srv__RectangleArea__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, new_interfaces, srv, RectangleArea_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, new_interfaces, srv, RectangleArea_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, new_interfaces, srv, RectangleArea_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_new_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, new_interfaces, srv, RectangleArea)(void) {
  if (!new_interfaces__srv__detail__rectangle_area__rosidl_typesupport_introspection_c__RectangleArea_service_type_support_handle.typesupport_identifier) {
    new_interfaces__srv__detail__rectangle_area__rosidl_typesupport_introspection_c__RectangleArea_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)new_interfaces__srv__detail__rectangle_area__rosidl_typesupport_introspection_c__RectangleArea_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, new_interfaces, srv, RectangleArea_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, new_interfaces, srv, RectangleArea_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, new_interfaces, srv, RectangleArea_Event)()->data;
  }

  return &new_interfaces__srv__detail__rectangle_area__rosidl_typesupport_introspection_c__RectangleArea_service_type_support_handle;
}
