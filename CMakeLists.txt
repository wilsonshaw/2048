cmake_minimum_required(VERSION 3.24.0)
project(2048 VERSION 0.1 LANGUAGES CXX)
include(settings.cmake)
set(AUTOMOC ON)
set(AUTOUIC ON)
set(AUTORCC ON)
find_package(Qt6 COMPONENTS Core Widgets Qml Gui Quick REQUIRED)
set(CXX_STANDARD_REQUIRED 14)
include_directories(
    ${PROJECT_SOURCE_DIR}/include
)
add_subdirectory(src)
