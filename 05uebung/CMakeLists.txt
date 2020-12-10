cmake_minimum_required(VERSION 3.5)

project(aufgabe02 LANGUAGES CXX)

set(CMAKE_CXX_STANDART 14)

add_library(lib io.cc statistics.cc)

add_executable(readvector readvector.cc)
target_link_libraries(readvector PUBLIC lib)
add_executable(uniform uniform.cc)
target_link_libraries(uniform PUBLIC lib)
add_executable(normal normal.cc)
target_link_libraries(normal PUBLIC lib)