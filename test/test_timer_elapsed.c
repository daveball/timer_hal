#include "unity.h"
#include "timer.h"
#include "mock_timer_platform.h"
void test_elapsed_zero(void){timer_handle_t handle;timer_tick_t elapsed;TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_init());mock_timer_platform_set_tick(200U);TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_start(&handle));TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_elapsed(&handle,&elapsed));TEST_ASSERT_EQUAL_UINT32(0U,elapsed);}
void test_elapsed_normal(void){timer_handle_t handle;timer_tick_t elapsed;TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_init());mock_timer_platform_set_tick(100U);TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_start(&handle));mock_timer_platform_set_tick(350U);TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_elapsed(&handle,&elapsed));TEST_ASSERT_EQUAL_UINT32(250U,elapsed);}
