#include "unity.h"
#include "timer.h"
#include "timer_config.h"
void test_version(void){timer_version_t version=timer_get_version();TEST_ASSERT_EQUAL_UINT16(TIMER_VERSION_MAJOR,version.major);TEST_ASSERT_EQUAL_UINT16(TIMER_VERSION_MINOR,version.minor);TEST_ASSERT_EQUAL_UINT16(TIMER_VERSION_PATCH,version.patch);}
