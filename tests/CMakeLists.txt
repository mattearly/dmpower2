cmake_minimum_required (VERSION 3.15)
add_executable(tester main.cpp)
target_include_directories(tester PUBLIC ${CMAKE_SOURCE_DIR}/dmpower2)
add_test(NAME main.headers.base COMMAND tester)
add_test(NAME main.headers.menu COMMAND tester menu)
add_test(NAME main.headers.character COMMAND tester character)
add_test(NAME main.headers.fail COMMAND tester fail)
set_tests_properties(main.headers.fail PROPERTIES WILL_FAIL TRUE)

