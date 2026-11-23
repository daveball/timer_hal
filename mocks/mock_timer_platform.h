#ifndef MOCK_TIMER_PLATFORM_H
#define MOCK_TIMER_PLATFORM_H
#include <stdint.h>
void mock_timer_platform_reset(void);
void mock_timer_platform_set_tick(uint32_t tick);
void mock_timer_platform_advance(uint32_t delta_ms);
uint32_t mock_timer_platform_get_tick(void);
#endif
