cmake_minimum_required(VERSION 3.6)
project(lab3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Human.cpp Human.h Employee.cpp Employee.h)
add_executable(lab3 ${SOURCE_FILES})