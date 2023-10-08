/**
 * @file 033_Swap_Numbers_Using_Macro.c
 * @author Vinayak Mali
 * @brief To swap the numbers using marcro
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define SWAP(a, b) (a ^= b ^= a ^=b)

int main(void)
{
    int num1, num2;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("Before swapping, the value of num1 = %d and num2 = %d\n", num1, num2);
    SWAP(num1, num2);

    printf("After swapping, the value of num1 = %d and num2 = %d\n", num1, num2);

    exit(EXIT_SUCCESS);
}