#ifndef TIMER_H
#define TIMER_H
#include "timer_types.h"
timer_status_t timer_init(void);
bool timer_is_initialised(void);
timer_version_t timer_get_version(void);
timer_tick_t timer_get_ms(void);
timer_status_t timer_start(timer_handle_t *handle);
timer_status_t timer_restart(timer_handle_t *handle);
timer_status_t timer_elapsed(const timer_handle_t *handle,timer_tick_t *elapsed_ms);
timer_status_t timer_expired(const timer_handle_t *handle,timer_tick_t timeout_ms,bool *expired);
void timer_delay_ms(timer_tick_t delay_ms);
#ifdef UNIT_TEST
void timer_reset_for_test(void);
#endif
#endif
