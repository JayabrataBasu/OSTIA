# Setup Instructions

Follow these steps to set up OSTIA on your system.

## Prerequisites
1. Install [CMake](https://cmake.org/download/).
2. Install a C++ compiler:
   - GCC (Linux)
   - Clang (macOS)
   - MSVC (Windows)
3. Install [vcpkg](https://github.com/microsoft/vcpkg) for dependency management.

## Installation Steps


1. Clone the repository:
git clone https://github.com/yourusername/OSTIA.git
cd OSTIA



2. Install dependencies using vcpkg:
vcpkg install doctest:x64-windows # Replace with your platform triplet



3. Build the project:
mkdir build && cd build
cmake ..
cmake --build .



4. Run the main program:
./bin/Debug/OSTIA_main.exe # Adjust path based on your platform



5. Run tests:
./bin/Debug/OSTIA_tests.exe # Adjust path based on your platform

