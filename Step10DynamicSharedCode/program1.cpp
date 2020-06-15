//
//  program1.cpp
//  CPlus11Test
//
//  Created by 程清栋 on 2020/6/15.
//  Copyright © 2020 Robert. All rights reserved.
//
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

#include "DynamicSharedCode.hpp"

 
int main()
{
    int cnt = 0;
    while(1){
        set(cnt++);
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    
    return 0;
}

