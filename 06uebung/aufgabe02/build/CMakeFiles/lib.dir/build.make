# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build

# Include any dependencies generated for this target.
include CMakeFiles/lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lib.dir/flags.make

CMakeFiles/lib.dir/point.cc.o: CMakeFiles/lib.dir/flags.make
CMakeFiles/lib.dir/point.cc.o: ../point.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lib.dir/point.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib.dir/point.cc.o -c /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/point.cc

CMakeFiles/lib.dir/point.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/point.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/point.cc > CMakeFiles/lib.dir/point.cc.i

CMakeFiles/lib.dir/point.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/point.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/point.cc -o CMakeFiles/lib.dir/point.cc.s

CMakeFiles/lib.dir/pgm.cc.o: CMakeFiles/lib.dir/flags.make
CMakeFiles/lib.dir/pgm.cc.o: ../pgm.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lib.dir/pgm.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib.dir/pgm.cc.o -c /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/pgm.cc

CMakeFiles/lib.dir/pgm.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/pgm.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/pgm.cc > CMakeFiles/lib.dir/pgm.cc.i

CMakeFiles/lib.dir/pgm.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/pgm.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/pgm.cc -o CMakeFiles/lib.dir/pgm.cc.s

CMakeFiles/lib.dir/canvas.cpp.o: CMakeFiles/lib.dir/flags.make
CMakeFiles/lib.dir/canvas.cpp.o: ../canvas.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lib.dir/canvas.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib.dir/canvas.cpp.o -c /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/canvas.cpp

CMakeFiles/lib.dir/canvas.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/canvas.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/canvas.cpp > CMakeFiles/lib.dir/canvas.cpp.i

CMakeFiles/lib.dir/canvas.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/canvas.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/canvas.cpp -o CMakeFiles/lib.dir/canvas.cpp.s

# Object files for target lib
lib_OBJECTS = \
"CMakeFiles/lib.dir/point.cc.o" \
"CMakeFiles/lib.dir/pgm.cc.o" \
"CMakeFiles/lib.dir/canvas.cpp.o"

# External object files for target lib
lib_EXTERNAL_OBJECTS =

liblib.a: CMakeFiles/lib.dir/point.cc.o
liblib.a: CMakeFiles/lib.dir/pgm.cc.o
liblib.a: CMakeFiles/lib.dir/canvas.cpp.o
liblib.a: CMakeFiles/lib.dir/build.make
liblib.a: CMakeFiles/lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library liblib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lib.dir/build: liblib.a

.PHONY : CMakeFiles/lib.dir/build

CMakeFiles/lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lib.dir/clean

CMakeFiles/lib.dir/depend:
	cd /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02 /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02 /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build /home/blackfire/Documents/ipk-exercises/06uebung/aufgabe02/build/CMakeFiles/lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lib.dir/depend

