cmake_minimum_required(VERSION 3.24)

#  Attempt to bypass "/usr/bin/ld: невозможно найти -lstdc++: Нет такого файла или каталога" error
#  (missing reference to ld.lld linker). Trying to set newer non-default C++ compiler as default for this project
#set(CMAKE_CXX_COMPILER "/usr/bin/clang-15")
#  This is default setting for CXX_COMPILER - system g++ from gcc package
#set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_CXX_COMPILER "/usr/bin/g++-12")

#  Also check CLion' Options/Build.../CMake and make sure that field "CMake options" point to an existent linker is looks like:
#  -DCMAKE_LINKER:FILEPATH=/usr/bin/ld.lld-15     # That's LLVM drop-in replacement for slow system ld linker (BFD and gold)
#  -DCMAKE_LINKER:FILEPATH=/usr/bin/ld.lld-15 -DCMAKE_CXX_FLAGS="-stdlib=libstdc++"     # The same as above + use Clang headers instead libc++

project(cpp_hex_grid VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 23)
#set(CMAKE_CXX_FLAGS "-std=c++23 -stdlib=libstdc++")
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -std=c++23 -stdlib=libstdc++")

include_directories(hex-grid/HexGrid)

add_executable(cpp_hex_grid
        hex-grid/HexGrid/HexGrid.cpp
        hex-grid/HexGrid/HexGrid.h
        hex-grid/HexGrid/HexGridMetrics.cpp
        hex-grid/HexGrid/HexGridMetrics.h
        hex-grid/main.cpp
        hex-grid/HexGrid/HexCell.cpp
        hex-grid/HexGrid/HexCell.h
        hex-grid/HexGrid/HexChunk.cpp
        hex-grid/HexGrid/HexChunk.h
        hex-grid/HexGrid/HexCoordinates.cpp
        hex-grid/HexGrid/HexCoordinates.h)
