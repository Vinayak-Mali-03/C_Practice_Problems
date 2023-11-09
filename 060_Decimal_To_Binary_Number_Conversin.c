/**
 * @file 060_Decimal_To_Binary_Number_Conversin.c
 * @author Vinayak Mali
 * @brief To demonstrate the decimal to binary number conversion
 * @version 0.1
 * @date 2023-11-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int decimal_number, copy;
    int binary_number = 0;
    int remainder, tmp = 1;

    printf("Enter the decimal number : ");
    scanf("%d", &decimal_number);

    copy = decimal_number;

    while(decimal_number != 0)
    {
        remainder = decimal_number % 2;
        decimal_number = decimal_number / 2;
        binary_number = binary_number + remainder * tmp;
        tmp = tmp * 10;
    }

    printf("Binary number of decimal number %d is : %d\n", copy, binary_number);

    return (EXIT_SUCCESS);
}