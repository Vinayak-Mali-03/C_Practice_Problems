/**
 * @file 032_Harmonic_Mean_Of_Two_Numbers.c
 * @author Vinayak Mali
 * @brief To find harmonic mean of two numbers
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define HMEAN(a, b) (((float)(2 * (a) * (b)) / (((a) + b))))

int main(void)
{
    int num1, num2;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("Harmonic man of %d and %d is %f", num1, num2, HMEAN(num1, num2));

    exit(EXIT_SUCCESS);
}
