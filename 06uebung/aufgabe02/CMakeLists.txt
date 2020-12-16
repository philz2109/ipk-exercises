cmake_minimum_required(VERSION 3.5)

project(aufgabe01 LANGUAGES CXX)

set(CMAKE_CXX_STANDART 14)

add_library(lib point.cc pgm.cc)

add_executable(canvas canvas.cpp)
target_link_libraries(canvas PUBLIC lib)

enable_testing()

add_executable(testcorners testcorners.cpp)
target_link_libraries(testcorners PUBLIC lib)
add_test(NAME testcorners COMMAND testcorners)