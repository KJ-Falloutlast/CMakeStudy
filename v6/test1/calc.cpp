/*
 * @Author: KJ-Falloutlast 479875948@qq.com
 * @Date: 2024-02-19 17:48:33
 * @LastEditors: KJ-Falloutlast 479875948@qq.com
 * @LastEditTime: 2024-02-19 17:59:32
 * @FilePath: /cpp_ws/cmakelists_study/v6/test1/calc.cpp
 * @Description:
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
#include "calc.h"
#include <iostream>
#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    printf(" a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", add(a, b));    
    printf("a - b = %d\n", subtract(a, b));    
    printf("a * b = %d\n", multiply(a, b));    
    printf("a / b = %d\n", divide(a, b));    
}

