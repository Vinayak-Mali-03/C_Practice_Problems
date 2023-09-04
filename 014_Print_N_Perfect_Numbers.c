/**
 * @file 014_Print_N_Perfect_Numbers.c
 * @author Vinayak Mali
 * @brief To print first n perfect numbers
 * @version 0.1
 * @date 2023-09-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, sum, i, count, n;
    
    num = 1;
    sum = 0;
    count = 1;

    printf("How many numbers you want to print : ");
    scanf("%d", &n);

    printf("Perfect numbers are : \n");

    while(count <= n)
    {
        for(i = 1; i < num; i++)
        {
            if(num % i == 0)
                sum = sum + i;
        }

        if(num == sum)
        {
            printf("%d\n", num);
            count++;
        }

        num++;
        sum = 0;
    }

    return (EXIT_SUCCESS);
}