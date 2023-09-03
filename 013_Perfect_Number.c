/**
 * @file 013_Perfect_Number.c
 * @author Vinayak Mali
 * @brief To check whether a given number is perfect of not
 * @version 0.1
 * @date 2023-09-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief An integer is said to be a perfect number if its factors (including 1) sum to the number, e.g. 6 is a perfect number
 *          as 6 = 1 + 2 + 3, 28 is a perfect number as 28 = 1 + 2 + 4 + 7 + 14.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, sum, i;
    sum = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    for(i = 1; i <= num / 2; i++)
    {
        if(num % i == 0)
            sum = sum + i;
    }
    
    if(num == sum)
        printf("%d is a perfect number", num);
    else    
        printf("%d is not a perfect number", num);

    return (EXIT_SUCCESS);
}