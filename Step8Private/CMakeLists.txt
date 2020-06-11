cmake_minimum_required (VERSION 2.6)

project(DemoHelloWorld)

# set(DEMO_TARGET DemoHelloWorld)

add_subdirectory(hello_world)

add_executable(DEMO1 main.c)
target_link_libraries(DEMO1 hello_world)

message("cqd.0 PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")


target_include_directories(DEMO1 
    PUBLIC
    ${PROJECT_SOURCE_DIR}
    "${PROJECT_SOURCE_DIR}/hello_world")