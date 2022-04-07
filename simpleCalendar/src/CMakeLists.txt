cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 14)

add_executable(program main.cpp Calendar.cpp ../include/Calendar.h Gregorian.cpp ../include/Gregorian.h Julian.cpp ../include/Julian.h Day.cpp ../include/Day.h)
