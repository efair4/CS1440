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
CMAKE_SOURCE_DIR = "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/GeoRegions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GeoRegions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GeoRegions.dir/flags.make

CMakeFiles/GeoRegions.dir/main.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GeoRegions.dir/main.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\main.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\main.cpp"

CMakeFiles/GeoRegions.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/main.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\main.cpp" > CMakeFiles\GeoRegions.dir\main.cpp.i

CMakeFiles/GeoRegions.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/main.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\main.cpp" -o CMakeFiles\GeoRegions.dir\main.cpp.s

CMakeFiles/GeoRegions.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/main.cpp.obj.requires

CMakeFiles/GeoRegions.dir/main.cpp.obj.provides: CMakeFiles/GeoRegions.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/main.cpp.obj.provides

CMakeFiles/GeoRegions.dir/main.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/main.cpp.obj


CMakeFiles/GeoRegions.dir/Utils.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/Utils.cpp.obj: ../Utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GeoRegions.dir/Utils.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\Utils.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\Utils.cpp"

CMakeFiles/GeoRegions.dir/Utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/Utils.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\Utils.cpp" > CMakeFiles\GeoRegions.dir\Utils.cpp.i

CMakeFiles/GeoRegions.dir/Utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/Utils.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\Utils.cpp" -o CMakeFiles\GeoRegions.dir\Utils.cpp.s

CMakeFiles/GeoRegions.dir/Utils.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/Utils.cpp.obj.requires

CMakeFiles/GeoRegions.dir/Utils.cpp.obj.provides: CMakeFiles/GeoRegions.dir/Utils.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/Utils.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/Utils.cpp.obj.provides

CMakeFiles/GeoRegions.dir/Utils.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/Utils.cpp.obj


CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj: ../MenuOption.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\MenuOption.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\MenuOption.cpp"

CMakeFiles/GeoRegions.dir/MenuOption.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/MenuOption.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\MenuOption.cpp" > CMakeFiles\GeoRegions.dir\MenuOption.cpp.i

CMakeFiles/GeoRegions.dir/MenuOption.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/MenuOption.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\MenuOption.cpp" -o CMakeFiles\GeoRegions.dir\MenuOption.cpp.s

CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj.requires

CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj.provides: CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj.provides

CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj


CMakeFiles/GeoRegions.dir/Menu.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/Menu.cpp.obj: ../Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/GeoRegions.dir/Menu.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\Menu.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\Menu.cpp"

CMakeFiles/GeoRegions.dir/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/Menu.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\Menu.cpp" > CMakeFiles\GeoRegions.dir\Menu.cpp.i

CMakeFiles/GeoRegions.dir/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/Menu.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\Menu.cpp" -o CMakeFiles\GeoRegions.dir\Menu.cpp.s

CMakeFiles/GeoRegions.dir/Menu.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/Menu.cpp.obj.requires

CMakeFiles/GeoRegions.dir/Menu.cpp.obj.provides: CMakeFiles/GeoRegions.dir/Menu.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/Menu.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/Menu.cpp.obj.provides

CMakeFiles/GeoRegions.dir/Menu.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/Menu.cpp.obj


CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj: ../UserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\UserInterface.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\UserInterface.cpp"

CMakeFiles/GeoRegions.dir/UserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/UserInterface.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\UserInterface.cpp" > CMakeFiles\GeoRegions.dir\UserInterface.cpp.i

CMakeFiles/GeoRegions.dir/UserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/UserInterface.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\UserInterface.cpp" -o CMakeFiles\GeoRegions.dir\UserInterface.cpp.s

CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj.requires

CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj.provides: CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj.provides

CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj


CMakeFiles/GeoRegions.dir/World.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/World.cpp.obj: ../World.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/GeoRegions.dir/World.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\World.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\World.cpp"

CMakeFiles/GeoRegions.dir/World.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/World.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\World.cpp" > CMakeFiles\GeoRegions.dir\World.cpp.i

CMakeFiles/GeoRegions.dir/World.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/World.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\World.cpp" -o CMakeFiles\GeoRegions.dir\World.cpp.s

CMakeFiles/GeoRegions.dir/World.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/World.cpp.obj.requires

