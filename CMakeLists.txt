cmake_minimum_required(VERSION 3.17)
project(Kalray)

set(CMAKE_C_STANDARD 99)

find_package(PNG REQUIRED)
include_directories(${PNG_INCLUDE_DIR})

add_executable(Kalray png_transform.c png_utils.c png_utils.h)
target_link_libraries(Kalray ${PNG_LIBRARY})