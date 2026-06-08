cmake_minimum_required(VERSION 3.10)

project(DualTargetCLibrary C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_library(mathlib
    src/mathlib.c
)

add_executable(app
    examples/main.c
)

target_link_libraries(app mathlib)

add_executable(test_app
    tests/test_mathlib.c
)

target_link_libraries(test_app mathlib)