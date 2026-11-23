#include "unity.h"
#include "timer.h"
#include "mock_timer_platform.h"
void test_rollover_small(void){timer_handle_t handle;timer_tick_t elapsed;TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_init());handle.start=0xFFFFFFF0U;mock_timer_platform_set_tick(0x00000005U);TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_elapsed(&handle,&elapsed));TEST_ASSERT_EQUAL_UINT32(21U,elapsed);}
