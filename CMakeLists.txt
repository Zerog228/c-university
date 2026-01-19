cmake_minimum_required(VERSION 4.0)
project(test)

set(CMAKE_CXX_STANDARD 20)

add_executable(test main.cpp
        util/Rectangle.cpp
        util/Rectangle.h
        util/Square.cpp
        util/Square.h
        inheritance/Animal.cpp
        inheritance/Animal.h
        inheritance/Fox.cpp
        inheritance/Fox.h
        inheritance/Dog.cpp
        inheritance/Dog.h
)
