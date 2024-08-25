cmake_minimum_required(VERSION 3.26)
project(Library)

set(CMAKE_CXX_STANDARD 20)

add_library(Library STATIC MPointer.cpp MPointerGC.cpp)

target_include_directories(Library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
