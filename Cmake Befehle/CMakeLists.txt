cmake_minimum_required(VERSION 3.5)

project(aufgabe02 LANGUAGES CXX)

set(CMAKE_CXX_STANDART 14)

add_library(lib io.cc statistics.cc)

add_executable(readvector readvector.cc) //Immer .cc Dateien angeben, also da wo der richtige Code steht
target_link_libraries(readvector PUBLIC lib)
add_executable(uniform uniform.cc)
target_link_libraries(uniform PUBLIC lib)
add_executable(normal normal.cc)
target_link_libraries(normal PUBLIC lib)

enable_testing()

add_executable(mean_test mean_test.cc)
target_link_libraries(mean_test PUBLIC lib)
add_test(NAME mean_test COMMAND mean_test)
add_executable(median_test median_test.cc)
target_link_libraries(median_test PUBLIC lib)
add_test(NAME median_test COMMAND median_test)