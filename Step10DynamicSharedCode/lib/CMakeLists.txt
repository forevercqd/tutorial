cmake_minimum_required (VERSION 2.6)

project(GetSet)
# project(libGetSet)

cmake_policy(SET CMP0042 NEW)
add_compile_options(-std=c++11)
add_library(GetSet 
    SHARED
    DynamicSharedCode.cpp)