/**
 * @file 034_Nested_Macro_To_Minimum_Of_Three_Numbers.c
 * @author Vinayak Mali
 * @brief Nested macro to find the minimum of three numbers
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define MIN1(a, b) (a < b ? a : b)
#define MIN2(a, b, c) (MIN1(a, b) < c ? MIN1(a, b) : c)

int main(void)
{
    int a, b, c;

    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    printf("Enter thrird number : ");
    scanf("%d", &c);

    printf("Minimum of %d, %d and %d is : %d\n", a, b, c, MIN2(a, b, c));

    exit(EXIT_SUCCESS);
}