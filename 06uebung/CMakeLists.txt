cmake_minimum_required(VERSION 3.5)

project(aufgabe01 LANGUAGES CXX)

set(CMAKE_CXX_STANDART 14)

add_library(lib point.cc)

add_executable(polygon polygon.cc)
target_link_libraries(polygon PUBLIC lib)