// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from new_interfaces:msg/IOTSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "new_interfaces/msg/iot_sensor.h"


#ifndef NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__FUNCTIONS_H_
#define NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "new_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "new_interfaces/msg/detail/iot_sensor__struct.h"

/// Initialize msg/IOTSensor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * new_interfaces__msg__IOTSensor
 * )) before or use
 * new_interfaces__msg__IOTSensor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__msg__IOTSensor__init(new_interfaces__msg__IOTSensor * msg);

/// Finalize msg/IOTSensor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__msg__IOTSensor__fini(new_interfaces__msg__IOTSensor * msg);

/// Create msg/IOTSensor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * new_interfaces__msg__IOTSensor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
new_interfaces__msg__IOTSensor *
new_interfaces__msg__IOTSensor__create(void);

/// Destroy msg/IOTSensor message.
/**
 * It calls
 * new_interfaces__msg__IOTSensor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__msg__IOTSensor__destroy(new_interfaces__msg__IOTSensor * msg);

/// Check for msg/IOTSensor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__msg__IOTSensor__are_equal(const new_interfaces__msg__IOTSensor * lhs, const new_interfaces__msg__IOTSensor * rhs);

/// Copy a msg/IOTSensor message.
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
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__msg__IOTSensor__copy(
  const new_interfaces__msg__IOTSensor * input,
  new_interfaces__msg__IOTSensor * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_type_hash_t *
new_interfaces__msg__IOTSensor__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
new_interfaces__msg__IOTSensor__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeSource *
new_interfaces__msg__IOTSensor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
new_interfaces__msg__IOTSensor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/IOTSensor messages.
/**
 * It allocates the memory for the number of elements and calls
 * new_interfaces__msg__IOTSensor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__msg__IOTSensor__Sequence__init(new_interfaces__msg__IOTSensor__Sequence * array, size_t size);

/// Finalize array of msg/IOTSensor messages.
/**
 * It calls
 * new_interfaces__msg__IOTSensor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__msg__IOTSensor__Sequence__fini(new_interfaces__msg__IOTSensor__Sequence * array);

/// Create array of msg/IOTSensor messages.
/**
 * It allocates the memory for the array and calls
 * new_interfaces__msg__IOTSensor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
new_interfaces__msg__IOTSensor__Sequence *
new_interfaces__msg__IOTSensor__Sequence__create(size_t size);

/// Destroy array of msg/IOTSensor messages.
/**
 * It calls
 * new_interfaces__msg__IOTSensor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__msg__IOTSensor__Sequence__destroy(new_interfaces__msg__IOTSensor__Sequence * array);

/// Check for msg/IOTSensor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__msg__IOTSensor__Sequence__are_equal(const new_interfaces__msg__IOTSensor__Sequence * lhs, const new_interfaces__msg__IOTSensor__Sequence * rhs);

/// Copy an array of msg/IOTSensor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__msg__IOTSensor__Sequence__copy(
  const new_interfaces__msg__IOTSensor__Sequence * input,
  new_interfaces__msg__IOTSensor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NEW_INTERFACES__MSG__DETAIL__IOT_SENSOR__FUNCTIONS_H_
