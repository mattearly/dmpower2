cmake_minimum_required (VERSION 3.10)
project("dmpower2" VERSION 2.0)
message(STATUS "BEGIN CMAKE FOR: ${PROJECT_NAME} ==========" )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(dmpower2)
enable_testing()
# Include CDash dashboard testing module
include(CTest)
# Dashboard is opened for submissions for a 24 hour period
# starting at the specified NIGHTLY_START_TIME. Time is
# specified in 24 hour format.
set (CTEST_NIGHTLY_START_TIME "01:00:00 UTC")
# CDash server to submit results (used by client)
set (CTEST_DROP_METHOD http)
set (CTEST_DROP_SITE "my.cdash.org")
set (CTEST_DROP_LOCATION "/submit.php?project=dmpower2")
set (CTEST_DROP_SITE_CDASH TRUE)
add_subdirectory(tests)
