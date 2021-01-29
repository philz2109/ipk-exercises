cmake_minimum_required(VERSION 3.5)

project(3-4 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(letterfrequencies letterfrequencies.cc)

enable_testing()

add_executable(letterTest letterTest.cc letterfrequencies.hh)
add_test(NAME letterTest COMMAND letterTest)
add_executable(testStatistik testStatistik.cc letterfrequencies.hh)
add_test(NAME testStatistik COMMAND testStatistik)
