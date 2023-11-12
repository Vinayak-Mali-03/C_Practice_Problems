/**
 * @file 063_Greatest_Common_Divisor.c
 * @author Vinayak Mali
 * @brief To find the greatest common divisor of two numbers
 * @version 0.1
 * @date 2023-11-12
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

void get_gcd(int x, int y);

int main(void)
{
    int num_1, num_2;

    printf("Enter the first number : ");
    scanf("%d", &num_1);

    printf("Enter the second number : ");
    scanf("%d", &num_2);

    if(num_1 < num_2)
        get_gcd(num_1, num_2);
    else
        get_gcd(num_2, num_1);

    return (EXIT_SUCCESS);
}

void get_gcd(int x, int y)
{
    int i;
    for (i = x; i >= 1; --i)
    {
        if (x % i == 0 && y % i == 0)
            break;
    }

    printf("GCD is : %d\n", i);
}