cmake_minimum_required(VERSION 3.10.0)
project(a07 VERSION 0.0.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_executable(a07 main.cpp)

target_compile_options(a07 PRIVATE -Wall -Wextra -pedantic)
