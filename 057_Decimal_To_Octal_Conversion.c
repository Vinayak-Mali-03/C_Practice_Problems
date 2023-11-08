/**
 * @file 057_Decimal_To_Octal_Conversion.c
 * @author Vinayak Mali
 * @brief To demonstrate the conversion of decimal number to octal number 
 * @version 0.1
 * @date 2023-11-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int decimal_number, copy;
    int octal_number = 0;
    int tmp = 1;

    printf("Enter the decimal number : ");
    scanf("%d", &decimal_number);

    copy = decimal_number;

    while(decimal_number != 0)
    {
        octal_number = octal_number + (decimal_number % 8) * tmp;
        decimal_number = decimal_number / 8;
        tmp = tmp * 10;
    }

    printf("Equivalent Octal number of decimal number %d is : %d\n", copy, octal_number);

    return (EXIT_SUCCESS);
}