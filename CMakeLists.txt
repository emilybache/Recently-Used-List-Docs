cmake_minimum_required(VERSION 3.17)
project(recently-used-list)

set(CMAKE_C_STANDARD 99)

enable_testing()
add_subdirectory(src)
add_subdirectory(test)

add_executable(main main.c)
target_link_libraries(main src)

