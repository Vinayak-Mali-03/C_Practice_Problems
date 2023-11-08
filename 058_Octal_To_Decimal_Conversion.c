/**
 * @file 058_Octal_To_Decimal_Conversion.c
 * @author Vinayak Mali
 * @brief To demonstrate the octal to decimal conversion
 * @version 0.1
 * @date 2023-11-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int octal_number, copy;
    int decimal_number = 0;
    int tmp = 0;

    printf("Enter the octal number : ");
    scanf("%d", &octal_number);

    copy = octal_number;

    while(octal_number != 0)
    {
        decimal_number = decimal_number + (octal_number % 10) * pow(8, tmp);
        tmp = tmp + 1;
        octal_number = octal_number / 10;
    }

    printf("Equivalent decimal number of of octal number %d is : %d\n", copy, decimal_number);

    return (EXIT_SUCCESS);
}