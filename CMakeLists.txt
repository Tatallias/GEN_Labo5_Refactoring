cmake_minimum_required(VERSION 3.14)
project(GEN_Labo5_Refactoring)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(GEN_Labo5_Refactoring
        src/Customer.cpp
        src/Customer.h
        src/main.cpp
        src/Movie.cpp
        src/Movie.h
        src/Rental.h
        README.md)
