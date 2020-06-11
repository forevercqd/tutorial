cmake_minimum_required(VERSION 2.6)

project(helloWorld)

add_subdirectory(hello)
add_subdirectory(world)

add_library(hello_world  hello_world.c)
target_link_libraries(hello_world hello world)

message("cqd.1 PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")

target_include_directories(hello_world 
    PUBLIC
    ${PROJECT_SOURCE_DIR}/hello
    ${PROJECT_SOURCE_DIR}/world)