# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test.dir/flags.make

CMakeFiles/Test.dir/Testing/testMain.cpp.obj: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Testing/testMain.cpp.obj: ../Testing/testMain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Test.dir/Testing/testMain.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Test.dir\Testing\testMain.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\Testing\testMain.cpp"

CMakeFiles/Test.dir/Testing/testMain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Testing/testMain.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\Testing\testMain.cpp" > CMakeFiles\Test.dir\Testing\testMain.cpp.i

CMakeFiles/Test.dir/Testing/testMain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Testing/testMain.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\Testing\testMain.cpp" -o CMakeFiles\Test.dir\Testing\testMain.cpp.s

CMakeFiles/Test.dir/Testing/testMain.cpp.obj.requires:

.PHONY : CMakeFiles/Test.dir/Testing/testMain.cpp.obj.requires

CMakeFiles/Test.dir/Testing/testMain.cpp.obj.provides: CMakeFiles/Test.dir/Testing/testMain.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Test.dir\build.make CMakeFiles/Test.dir/Testing/testMain.cpp.obj.provides.build
.PHONY : CMakeFiles/Test.dir/Testing/testMain.cpp.obj.provides

CMakeFiles/Test.dir/Testing/testMain.cpp.obj.provides.build: CMakeFiles/Test.dir/Testing/testMain.cpp.obj


CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj: ../Testing/DictionaryTester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Test.dir\Testing\DictionaryTester.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\Testing\DictionaryTester.cpp"

CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\Testing\DictionaryTester.cpp" > CMakeFiles\Test.dir\Testing\DictionaryTester.cpp.i

CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\Testing\DictionaryTester.cpp" -o CMakeFiles\Test.dir\Testing\DictionaryTester.cpp.s

CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj.requires:

.PHONY : CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj.requires

CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj.provides: CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Test.dir\build.make CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj.provides.build
.PHONY : CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj.provides

CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj.provides.build: CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj


CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj: ../Testing/KeyValueTester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Test.dir\Testing\KeyValueTester.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\Testing\KeyValueTester.cpp"

CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\Testing\KeyValueTester.cpp" > CMakeFiles\Test.dir\Testing\KeyValueTester.cpp.i

CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\Testing\KeyValueTester.cpp" -o CMakeFiles\Test.dir\Testing\KeyValueTester.cpp.s

CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj.requires:

.PHONY : CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj.requires

CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj.provides: CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Test.dir\build.make CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj.provides.build
.PHONY : CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj.provides

CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj.provides.build: CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj


# Object files for target Test
Test_OBJECTS = \
"CMakeFiles/Test.dir/Testing/testMain.cpp.obj" \
"CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj" \
"CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

Test.exe: CMakeFiles/Test.dir/Testing/testMain.cpp.obj
Test.exe: CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj
Test.exe: CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj
Test.exe: CMakeFiles/Test.dir/build.make
Test.exe: CMakeFiles/Test.dir/linklibs.rsp
Test.exe: CMakeFiles/Test.dir/objects1.rsp
Test.exe: CMakeFiles/Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Test.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test.dir/build: Test.exe

.PHONY : CMakeFiles/Test.dir/build

CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Testing/testMain.cpp.obj.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.obj.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Testing/KeyValueTester.cpp.obj.requires

.PHONY : CMakeFiles/Test.dir/requires

CMakeFiles/Test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Test.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Test.dir/clean

CMakeFiles/Test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary" "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary" "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\cmake-build-debug" "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\cmake-build-debug" "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GenericDictionary\cmake-build-debug\CMakeFiles\Test.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Test.dir/depend

