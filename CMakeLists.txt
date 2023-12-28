cmake_minimum_required(VERSION 3.14)
project(List)

SET(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS
"${CMAKE_CXX_FLAGS} -Wall -pedantic-errors")

add_subdirectory(test)

add_executable(main)

target_sources(main PRIVATE main.cpp)