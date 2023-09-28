/**
 * @file 029_Swap_Numbers_Using_Three_Ways.c
 * @author Vinayak Mali
 * @brief To swap numbers using three ways
 * @version 0.1
 * @date 2023-09-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10, b = 20;

    printf("%d %d\n", a, b);
    a = a * b;
    b = a / b;
    a = a / b;

    printf("%d %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%d %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d %d\n", a, b);

    exit(EXIT_SUCCESS);
}