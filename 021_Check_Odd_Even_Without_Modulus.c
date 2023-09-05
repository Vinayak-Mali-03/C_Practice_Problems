/**
 * @file 021_Check_Odd_Even_Without_Modulus.c
 * @author Vinayak Mali
 * @brief Check whether a given number is even or odd without using modulus operator
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief Whether a number is even or odd can be determined by checking its Least Singnifican Bit(LSB).
 *          If the first bit of a number is 0 the number is even and if it is 1 then the number is odd.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    if((num & 1) == 0)
        printf("Number %d is even", num);
    else    
        printf("Number %d is odd", num);

    return (EXIT_SUCCESS);
}