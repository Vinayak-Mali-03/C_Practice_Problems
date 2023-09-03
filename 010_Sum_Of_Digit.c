/**
 * @file 010_Sum_Of_Digit.c
 * @author Vinayak Mali
 * @brief To find the sum of individual digits in a given positive integer number
 * @version 0.1
 * @date 2023-09-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, sum, digit;
    sum = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    while(num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digit is : %d\n", sum);

    return (EXIT_SUCCESS);
}