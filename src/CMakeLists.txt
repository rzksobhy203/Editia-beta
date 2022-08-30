
# Add source to this project's executable.
add_executable ("editia-beta" "main.cpp" "log.cpp")

# Config
set_property(TARGET "editia-beta" PROPERTY CXX_STANDARD 20)
target_include_directories("editia-beta" PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_precompile_headers("editia-beta" PRIVATE "edpch.h")
