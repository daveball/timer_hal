#include "unity.h"
#include "timer.h"
#include "mock_timer_platform.h"
void test_start_success(void){timer_handle_t handle;TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_init());mock_timer_platform_set_tick(100U);TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_start(&handle));TEST_ASSERT_EQUAL_UINT32(100U,handle.start);}
void test_restart_success(void){timer_handle_t handle;TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_init());mock_timer_platform_set_tick(100U);TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_start(&handle));mock_timer_platform_set_tick(500U);TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_restart(&handle));TEST_ASSERT_EQUAL_UINT32(500U,handle.start);}
