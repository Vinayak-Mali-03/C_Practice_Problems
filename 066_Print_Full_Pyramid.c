/**
 * @file 066_Print_Full_Pyramid.c
 * @author Vinayak Mali
 * @brief To print tht full pyramid
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
    int num, i, j;

    printf("Enter the number of rows : ");
    scanf("%d", &num);

    for(i = num; i > 0; --i)
    {
        for(j = 0; j < i; ++j)
            printf(" ");

        for(j = 0; j <= num - i; ++j)
            printf("* ");

        printf("\n");
    }

    return (EXIT_SUCCESS);
}