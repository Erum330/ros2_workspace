// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from new_interfaces:srv/RectangleArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "new_interfaces/srv/rectangle_area.h"


#ifndef NEW_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__FUNCTIONS_H_
#define NEW_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__FUNCTIONS_H_

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

#include "new_interfaces/srv/detail/rectangle_area__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_type_hash_t *
new_interfaces__srv__RectangleArea__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
new_interfaces__srv__RectangleArea__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeSource *
new_interfaces__srv__RectangleArea__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
new_interfaces__srv__RectangleArea__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/RectangleArea message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * new_interfaces__srv__RectangleArea_Request
 * )) before or use
 * new_interfaces__srv__RectangleArea_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__srv__RectangleArea_Request__init(new_interfaces__srv__RectangleArea_Request * msg);

/// Finalize srv/RectangleArea message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__srv__RectangleArea_Request__fini(new_interfaces__srv__RectangleArea_Request * msg);

/// Create srv/RectangleArea message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * new_interfaces__srv__RectangleArea_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
new_interfaces__srv__RectangleArea_Request *
new_interfaces__srv__RectangleArea_Request__create(void);

/// Destroy srv/RectangleArea message.
/**
 * It calls
 * new_interfaces__srv__RectangleArea_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__srv__RectangleArea_Request__destroy(new_interfaces__srv__RectangleArea_Request * msg);

/// Check for srv/RectangleArea message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__srv__RectangleArea_Request__are_equal(const new_interfaces__srv__RectangleArea_Request * lhs, const new_interfaces__srv__RectangleArea_Request * rhs);

/// Copy a srv/RectangleArea message.
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
new_interfaces__srv__RectangleArea_Request__copy(
  const new_interfaces__srv__RectangleArea_Request * input,
  new_interfaces__srv__RectangleArea_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_type_hash_t *
new_interfaces__srv__RectangleArea_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
new_interfaces__srv__RectangleArea_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeSource *
new_interfaces__srv__RectangleArea_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
new_interfaces__srv__RectangleArea_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/RectangleArea messages.
/**
 * It allocates the memory for the number of elements and calls
 * new_interfaces__srv__RectangleArea_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__srv__RectangleArea_Request__Sequence__init(new_interfaces__srv__RectangleArea_Request__Sequence * array, size_t size);

/// Finalize array of srv/RectangleArea messages.
/**
 * It calls
 * new_interfaces__srv__RectangleArea_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__srv__RectangleArea_Request__Sequence__fini(new_interfaces__srv__RectangleArea_Request__Sequence * array);

/// Create array of srv/RectangleArea messages.
/**
 * It allocates the memory for the array and calls
 * new_interfaces__srv__RectangleArea_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
new_interfaces__srv__RectangleArea_Request__Sequence *
new_interfaces__srv__RectangleArea_Request__Sequence__create(size_t size);

/// Destroy array of srv/RectangleArea messages.
/**
 * It calls
 * new_interfaces__srv__RectangleArea_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__srv__RectangleArea_Request__Sequence__destroy(new_interfaces__srv__RectangleArea_Request__Sequence * array);

/// Check for srv/RectangleArea message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__srv__RectangleArea_Request__Sequence__are_equal(const new_interfaces__srv__RectangleArea_Request__Sequence * lhs, const new_interfaces__srv__RectangleArea_Request__Sequence * rhs);

/// Copy an array of srv/RectangleArea messages.
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
new_interfaces__srv__RectangleArea_Request__Sequence__copy(
  const new_interfaces__srv__RectangleArea_Request__Sequence * input,
  new_interfaces__srv__RectangleArea_Request__Sequence * output);

/// Initialize srv/RectangleArea message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * new_interfaces__srv__RectangleArea_Response
 * )) before or use
 * new_interfaces__srv__RectangleArea_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__srv__RectangleArea_Response__init(new_interfaces__srv__RectangleArea_Response * msg);

/// Finalize srv/RectangleArea message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__srv__RectangleArea_Response__fini(new_interfaces__srv__RectangleArea_Response * msg);

/// Create srv/RectangleArea message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * new_interfaces__srv__RectangleArea_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
new_interfaces__srv__RectangleArea_Response *
new_interfaces__srv__RectangleArea_Response__create(void);

/// Destroy srv/RectangleArea message.
/**
 * It calls
 * new_interfaces__srv__RectangleArea_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__srv__RectangleArea_Response__destroy(new_interfaces__srv__RectangleArea_Response * msg);

/// Check for srv/RectangleArea message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__srv__RectangleArea_Response__are_equal(const new_interfaces__srv__RectangleArea_Response * lhs, const new_interfaces__srv__RectangleArea_Response * rhs);

/// Copy a srv/RectangleArea message.
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
new_interfaces__srv__RectangleArea_Response__copy(
  const new_interfaces__srv__RectangleArea_Response * input,
  new_interfaces__srv__RectangleArea_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_type_hash_t *
new_interfaces__srv__RectangleArea_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
new_interfaces__srv__RectangleArea_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeSource *
new_interfaces__srv__RectangleArea_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
new_interfaces__srv__RectangleArea_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/RectangleArea messages.
/**
 * It allocates the memory for the number of elements and calls
 * new_interfaces__srv__RectangleArea_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__srv__RectangleArea_Response__Sequence__init(new_interfaces__srv__RectangleArea_Response__Sequence * array, size_t size);

/// Finalize array of srv/RectangleArea messages.
/**
 * It calls
 * new_interfaces__srv__RectangleArea_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__srv__RectangleArea_Response__Sequence__fini(new_interfaces__srv__RectangleArea_Response__Sequence * array);

/// Create array of srv/RectangleArea messages.
/**
 * It allocates the memory for the array and calls
 * new_interfaces__srv__RectangleArea_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
new_interfaces__srv__RectangleArea_Response__Sequence *
new_interfaces__srv__RectangleArea_Response__Sequence__create(size_t size);

/// Destroy array of srv/RectangleArea messages.
/**
 * It calls
 * new_interfaces__srv__RectangleArea_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__srv__RectangleArea_Response__Sequence__destroy(new_interfaces__srv__RectangleArea_Response__Sequence * array);

/// Check for srv/RectangleArea message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__srv__RectangleArea_Response__Sequence__are_equal(const new_interfaces__srv__RectangleArea_Response__Sequence * lhs, const new_interfaces__srv__RectangleArea_Response__Sequence * rhs);

/// Copy an array of srv/RectangleArea messages.
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
new_interfaces__srv__RectangleArea_Response__Sequence__copy(
  const new_interfaces__srv__RectangleArea_Response__Sequence * input,
  new_interfaces__srv__RectangleArea_Response__Sequence * output);

/// Initialize srv/RectangleArea message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * new_interfaces__srv__RectangleArea_Event
 * )) before or use
 * new_interfaces__srv__RectangleArea_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__srv__RectangleArea_Event__init(new_interfaces__srv__RectangleArea_Event * msg);

/// Finalize srv/RectangleArea message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__srv__RectangleArea_Event__fini(new_interfaces__srv__RectangleArea_Event * msg);

/// Create srv/RectangleArea message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * new_interfaces__srv__RectangleArea_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
new_interfaces__srv__RectangleArea_Event *
new_interfaces__srv__RectangleArea_Event__create(void);

/// Destroy srv/RectangleArea message.
/**
 * It calls
 * new_interfaces__srv__RectangleArea_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__srv__RectangleArea_Event__destroy(new_interfaces__srv__RectangleArea_Event * msg);

/// Check for srv/RectangleArea message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__srv__RectangleArea_Event__are_equal(const new_interfaces__srv__RectangleArea_Event * lhs, const new_interfaces__srv__RectangleArea_Event * rhs);

/// Copy a srv/RectangleArea message.
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
new_interfaces__srv__RectangleArea_Event__copy(
  const new_interfaces__srv__RectangleArea_Event * input,
  new_interfaces__srv__RectangleArea_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_type_hash_t *
new_interfaces__srv__RectangleArea_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
new_interfaces__srv__RectangleArea_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeSource *
new_interfaces__srv__RectangleArea_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
new_interfaces__srv__RectangleArea_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/RectangleArea messages.
/**
 * It allocates the memory for the number of elements and calls
 * new_interfaces__srv__RectangleArea_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__srv__RectangleArea_Event__Sequence__init(new_interfaces__srv__RectangleArea_Event__Sequence * array, size_t size);

/// Finalize array of srv/RectangleArea messages.
/**
 * It calls
 * new_interfaces__srv__RectangleArea_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__srv__RectangleArea_Event__Sequence__fini(new_interfaces__srv__RectangleArea_Event__Sequence * array);

/// Create array of srv/RectangleArea messages.
/**
 * It allocates the memory for the array and calls
 * new_interfaces__srv__RectangleArea_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
new_interfaces__srv__RectangleArea_Event__Sequence *
new_interfaces__srv__RectangleArea_Event__Sequence__create(size_t size);

/// Destroy array of srv/RectangleArea messages.
/**
 * It calls
 * new_interfaces__srv__RectangleArea_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
void
new_interfaces__srv__RectangleArea_Event__Sequence__destroy(new_interfaces__srv__RectangleArea_Event__Sequence * array);

/// Check for srv/RectangleArea message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_new_interfaces
bool
new_interfaces__srv__RectangleArea_Event__Sequence__are_equal(const new_interfaces__srv__RectangleArea_Event__Sequence * lhs, const new_interfaces__srv__RectangleArea_Event__Sequence * rhs);

/// Copy an array of srv/RectangleArea messages.
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
new_interfaces__srv__RectangleArea_Event__Sequence__copy(
  const new_interfaces__srv__RectangleArea_Event__Sequence * input,
  new_interfaces__srv__RectangleArea_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // NEW_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__FUNCTIONS_H_
