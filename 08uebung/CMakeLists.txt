cmake_minimum_required(VERSION 3.5) 

project(pixelgraphik-solution LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(test test.cc canvas.hh iterationResult.cc point.hh pgm.cc)