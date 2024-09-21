cmake_minimum_required(VERSION 3.29)
project(CPLUSPLUS)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPLUSPLUS main.cpp
        Person.h
        Person.cpp)
