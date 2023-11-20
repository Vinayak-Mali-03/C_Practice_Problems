/**
 * @file 075_Triangle_Number_Pattern_3.c
 * @author Vinayak Mali
 * @brief Print the triangle pattern 
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
        for(j = 0; j < 2 * (num - i) - 1; ++j)
            printf(" ");

        for(j = 0; j < 2 * i + 1; ++j)
            if(j == 0 || j == 2 * i || i == num - 1)
                printf("%d ", j + 1);
            else
                printf("  ");

        printf("\n");
    }

    return (EXIT_SUCCESS);
}