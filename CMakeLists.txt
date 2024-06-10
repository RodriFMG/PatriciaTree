cmake_minimum_required(VERSION 3.26)
project(PatriciaTree)

set(CMAKE_CXX_STANDARD 17)

add_executable(PatriciaTree main.cpp
        PatriciaTree.h
        Node.h
        array.h)
