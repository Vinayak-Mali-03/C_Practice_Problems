/**
 * @file 030_Macro_To_Find_Greatest_Of_two_Numbers.c
 * @author Vinayak Mali
 * @brief To find the greatest of two numbers using macro
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define GREATEST(a, b) ((a > b ? a : b))

int main(void)
{
    int num1, num2;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("The greatest of two numbers is %d\n", GREATEST(num1, num2));

    exit(EXIT_SUCCESS);
}