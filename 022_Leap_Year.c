/**
 * @file 022_Leap_Year.c
 * @author Vinayak Mali
 * @brief To check whether a given year is leap or not
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief A year is a leap year, if
 *              It is divisible by 4 but not by 100
 *              It is divisible by 400 and 100
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int year;

    printf("Enter the year : ");
    scanf("%d", &year);

    if(year % 400 == 0 && year % 100 == 0)
        printf("%d is a leap year", year);
    else if(year % 4 == 0 && year % 100 != 0)
        printf("%d is a leap year", year);
    else    
        printf("%d is not a leap year", year);

    return (EXIT_SUCCESS);
}   