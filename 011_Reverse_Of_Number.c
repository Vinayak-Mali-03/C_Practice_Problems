/**
 * @file 011_Reverse_Of_Number.c
 * @author Vinayak Mali
 * @brief To find the reverse of given number
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
    int num, reverse, digit, copy;
    reverse = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    copy = num;

    while(num != 0)
    {
        digit = num % 10;
        num = num / 10;
        reverse = reverse * 10 + digit;
    }

    printf("Reverse number of %d is : %d\n", copy, reverse);

    return (EXIT_SUCCESS);
}