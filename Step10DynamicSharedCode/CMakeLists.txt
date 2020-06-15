cmake_minimum_required(VERSION 2.6)

project(DemoProj)

add_subdirectory(lib)   # 引用内部库

foreach(curExe program1 program2 program3)
    message("cqd, curExe = ${curExe}")
    add_executable(${curExe} ${curExe}.cpp)
    target_link_libraries(${curExe} GetSet)
    target_include_directories(${curExe} 
        PUBLIC
        ./lib)
endforeach(curExe )




