cmake_minimum_required (VERSION 3.15)
project("dmpower2" VERSION 2.0)
message(STATUS "BEGIN CMAKE FOR: ${PROJECT_NAME} ==========" )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(dmpower2)

# ctest and cdash
enable_testing()

add_subdirectory(tests)

include(CTest)

