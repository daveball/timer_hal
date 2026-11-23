#include "mock_timer_platform.h"
static uint32_t g_tick;
void mock_timer_platform_reset(void){g_tick=0U;}
void mock_timer_platform_set_tick(uint32_t tick){g_tick=tick;}
void mock_timer_platform_advance(uint32_t delta_ms){g_tick+=delta_ms;}
uint32_t mock_timer_platform_get_tick(void){return g_tick;}
