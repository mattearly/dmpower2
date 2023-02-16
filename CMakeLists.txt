cmake_minimum_required (VERSION 3.15)
project("dmpower2" VERSION 2.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# there should exist a file for cmake settings to pipe in such as project version
configure_file("${PROJECT_NAME}Config.h.in" "${PROJECT_NAME}Config.h")

# core internal
add_subdirectory(${PROJECT_NAME})

# ctest and cdash
enable_testing()

include(CTest)

add_subdirectory(tests)


