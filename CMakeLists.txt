cmake_minimum_required(VERSION 3.0)

project(bminorc LANGUAGES C)

include_directories(include)

add_subdirectory(src)

#add_executable(bminorc main.c)

#install(TARGETS bminorc RUNTIME DESTINATION bin)
