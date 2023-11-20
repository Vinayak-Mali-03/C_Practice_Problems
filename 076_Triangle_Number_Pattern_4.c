/**
 * @file 076_Triangle_Number_Pattern_4.c
 * @author Vinayak Mali
 * @brief To print the triangle pattern
 * @version 0.1
 * @date 2023-11-18
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

    for(i = 0; i < num; ++i)
    {
        for(j = 0; j < 2 * i + 1; ++j)
            printf(" ");

        for(j = 0; j < 2 * (num - i) - 1; ++j)
            if(j == 0 || j == 2 * (num - i) - 2 || i == 0)
                printf("%d ", j + 1);
            else
                printf("  ");
        printf("\n");
    }

    return (EXIT_SUCCESS);
}