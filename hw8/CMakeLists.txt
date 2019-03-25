cmake_minimum_required(VERSION 3.9)
project(hw8)

set(CMAKE_CXX_STANDARD 11)

add_executable(hw8
        Animal.cpp
        Bear.cpp
        main.cpp
        Man.cpp
        ManBearPig.h
        ManPigBear.cpp
        Pig.cpp
        Unit.cpp)
