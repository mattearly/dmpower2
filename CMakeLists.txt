cmake_minimum_required (VERSION 3.10)
project("dmpower2" VERSION 2.0)
message(STATUS "BEGIN CMAKE FOR: ${PROJECT_NAME} ==========" )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(dmpower2)
enable_testing()
# Include CDash dashboard testing module
include(CTest)

set(CTEST_PROJECT_NAME "dmpower2")
set(CTEST_NIGHTLY_START_TIME "01:00:00 UTC")

set(CTEST_DROP_SITE "http://my.cdash.org/submit.php?project=dmpower2")
set(CTEST_DROP_LOCATION "dmpower2")
set(CTEST_DROP_SITE_CDASH TRUE)

add_subdirectory(tests)
