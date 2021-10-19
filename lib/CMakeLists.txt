cmake_minimum_required(VERSION 3.10)

set (CMAKE_CXX_STANDARD 11)

project(HelloLibrary)

file(GLOB SOURCES
    ./include/*.hpp
    ./src/*.cpp
)

include_directories("./include/")

message(STATUS "the SOURCES variable is ${SOURCES} !!")

add_library(HelloLibrary ${SOURCES})

