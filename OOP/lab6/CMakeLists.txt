cmake_minimum_required(VERSION 3.7)
project(lab5r)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Shape.cpp Shape.h Triangle.cpp Triangle.h)
add_executable(lab5r ${SOURCE_FILES})