# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ONLYPROGRAMMING/Desktop/Address-Book/Address-Book

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ONLYPROGRAMMING/Desktop/Address-Book/Address-Book/build/Qt_6_6_1_for_macOS-Debug

# Utility rule file for Address-Book_autogen_timestamp_deps.

# Include any custom commands dependencies for this target.
include CMakeFiles/Address-Book_autogen_timestamp_deps.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Address-Book_autogen_timestamp_deps.dir/progress.make

CMakeFiles/Address-Book_autogen_timestamp_deps: /Users/ONLYPROGRAMMING/Qt/6.6.1/macos/./libexec/uic
CMakeFiles/Address-Book_autogen_timestamp_deps: /Users/ONLYPROGRAMMING/Qt/6.6.1/macos/./libexec/moc
CMakeFiles/Address-Book_autogen_timestamp_deps: /Users/ONLYPROGRAMMING/Qt/6.6.1/macos/lib/QtCore.framework/Versions/A/QtCore
CMakeFiles/Address-Book_autogen_timestamp_deps: /Users/ONLYPROGRAMMING/Qt/6.6.1/macos/lib/QtWidgets.framework/Versions/A/QtWidgets

Address-Book_autogen_timestamp_deps: CMakeFiles/Address-Book_autogen_timestamp_deps
Address-Book_autogen_timestamp_deps: CMakeFiles/Address-Book_autogen_timestamp_deps.dir/build.make
.PHONY : Address-Book_autogen_timestamp_deps

# Rule to build all files generated by this target.
CMakeFiles/Address-Book_autogen_timestamp_deps.dir/build: Address-Book_autogen_timestamp_deps
.PHONY : CMakeFiles/Address-Book_autogen_timestamp_deps.dir/build

CMakeFiles/Address-Book_autogen_timestamp_deps.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Address-Book_autogen_timestamp_deps.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Address-Book_autogen_timestamp_deps.dir/clean

CMakeFiles/Address-Book_autogen_timestamp_deps.dir/depend:
	cd /Users/ONLYPROGRAMMING/Desktop/Address-Book/Address-Book/build/Qt_6_6_1_for_macOS-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ONLYPROGRAMMING/Desktop/Address-Book/Address-Book /Users/ONLYPROGRAMMING/Desktop/Address-Book/Address-Book /Users/ONLYPROGRAMMING/Desktop/Address-Book/Address-Book/build/Qt_6_6_1_for_macOS-Debug /Users/ONLYPROGRAMMING/Desktop/Address-Book/Address-Book/build/Qt_6_6_1_for_macOS-Debug /Users/ONLYPROGRAMMING/Desktop/Address-Book/Address-Book/build/Qt_6_6_1_for_macOS-Debug/CMakeFiles/Address-Book_autogen_timestamp_deps.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Address-Book_autogen_timestamp_deps.dir/depend

