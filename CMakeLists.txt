cmake_minimum_required( VERSION 2.9...3.22 )

project( CMakeExample C CXX )

set(THIS ${CMAKE_PROJECT_NAME})

set(THIS CMakeExample)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

#include(cmake-config/StandardProjectSettings.cmake)

if (NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE "Release")
endif()
if ( CMAKE_BUILD_TYPE MATCHES Debug)
	add_definitions(-D_DEBUG=1 -DDEBUG=1 -UNDEBUG)
else()
	add_definitions(-DNDEBUG=1 -UDEBUG -U_DEBUG)
endif()

# link_directories("/mingw64/lib")

if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
	include(CTest)
endif()
enable_testing()
add_subdirectory(googletest)



include_directories(library1 library2)

add_subdirectory(library1)
add_subdirectory(library2)
add_subdirectory(application)
