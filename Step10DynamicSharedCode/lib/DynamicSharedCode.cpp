//
//  DynamicSharedCode.cpp
//  CPlus11Test
//
//  Created by 程清栋 on 2020/6/15.
//  Copyright © 2020 Robert. All rights reserved.
//

#include "DynamicSharedCode.hpp"



#include <stdio.h>
#include "DynamicSharedCode.hpp"
 
static int a = 0;
 
void set(int v)
{
    a = v;
    printf("set, a = %d\n", a);
    return;
}
 
void get()
{
    printf("get, a = %d\n", a);
}
