cmake_minimum_required(VERSION 3.16)

project(matrix_calc)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_subdirectory(src)
add_subdirectory(matrixLib)