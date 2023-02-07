cmake_minimum_required(VERSION 3.5)

project(quick_sort)

file(GLOB
	lib_source "*.cpp"
	rand_lib_source "./lib/rand_of_range/*.cpp")

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(${PROJECT_NAME}_lib STATIC ${lib_source} ${rand_of_range})
