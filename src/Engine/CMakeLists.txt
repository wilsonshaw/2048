project(Engine)
include(${CMAKE_SOURCE_DIR}/settings.cmake)
add_library(${PROJECT_NAME}
SHARED
    Engine.cpp
    Engine.h
)