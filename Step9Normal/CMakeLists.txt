cmake_minimum_required (VERSION 2.6)

project(Hello)


add_subdirectory(src)

add_executable(Demo main.c)
target_link_libraries (Demo sayHello)
target_include_directories(Demo PUBLIC inc)
# target_link_directories(Demo )