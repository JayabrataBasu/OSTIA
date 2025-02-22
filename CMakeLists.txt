cmake_minimum_required(VERSION 3.15)

# This must come before project()
# This must come before project()
set(CMAKE_TOOLCHAIN_FILE "C:/Users/jayab/dev-tools/vcpkg/scripts/buildsystems/vcpkg.cmake" 
    CACHE STRING "Vcpkg toolchain file")

project(OSTIA VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find doctest package
find_package(doctest CONFIG REQUIRED)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Add source files
add_executable(OSTIA_main
    src/main.cpp
    src/utils/Logger.cpp
    src/core/CommandProcessor.cpp
)

# Add include directories
target_include_directories(OSTIA_main PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Enable testing
enable_testing()

# Add tests subdirectory
add_subdirectory(tests)
