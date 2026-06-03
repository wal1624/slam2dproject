cmake_minimum_required(VERSION 3.22.1)
project(
    slam2d VERSION 1.0
    DESCRIPTION "My project to create a slam in 2d"
    LANGUAGES CXX
)

# Add in the subdirectories we need
add_subdirectory(application/gui)
add_subdirectory(application/backend)
add_subdirectory(libraries)

# Link in our targets to our project
# target_link_libraries(headers)