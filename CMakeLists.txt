cmake_minimum_required(VERSION 3.10)

project(DualTargetCLibrary C)

set(TARGET_PLATFORM "HOST" CACHE STRING "Target platform")

set(CMAKE_C_STANDARD 11)

include_directories(include)

if(TARGET_PLATFORM STREQUAL "HOST")
    set(PLATFORM_SOURCE
        platform/host/platform_host.c
    )
elseif(TARGET_PLATFORM STREQUAL "EMBEDDED")
    set(PLATFORM_SOURCE
        platform/embedded/platform_embedded.c
    )
else()
    message(FATAL_ERROR "Unknown platform: ${TARGET_PLATFORM}")
endif()

add_library(mathlib
    src/mathlib.c
    ${PLATFORM_SOURCE}
)

add_executable(app
    examples/main.c
)

target_link_libraries(app mathlib)

add_executable(test_app
    tests/test_mathlib.c
)

target_link_libraries(test_app mathlib)

add_executable(embedded_demo
    examples/embedded_main.c
)

target_link_libraries(embedded_demo mathlib)