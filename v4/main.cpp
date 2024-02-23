#include "head.h"
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

