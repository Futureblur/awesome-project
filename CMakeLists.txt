# Set minimum requirements
cmake_minimum_required(VERSION 3.16)

# Create project
project(Awesome)

# Tell CMake to compile an executable
# using the source file as an input
add_executable(Awesome main.cpp)

# Add GLFW CMakeLists.txt file
add_subdirectory("ThirdParty/glfw")
add_subdirectory("ThirdParty/logger")

# Add paths to include directories
target_include_directories(Awesome PRIVATE "ThirdParty/glfw/include")
target_include_directories(Awesome PRIVATE "ThirdParty/logger")

# Link against GLFW
target_link_libraries(Awesome PRIVATE glfw logger)
