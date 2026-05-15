cmake_minimum_required(VERSION 3.22.1)

project(
    slam2d VERSION 1.0
    DESCRIPTION "My project to create a slam in 2d"
    LANGUAGES CXX
)

add_subdirectory(application)
add_subdirectory(libraries)