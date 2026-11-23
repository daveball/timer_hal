#include "timer.h"
#include "mock_timer_platform.h"
void setUp(void)
{
    timer_reset_for_test();
    mock_timer_platform_reset();
}
void tearDown(void)
{
}
