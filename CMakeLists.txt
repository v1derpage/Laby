cmake_minimum_required(VERSION 3.10)

project(laba1)

add_executable(main main.cpp palindrom.cpp)
add_executable(tests test.cpp palindrom.cpp)

find_package(GTest REQUIRED)
target_link_libraries(tests GTest::GTest GTest::Main)


target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})