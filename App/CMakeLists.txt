cmake_minimum_required(VERSION 3.26)
project(Pruebas)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(../Library ../../Library/cmake-build-debug/)
enable_testing()
add_executable(Pruebas main.cpp
        DoublyLinkedList.cpp
        DoublyLinkedList.h
        MPointerTest.cpp)

target_include_directories(Pruebas PRIVATE ../Library)
target_link_libraries(Pruebas PRIVATE Library GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(Pruebas)