CMakeFiles/GeoRegions.dir/World.cpp.obj.provides: CMakeFiles/GeoRegions.dir/World.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/World.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/World.cpp.obj.provides

CMakeFiles/GeoRegions.dir/World.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/World.cpp.obj


CMakeFiles/GeoRegions.dir/Nation.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/Nation.cpp.obj: ../Nation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/GeoRegions.dir/Nation.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\Nation.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\Nation.cpp"

CMakeFiles/GeoRegions.dir/Nation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/Nation.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\Nation.cpp" > CMakeFiles\GeoRegions.dir\Nation.cpp.i

CMakeFiles/GeoRegions.dir/Nation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/Nation.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\Nation.cpp" -o CMakeFiles\GeoRegions.dir\Nation.cpp.s

CMakeFiles/GeoRegions.dir/Nation.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/Nation.cpp.obj.requires

CMakeFiles/GeoRegions.dir/Nation.cpp.obj.provides: CMakeFiles/GeoRegions.dir/Nation.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/Nation.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/Nation.cpp.obj.provides

CMakeFiles/GeoRegions.dir/Nation.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/Nation.cpp.obj


CMakeFiles/GeoRegions.dir/State.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/State.cpp.obj: ../State.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/GeoRegions.dir/State.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\State.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\State.cpp"

CMakeFiles/GeoRegions.dir/State.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/State.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\State.cpp" > CMakeFiles\GeoRegions.dir\State.cpp.i

CMakeFiles/GeoRegions.dir/State.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/State.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\State.cpp" -o CMakeFiles\GeoRegions.dir\State.cpp.s

CMakeFiles/GeoRegions.dir/State.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/State.cpp.obj.requires

CMakeFiles/GeoRegions.dir/State.cpp.obj.provides: CMakeFiles/GeoRegions.dir/State.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/State.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/State.cpp.obj.provides

CMakeFiles/GeoRegions.dir/State.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/State.cpp.obj


CMakeFiles/GeoRegions.dir/County.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/County.cpp.obj: ../County.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/GeoRegions.dir/County.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\County.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\County.cpp"

CMakeFiles/GeoRegions.dir/County.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/County.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\County.cpp" > CMakeFiles\GeoRegions.dir\County.cpp.i

CMakeFiles/GeoRegions.dir/County.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/County.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\County.cpp" -o CMakeFiles\GeoRegions.dir\County.cpp.s

CMakeFiles/GeoRegions.dir/County.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/County.cpp.obj.requires

CMakeFiles/GeoRegions.dir/County.cpp.obj.provides: CMakeFiles/GeoRegions.dir/County.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/County.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/County.cpp.obj.provides

CMakeFiles/GeoRegions.dir/County.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/County.cpp.obj


CMakeFiles/GeoRegions.dir/City.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/City.cpp.obj: ../City.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/GeoRegions.dir/City.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\City.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\City.cpp"

CMakeFiles/GeoRegions.dir/City.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/City.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\City.cpp" > CMakeFiles\GeoRegions.dir\City.cpp.i

CMakeFiles/GeoRegions.dir/City.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/City.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\City.cpp" -o CMakeFiles\GeoRegions.dir\City.cpp.s

CMakeFiles/GeoRegions.dir/City.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/City.cpp.obj.requires

CMakeFiles/GeoRegions.dir/City.cpp.obj.provides: CMakeFiles/GeoRegions.dir/City.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/City.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/City.cpp.obj.provides

CMakeFiles/GeoRegions.dir/City.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/City.cpp.obj


CMakeFiles/GeoRegions.dir/Region.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/Region.cpp.obj: ../Region.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/GeoRegions.dir/Region.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\Region.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\Region.cpp"

CMakeFiles/GeoRegions.dir/Region.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/Region.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\Region.cpp" > CMakeFiles\GeoRegions.dir\Region.cpp.i

CMakeFiles/GeoRegions.dir/Region.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/Region.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\Region.cpp" -o CMakeFiles\GeoRegions.dir\Region.cpp.s

CMakeFiles/GeoRegions.dir/Region.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/Region.cpp.obj.requires

CMakeFiles/GeoRegions.dir/Region.cpp.obj.provides: CMakeFiles/GeoRegions.dir/Region.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/Region.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/Region.cpp.obj.provides

