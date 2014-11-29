cmake_minimum_required(VERSION 2.6)
project(HTTPFlood)

set(HTTPFlood_VERSION_MAJOR 1)
set(HTTPFlood_VERSION_MINOR 0)
set(HTTPFlood_VERSION_PATCH 3)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

configure_file("${PROJECT_SOURCE_DIR}/src/config.h.in" "${PROJECT_SOURCE_DIR}/src/config.h")

file(GLOB_RECURSE HTTPFlood_SOURCES "src/*.c")
file(GLOB_RECURSE HTTPFlood_HEADERS "src/*.h")

set(HTTPFlood_INCLUDE_DIRS "")
foreach(_headerFile ${HTTPFlood_HEADERS})
	get_filename_component(_dir ${_headerFile} PATH)
	list(APPEND HTTPFlood_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES HTTPFlood_INCLUDE_DIRS)

include_directories(${HTTPFlood_INCLUDE_DIRS})
add_definitions(-Wall)
add_definitions(-O3)

add_executable(httpflood ${HTTPFlood_SOURCES})

add_executable(httpflood_test tests/httpflood_test.c)



enable_testing()

add_test(NAME StdRuns COMMAND httpflood)
set_tests_properties(StdRuns PROPERTIES WILL_FAIL true)

add_test(NAME TestRuns COMMAND httpflood_test)


MESSAGE("")

MESSAGE(STATUS "PROJECT_NAME: ${PROJECT_NAME}")
MESSAGE(STATUS "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
MESSAGE(STATUS "PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")
MESSAGE("")

MESSAGE(STATUS "CMAKE_C_COMPILER: ${CMAKE_C_COMPILER}")
MESSAGE(STATUS "CMAKE_C_FLAGS: ${CMAKE_C_FLAGS}")
MESSAGE(STATUS "CMAKE_SHARED_LINKER_FLAGS: ${CMAKE_SHARED_LINKER_FLAGS}")
MESSAGE("")

MESSAGE(STATUS "HTTPFlood_SOURCES: ${HTTPFlood_SOURCES}")
MESSAGE(STATUS "HTTPFlood_HEADERS: ${HTTPFlood_HEADERS}")
MESSAGE(STATUS "HTTPFlood_INCLUDE_DIRS: ${HTTPFlood_INCLUDE_DIRS}")
MESSAGE("")
