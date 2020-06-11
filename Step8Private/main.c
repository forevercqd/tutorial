#include <stdio.h>
#include "hello_world.h"

int main(){
    // 调用 hello-world.so 中对应的接口
    hello_world();
    printf("\n");

    return 0;
}