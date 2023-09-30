/**
 * @file 015_Aramstrong_Number.c
 * @author Vinayak Mali
 * @brief To check whether a given number is an armstrong number or not
 * @version 0.1
 * @date 2023-09-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief A number is said to be an Armstrong number if the sum of power of its digits length is equal to the number itself. 
 *          e.g. 153 is an armstrong number as 153 = 1^3 + 5^3 + 3^3, i.e. 153 = 1 + 125 + 27
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int num, temp, digit, sum, count;
    sum = 0;
    count = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    temp = num;

    while(num != 0)
    {
        num = num / 10;
        count++;
    }

    num = temp;
    while(num != 0)
    {
        digit = num % 10;
        sum = sum + pow(digit, count);
        num = num / 10;
    }

    if(temp == sum)
        printf("%d is an Armstrong number", temp);
    else    
        printf("%d is not an Armstrong number", temp);

    return (EXIT_SUCCESS);
}

