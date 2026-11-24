cmake_minimum_required(VERSION 4.3)
project(Timer_Hal C)

set(CMAKE_C_STANDARD 11)

include_directories(include)
include_directories(mocks)

add_executable(Timer_Hal
        include/timer.h
        include/timer_config.h
        include/timer_platform.h
        include/timer_types.h
        mocks/mock_timer_platform.c
        mocks/mock_timer_platform.h
        platform/host/timer_platform_host.c
        src/timer.c
        test/fake_timer_platform.c
        test/test_fixture.c
        test/test_runner.c
        test/test_timer_elapsed.c
        test/test_timer_init.c
        test/test_timer_rollover.c
        test/test_timer_start.c
        test/test_timer_state.c
        test/test_timer_timeout.c
        test/test_timer_version.c)
