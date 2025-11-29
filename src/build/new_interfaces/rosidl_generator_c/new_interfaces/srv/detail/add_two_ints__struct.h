// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from new_interfaces:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "new_interfaces/srv/add_two_ints.h"


#ifndef NEW_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
#define NEW_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package new_interfaces.
typedef struct new_interfaces__srv__AddTwoInts_Request
{
  int64_t a;
  int64_t b;
} new_interfaces__srv__AddTwoInts_Request;

// Struct for a sequence of new_interfaces__srv__AddTwoInts_Request.
typedef struct new_interfaces__srv__AddTwoInts_Request__Sequence
{
  new_interfaces__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} new_interfaces__srv__AddTwoInts_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package new_interfaces.
typedef struct new_interfaces__srv__AddTwoInts_Response
{
  int64_t sum;
} new_interfaces__srv__AddTwoInts_Response;

// Struct for a sequence of new_interfaces__srv__AddTwoInts_Response.
typedef struct new_interfaces__srv__AddTwoInts_Response__Sequence
{
  new_interfaces__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} new_interfaces__srv__AddTwoInts_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  new_interfaces__srv__AddTwoInts_Event__request__MAX_SIZE = 1
};
// response
enum
{
  new_interfaces__srv__AddTwoInts_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddTwoInts in the package new_interfaces.
typedef struct new_interfaces__srv__AddTwoInts_Event
{
  service_msgs__msg__ServiceEventInfo info;
  new_interfaces__srv__AddTwoInts_Request__Sequence request;
  new_interfaces__srv__AddTwoInts_Response__Sequence response;
} new_interfaces__srv__AddTwoInts_Event;

// Struct for a sequence of new_interfaces__srv__AddTwoInts_Event.
typedef struct new_interfaces__srv__AddTwoInts_Event__Sequence
{
  new_interfaces__srv__AddTwoInts_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} new_interfaces__srv__AddTwoInts_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEW_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
