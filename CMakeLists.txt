cmake_minimum_required(VERSION 3.7)
project(TapWorm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Keyboard.cpp Keyboard.h Common.cpp Common.h)
add_executable(TapWorm ${SOURCE_FILES})