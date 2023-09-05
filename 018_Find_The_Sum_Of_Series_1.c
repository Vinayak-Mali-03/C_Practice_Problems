/**
 * @file 018_Find_The_Sum_Of_Series_1.c
 * @author Vinayak Mali
 * @brief Find the sum of series 
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief Find the sum of series 1^2 + 2^2 + 3^2 + ....n terms
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, sum;
    i = 1;
    sum = 0;

    printf("Enter the number of terms : ");
    scanf("%d", &n);

    while(i <= n)
    {
        sum = sum + i * i;
        i++;
    }

    printf("Sum of series is %d\n", sum);

    return (EXIT_SUCCESS);
}