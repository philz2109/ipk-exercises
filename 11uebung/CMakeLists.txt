cmake_minimum_required(VERSION 3.5)

project(
  nbody
  VERSION 1.0
  LANGUAGES C CXX
  )

set(CMAKE_BUILD_TYPE Debug)

add_executable(nbody sdlwrapper.hh io.cc)
target_link_libraries(nbody PUBLIC SDL2)

