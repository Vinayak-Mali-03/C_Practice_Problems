/**
 * @file 074_Triangle_Number_Pattern_2.c
 * @author Vinayak Mali
 * @brief To print the triangle of number
 * @version 0.1
 * @date 2023-11-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, i, j;

    printf("Enter the number of rows : ");
    scanf("%d", &num);

    for(i = 1; i <= num; ++i)
    {
        for(j = 1; j <= i; ++j)
            printf("%d", j);

        printf("\n");
    }

    return (EXIT_SUCCESS);
}