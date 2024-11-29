cmake_minimum_required(VERSION 3.10)

# Define the project
project(MyProject)

# Add header files (optional, but recommended for clarity)
include_directories(${CMAKE_SOURCE_DIR})

# Add source files to the project
add_executable(my_program declaration.cpp source.cpp)
