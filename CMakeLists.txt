cmake_minimum_required(VERSION 3.24.0)
project(2048)
include(settings.cmake)
set(CXX_STANDARD_REQUIRED 14)
include_directories(
    ${PROJECT_SOURCE_DIR}/include
)
add_subdirectory(src)