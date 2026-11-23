#include "unity.h"
#include "timer.h"
void test_is_initialised_false(void){TEST_ASSERT_FALSE(timer_is_initialised());}
void test_is_initialised_true(void){TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_init());TEST_ASSERT_TRUE(timer_is_initialised());}
void test_reset_for_test_clears_initialised_state(void){TEST_ASSERT_EQUAL(TIMER_STATUS_OK,timer_init());TEST_ASSERT_TRUE(timer_is_initialised());timer_reset_for_test();TEST_ASSERT_FALSE(timer_is_initialised());}
