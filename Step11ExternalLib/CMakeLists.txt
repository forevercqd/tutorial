cmake_minimum_required (VERSION 2.6)

project(ExternalLib)

set(CMAKE_LIBRARY_ARCHITECTURE ON)
# find_library(LIB_PATH sayHello ${PROJECT_SOURCE_DIR}/lib) # ok
# find_library(LIB_PATH sayHello ${PROJECT_SOURCE_DIR}) # ok

find_library(LIB_PATH 
    NAMES sayHello
    HINTS ${PROJECT_SOURCE_DIR}/lib # 结果为 LIB_PATH = LIB_PATH-NOTFOUND
    # PATHS ${PROJECT_SOURCE_DIR}/lib    # 结果 ok
    )

message("cqd, PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}, path = ${PROJECT_SOURCE_DIR}/lib, LIB_PATH = ${LIB_PATH}")

add_executable(DemoExternal main.c)
target_link_libraries (DemoExternal ${LIB_PATH})
target_include_directories(DemoExternal
    PUBLIC
    ${PROJECT_SOURCE_DIR}/inc)