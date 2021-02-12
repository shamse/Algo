
include_directories(${PROJECT_SOURCE_DIR}/src/List)

add_executable(test_list main.cpp)

target_link_libraries(test_list liblist)