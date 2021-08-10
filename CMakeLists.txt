# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("pipes_test")
add_executable (source "source.cpp")
add_executable (process "process.cpp")
add_executable (sinc "sinc.cpp")

# Include sub-projects.
#add_subdirectory ("prog_src")
#add_subdirectory ("prog_sinc")