CMakeFiles/GeoRegions.dir/Region.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/Region.cpp.obj


CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj: ../WorldUserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\WorldUserInterface.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\WorldUserInterface.cpp"

CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\WorldUserInterface.cpp" > CMakeFiles\GeoRegions.dir\WorldUserInterface.cpp.i

CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\WorldUserInterface.cpp" -o CMakeFiles\GeoRegions.dir\WorldUserInterface.cpp.s

CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj.requires

CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj.provides: CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj.provides

CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj


CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj: ../NationUserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\NationUserInterface.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\NationUserInterface.cpp"

CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\NationUserInterface.cpp" > CMakeFiles\GeoRegions.dir\NationUserInterface.cpp.i

CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\NationUserInterface.cpp" -o CMakeFiles\GeoRegions.dir\NationUserInterface.cpp.s

CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj.requires

CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj.provides: CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj.provides

CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj


CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj: ../StateUserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\StateUserInterface.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\StateUserInterface.cpp"

CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\StateUserInterface.cpp" > CMakeFiles\GeoRegions.dir\StateUserInterface.cpp.i

CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\StateUserInterface.cpp" -o CMakeFiles\GeoRegions.dir\StateUserInterface.cpp.s

CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj.requires

CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj.provides: CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj.provides

CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj


CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj: ../CountyUserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GeoRegions.dir\CountyUserInterface.cpp.obj -c "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\CountyUserInterface.cpp"

CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.i"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\CountyUserInterface.cpp" > CMakeFiles\GeoRegions.dir\CountyUserInterface.cpp.i

CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.s"
	C:\MinGW\mingw-w64\i686-6.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\CountyUserInterface.cpp" -o CMakeFiles\GeoRegions.dir\CountyUserInterface.cpp.s

CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj.requires:

.PHONY : CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj.requires

CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj.provides: CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj.requires
	$(MAKE) -f CMakeFiles\GeoRegions.dir\build.make CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj.provides

CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj.provides.build: CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj


# Object files for target GeoRegions
GeoRegions_OBJECTS = \
"CMakeFiles/GeoRegions.dir/main.cpp.obj" \
"CMakeFiles/GeoRegions.dir/Utils.cpp.obj" \
"CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj" \
"CMakeFiles/GeoRegions.dir/Menu.cpp.obj" \
"CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj" \
"CMakeFiles/GeoRegions.dir/World.cpp.obj" \
"CMakeFiles/GeoRegions.dir/Nation.cpp.obj" \
"CMakeFiles/GeoRegions.dir/State.cpp.obj" \
"CMakeFiles/GeoRegions.dir/County.cpp.obj" \
"CMakeFiles/GeoRegions.dir/City.cpp.obj" \
"CMakeFiles/GeoRegions.dir/Region.cpp.obj" \
"CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj" \
"CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj" \
"CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj" \
"CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj"

# External object files for target GeoRegions
GeoRegions_EXTERNAL_OBJECTS =

GeoRegions.exe: CMakeFiles/GeoRegions.dir/main.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/Utils.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/Menu.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/World.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/Nation.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/State.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/County.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/City.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/Region.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj
GeoRegions.exe: CMakeFiles/GeoRegions.dir/build.make
GeoRegions.exe: CMakeFiles/GeoRegions.dir/linklibs.rsp
GeoRegions.exe: CMakeFiles/GeoRegions.dir/objects1.rsp
GeoRegions.exe: CMakeFiles/GeoRegions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX executable GeoRegions.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GeoRegions.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GeoRegions.dir/build: GeoRegions.exe

.PHONY : CMakeFiles/GeoRegions.dir/build

CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/main.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/Utils.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/MenuOption.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/Menu.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/UserInterface.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/World.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/Nation.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/State.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/County.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/City.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/Region.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.obj.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.obj.requires

.PHONY : CMakeFiles/GeoRegions.dir/requires

CMakeFiles/GeoRegions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GeoRegions.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GeoRegions.dir/clean

CMakeFiles/GeoRegions.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions" "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions" "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug" "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug" "C:\Users\efair\OneDrive\School Stuff\1440\Repositories\cs1440me\GeoRegions\cmake-build-debug\CMakeFiles\GeoRegions.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/GeoRegions.dir/depend

