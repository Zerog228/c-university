cmake_minimum_required(VERSION 4.0)
project(test)

set(CMAKE_CXX_STANDARD 20)

add_executable(test main.cpp
        util/Rectangle.cpp
        util/Rectangle.h
        util/Square.cpp
        util/Square.h
        inheritance/AnimalT.cpp
        inheritance/AnimalT.h
        inheritance/FoxT.cpp
        inheritance/FoxT.h
        inheritance/DogT.cpp
        inheritance/DogT.h
)
