#include "unity.h"
#include "timer.h"
void test_timer_init_success(void){TEST_ASSERT_FALSE(timer_is_initialised());TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_init());TEST_ASSERT_TRUE(timer_is_initialised());}
void test_timer_double_init(void){TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_init());TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_init());TEST_ASSERT_TRUE(timer_is_initialised());}
