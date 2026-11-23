#include <stdint.h>
#include "timer_platform.h"
#include "mock_timer_platform.h"
void timer_platform_init(void){mock_timer_platform_reset();}
uint32_t timer_platform_get_tick_ms(void){return mock_timer_platform_get_tick();}
