cmake_minimum_required(VERSION 3.16)
project(simpleCalculator)
set(CMAKE_CXX_STANDARD 20)
include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_executable(exec ${SOURCES} src/calc.cpp src/main.cpp include/calc.h)
