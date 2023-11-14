/**
 * @file 065_Print_Triangle_Right_Half_Pyramid.c
 * @author Vinayak Mali
 * @brief To print the triangle right half pyramid
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int i, j;

    printf("Enter the number of rows : ");
    scanf("%d", &num);

    for(i = 0; i < num; ++i)
    {
        for(j = 0; j <= i; ++j)
        {
            printf("*");
        }

        printf("\n");
    }

    return (EXIT_SUCCESS);
}