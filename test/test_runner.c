#include "unity.h"
extern void test_timer_init_success(void); extern void test_timer_double_init(void);
extern void test_is_initialised_false(void); extern void test_is_initialised_true(void); extern void test_reset_for_test_clears_initialised_state(void);
extern void test_version(void);
extern void test_start_success(void); extern void test_restart_success(void);
extern void test_elapsed_zero(void); extern void test_elapsed_normal(void);
extern void test_timeout_expired(void); extern void test_timeout_not_expired(void);
extern void test_rollover_small(void);
extern void test_get_ms_before_init(void); extern void test_start_before_init(void); extern void test_restart_before_init(void);
extern void test_elapsed_before_init(void); extern void test_expired_before_init(void); extern void test_delay_before_init(void);
extern void test_delay_zero(void); extern void test_delay_not_initialised(void);
extern void test_start_null_handle(void); extern void test_restart_null_handle(void);
extern void test_elapsed_null_handle(void); extern void test_elapsed_null_elapsed_pointer(void); extern void test_elapsed_null_handle_and_elapsed_pointer(void);
extern void test_expired_null_handle(void); extern void test_expired_null_expired_pointer(void); extern void test_expired_null_handle_and_flag_pointer(void);
int main(void){UNITY_BEGIN();
RUN_TEST(test_timer_init_success);RUN_TEST(test_timer_double_init);
RUN_TEST(test_is_initialised_false);RUN_TEST(test_is_initialised_true);RUN_TEST(test_reset_for_test_clears_initialised_state);RUN_TEST(test_version);
RUN_TEST(test_start_success);RUN_TEST(test_restart_success);RUN_TEST(test_elapsed_zero);RUN_TEST(test_elapsed_normal);RUN_TEST(test_timeout_expired);RUN_TEST(test_timeout_not_expired);RUN_TEST(test_rollover_small);
RUN_TEST(test_get_ms_before_init);RUN_TEST(test_start_before_init);RUN_TEST(test_restart_before_init);RUN_TEST(test_elapsed_before_init);RUN_TEST(test_expired_before_init);RUN_TEST(test_delay_before_init);
RUN_TEST(test_delay_zero);RUN_TEST(test_delay_not_initialised);
RUN_TEST(test_start_null_handle);RUN_TEST(test_restart_null_handle);RUN_TEST(test_elapsed_null_handle);RUN_TEST(test_elapsed_null_elapsed_pointer);RUN_TEST(test_elapsed_null_handle_and_elapsed_pointer);
RUN_TEST(test_expired_null_handle);RUN_TEST(test_expired_null_expired_pointer);RUN_TEST(test_expired_null_handle_and_flag_pointer);
return UNITY_END();}
