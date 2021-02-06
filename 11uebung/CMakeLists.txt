cmake_minimum_required(VERSION 3.5)

project(
  nbody
  VERSION 1.0
  LANGUAGES C CXX
  )

set(CMAKE_BUILD_TYPE Debug)

add_library(lib sdlwrapper.hh io.cc basis.cc)

add_executable(nbody nbody.cc sdlwrapper.hh io.cc)
target_link_libraries(nbody PUBLIC SDL2)
target_link_libraries(nbody PUBLIC lib)
