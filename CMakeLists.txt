cmake_minimum_required(VERSION 3.24)
project(cpp_hex_grid)

set(CMAKE_CXX_STANDARD 20)

include_directories(hex-grid/HexGrid)

add_executable(cpp_hex_grid
        hex-grid/HexGrid/HexGrid.cpp
        hex-grid/HexGrid/HexGrid.h
        hex-grid/HexGrid/HexGridMetrics.cpp
        hex-grid/HexGrid/HexGridMetrics.h
        hex-grid/main.cpp)
