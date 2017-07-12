cmake_minimum_required(VERSION 3.8)
project(unit_test_playground)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.c your_task.c)
add_executable(unit_test_playground ${SOURCE_FILES})