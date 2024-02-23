/*
 * @Author: KJ-Falloutlast 479875948@qq.com
 * @Date: 2024-02-15 09:02:50
 * @LastEditors: KJ-Falloutlast 479875948@qq.com
 * @LastEditTime: 2024-02-15 09:03:29
 * @FilePath: /cpp_ws/cmakelists_study/v5/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
#include <stdio.h>
#define NUMBER  3

int main()
{
    int a = 10;
#ifdef DEBUG
    printf("我是一个程序猿, 我不会爬树...\n");
#endif
    for(int i=0; i<NUMBER; ++i)
    {
        printf("hello, GCC!!!\n");
    }
    return 0;
}
