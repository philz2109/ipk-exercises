cmake_minimum_required(VERSION 3.5) 

project(pixelgraphik-solution LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(statisticsdriver statisticsdriver.cc io.cc statistics.hh)

enable_testing()

add_executable(test_dimensionen test_dimensionen.cc point.hh)
add_test(test_dimensionen test_dimensionen)
