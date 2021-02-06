cmake_minimum_required(VERSION 3.5)

project(
  nbody
  VERSION 1.0
  LANGUAGES C CXX
  )
target_link_libraries(<Programmname> SDL2)
add_executable(nbody nbody.cc io.cc)
target_link_libraries(nbody SDL2)
