cmake_minimum_required(VERSION 3.24.0)
project(2048)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_SHARED_LIBRARY_PREFIX "")
include_directories(
    ${PROJECT_SOURCE_DIR}/include
)
add_subdirectory(src)