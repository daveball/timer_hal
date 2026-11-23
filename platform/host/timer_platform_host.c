#define _POSIX_C_SOURCE 200809L
#include "timer_platform.h"
#include <stdint.h>
#include <time.h>
static struct timespec g_start_time;
void timer_platform_init(void){(void)clock_gettime(CLOCK_MONOTONIC,&g_start_time);}
uint32_t timer_platform_get_tick_ms(void){struct timespec current_time;(void)clock_gettime(CLOCK_MONOTONIC,&current_time);int64_t seconds=(int64_t)current_time.tv_sec-(int64_t)g_start_time.tv_sec;int64_t nanoseconds=(int64_t)current_time.tv_nsec-(int64_t)g_start_time.tv_nsec;if(nanoseconds<0){seconds--;nanoseconds+=1000000000LL;}uint64_t elapsed_ms=((uint64_t)seconds*1000ULL)+((uint64_t)nanoseconds/1000000ULL);return (uint32_t)elapsed_ms;}