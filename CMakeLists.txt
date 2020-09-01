cmake_minimum_required(VERSION 3.17)

set(THIS CMakeExample)

project(${THIS} C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

#include(cmake-config/StandardProjectSettings.cmake)

if (NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE "Release")
endif()
if ( CMAKE_BUILD_TYPE MATCHES Debug)
	add_definitions(-D_DEBUG=1)
	add_definitions(-DDEBUG=1)
	add_definitions(-UNDEBUG)
else()
	add_definitions(-DNDEBUG=1 -UDEBUG -U_DEBUG)
endif()


if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
	include(CTest)
endif()
enable_testing()
add_subdirectory(googletest)



include_directories(library1 library2)

add_subdirectory(library1)
add_subdirectory(library2)
add_subdirectory(application)
