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
CMAKE_SOURCE_DIR = /home/philz/Documents/ipk-exercises/11uebung

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/philz/Documents/ipk-exercises/11uebung/build2

# Include any dependencies generated for this target.
include CMakeFiles/nbody.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nbody.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nbody.dir/flags.make

CMakeFiles/nbody.dir/nbody.cc.o: CMakeFiles/nbody.dir/flags.make
CMakeFiles/nbody.dir/nbody.cc.o: ../nbody.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/philz/Documents/ipk-exercises/11uebung/build2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nbody.dir/nbody.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nbody.dir/nbody.cc.o -c /home/philz/Documents/ipk-exercises/11uebung/nbody.cc

CMakeFiles/nbody.dir/nbody.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nbody.dir/nbody.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/philz/Documents/ipk-exercises/11uebung/nbody.cc > CMakeFiles/nbody.dir/nbody.cc.i

CMakeFiles/nbody.dir/nbody.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nbody.dir/nbody.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/philz/Documents/ipk-exercises/11uebung/nbody.cc -o CMakeFiles/nbody.dir/nbody.cc.s

CMakeFiles/nbody.dir/io.cc.o: CMakeFiles/nbody.dir/flags.make
CMakeFiles/nbody.dir/io.cc.o: ../io.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/philz/Documents/ipk-exercises/11uebung/build2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/nbody.dir/io.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nbody.dir/io.cc.o -c /home/philz/Documents/ipk-exercises/11uebung/io.cc

CMakeFiles/nbody.dir/io.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nbody.dir/io.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/philz/Documents/ipk-exercises/11uebung/io.cc > CMakeFiles/nbody.dir/io.cc.i

CMakeFiles/nbody.dir/io.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nbody.dir/io.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/philz/Documents/ipk-exercises/11uebung/io.cc -o CMakeFiles/nbody.dir/io.cc.s

# Object files for target nbody
nbody_OBJECTS = \
"CMakeFiles/nbody.dir/nbody.cc.o" \
"CMakeFiles/nbody.dir/io.cc.o"

# External object files for target nbody
nbody_EXTERNAL_OBJECTS =

nbody: CMakeFiles/nbody.dir/nbody.cc.o
nbody: CMakeFiles/nbody.dir/io.cc.o
nbody: CMakeFiles/nbody.dir/build.make
nbody: liblib.a
nbody: CMakeFiles/nbody.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/philz/Documents/ipk-exercises/11uebung/build2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable nbody"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nbody.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nbody.dir/build: nbody

.PHONY : CMakeFiles/nbody.dir/build

CMakeFiles/nbody.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nbody.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nbody.dir/clean

CMakeFiles/nbody.dir/depend:
	cd /home/philz/Documents/ipk-exercises/11uebung/build2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/philz/Documents/ipk-exercises/11uebung /home/philz/Documents/ipk-exercises/11uebung /home/philz/Documents/ipk-exercises/11uebung/build2 /home/philz/Documents/ipk-exercises/11uebung/build2 /home/philz/Documents/ipk-exercises/11uebung/build2/CMakeFiles/nbody.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nbody.dir/depend

