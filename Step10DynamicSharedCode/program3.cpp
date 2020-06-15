//
//  program3.cpp
//  CPlus11Test
//
//  Created by 程清栋 on 2020/6/15.
//  Copyright © 2020 Robert. All rights reserved.
//

#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

#include "DynamicSharedCode.hpp"


void* thread1(void* data)
{
    int cnt = 0;
    while(1){
        printf("thread1 set...\n");
        set(cnt++);
        
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    return NULL;
}
 
void* thread2(void* data)
{
    while(1){
        printf("thread2 get...\n");
        get();
        
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}
 
int main()
{
    pthread_t thread_id;
    pthread_create(&thread_id, NULL, &thread1, NULL);
    pthread_create(&thread_id, NULL, &thread2, NULL);
    while(1){
        this_thread::sleep_for(chrono::milliseconds(1000 * 1000));
    }
    
    return 0;
}
