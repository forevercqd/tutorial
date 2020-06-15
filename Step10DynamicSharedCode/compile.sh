g++ -std=c++11 -fPIC -shared -o libSetGet.so DynamicSharedCode.cpp
g++ -o Demo1  -std=c++11 program1.cpp ./libSetGet.so
g++ -o Demo2  -std=c++11 program2.cpp ./libSetGet.so
g++ -o Demo3  -std=c++11 program3.cpp ./libSetGet.so


# ./Demo1 & ./Demo2

