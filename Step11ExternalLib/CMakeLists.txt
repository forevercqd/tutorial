cmake_minimum_required (VERSION 2.6)

project(ExternalLib)

set(CMAKE_LIBRARY_ARCHITECTURE ON)
# find_library(LIB_PATH sayHello ${PROJECT_SOURCE_DIR}/lib) # ok
# find_library(LIB_PATH sayHello ${PROJECT_SOURCE_DIR}) # ok


# 指定 find_package 要查找的.cmake文件的目录;
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

add_executable(DemoExternal main.c)

# 调用 FindSAY_HELLO.cmake 文件中相关命令查找对应库
find_package(SAY_HELLO REQUIRED)

if(SAY_HELLO_FOUND)
    target_link_libraries (DemoExternal ${SAY_HELLO_LIBRARY})
    target_include_directories(DemoExternal
        PUBLIC
        ${SAY_HELLO_INCLUDE_DIR})
else(SAY_HELLO)
    message(FATAL_ERROR "cqd.8 SAY_HELLO not found")
endif(SAY_HELLO_FOUND)


