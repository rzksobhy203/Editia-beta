# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("editia-beta")

# Include sub-projects.
add_subdirectory ("src")

# config
configure_file(helpers.h.in helpers.h)
target_include_directories("editia-beta" PRIVATE ${CMAKE_BINARY_DIR})
