find_path(SAY_HELLO_INCLUDE_DIR 
            hello.h 
            /usr/include /usr/local/include ${CMAKE_SOURCE_DIR}/inc)

find_library(SAY_HELLO_LIBRARY
    NAMES sayHello
    PATHS /usr/lib /usr/local/lib ${CMAKE_SOURCE_DIR}/lib)

if(SAY_HELLO_INCLUDE_DIR AND SAY_HELLO_LIBRARY)
    set(SAY_HELLO_FOUND TRUE)
endif(SAY_HELLO_INCLUDE_DIR AND SAY_HELLO_LIBRARY)
