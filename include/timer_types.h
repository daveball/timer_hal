#ifndef TIMER_TYPES_H
#define TIMER_TYPES_H
#include <stdint.h>
#include <stdbool.h>
typedef uint32_t timer_tick_t;
typedef enum { TIMER_STATUS_OK=0, TIMER_STATUS_ERROR, TIMER_STATUS_INVALID_PARAMETER, TIMER_STATUS_NOT_INITIALISED } timer_status_t;
typedef struct { timer_tick_t start; } timer_handle_t;
typedef struct { uint16_t major; uint16_t minor; uint16_t patch; } timer_version_t;
#endif
