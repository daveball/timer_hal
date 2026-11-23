#include "unity.h"
#include "timer.h"
#include "mock_timer_platform.h"
void test_timeout_expired(void){timer_handle_t handle;bool expired=false;TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_init());mock_timer_platform_set_tick(0U);TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_start(&handle));mock_timer_platform_set_tick(100U);TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_expired(&handle,50U,&expired));TEST_ASSERT_TRUE(expired);}
void test_timeout_not_expired(void){timer_handle_t handle;bool expired=true;TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_init());mock_timer_platform_set_tick(0U);TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_start(&handle));mock_timer_platform_set_tick(25U);TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_expired(&handle,100U,&expired));TEST_ASSERT_FALSE(expired);}
