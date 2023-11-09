/**
 * @file 059_Binray_To_Decimal_Number_Conversion.c
 * @author Vinayak Mali
 * @brief To demonstrate the binary to decimal number conversion
 * @version 0.1
 * @date 2023-11-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int num, copy;
    int dec = 0, i = 0, remainder;

    printf("Enter a binary number : ");
    scanf("%d", &num);

    copy = num;

    while(num != 0)
    {
        remainder = num % 10;
        num = num / 10;

        dec = dec + remainder * pow(2, i);

        ++i;
    }

    printf("Decimal number of binary number %d is : %d\n", copy, dec);

    return (EXIT_SUCCESS);
}
