cmake_minimum_required(VERSION 3.5)

project(aufgabe02 LANGUAGES CXX)

set(CMAKE_CXX_STANDART 14)

add_executable(readvector io.cc statistics.cc readvector.cc)
add_executable(uniform io.cc statistics.cc uniform.cc)
add_executable(normal io.cc statistics.cc normal.cc)