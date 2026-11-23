#ifndef TIMER_PLATFORM_H
#define TIMER_PLATFORM_H
#include <stdint.h>
void timer_platform_init(void);
uint32_t timer_platform_get_tick_ms(void);
#endif
