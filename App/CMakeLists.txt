cmake_minimum_required(VERSION 3.26)
project(Pruebas)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(../Library ../../Library/cmake-build-debug/)

add_executable(Pruebas main.cpp
        DoublyLinkedList.cpp
        DoublyLinkedList.h)

target_include_directories(Pruebas PRIVATE ../Library)
target_link_libraries(Pruebas PRIVATE Library)

