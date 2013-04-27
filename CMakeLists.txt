#Specify the version being used aswell as the language
cmake_minimum_required(VERSION 2.6)

#Name your project here
project(greeter)

## Test building
enable_testing()
add_subdirectory(test EXCLUDE_FROM_ALL)

#This tells CMake to fib.c and name it fibonacci
add_executable(greeter source/greeter.c source/main.c)