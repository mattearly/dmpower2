cmake_minimum_required (VERSION 3.8)
project ("dmpower2")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# main exe
file(GLOB_RECURSE SRC_FILES "src/*.cpp")
add_executable(${PROJECT_NAME} ${SRC_FILES})

# runtime data
file(COPY "${PROJECT_SOURCE_DIR}/data/lists/" DESTINATION "${CMAKE_BINARY_DIR}/data/lists/")

install(TARGETS ${PROJECT_NAME} DESTINATION "bin")
install(DIRECTORY "${PROJECT_SOURCE_DIR}/data/lists" DESTINATION "bin/data")

