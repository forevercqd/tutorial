cmake_minimum_required (VERSION 2.6)

project(SayHello)

include_directories(sayHello PUBLIC ${PROJECT_SOURCE_DIR}/../inc)

set(LIBRARY_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/../lib/")
add_library(sayHello STATIC hello.c)
add_library(sayHelloShared SHARED hello.c)


set_target_properties(sayHelloShared 
    PROPERTIES OUTPUT_NAME "sayHello")