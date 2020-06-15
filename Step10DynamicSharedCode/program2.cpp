//
//  program2.cpp
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
    while(1){
        get();
        
        this_thread::sleep_for(chrono::milliseconds(1000/2));
    }
    
    return 0;
    
}

