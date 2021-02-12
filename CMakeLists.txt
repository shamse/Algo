cmake_minimum_required(VERSION 3.0.0)
project(algo VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(algo main.cpp)
add_executable(prime src/prime.cpp)
add_executable(even_odd src/arrays/even_odd_segmentation.cpp)
add_executable(dutch_flag src/arrays/dutch_flag.cpp)
add_executable(two_sum src/arrays/two_sum.cpp)

add_executable(list src/list/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
