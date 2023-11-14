/**
 * @file 068_Inverted_Left_Half_Pyramid.c
 * @author Vinayak Mali
 * @brief To print the inverted left half pyramid
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

    for(i = 0; i < num; ++i)
    {
        for(j = 0; j < 2 * i; ++j)
            printf(" ");

        for(j = 0; j < num - i; ++j)
            printf("* ");

        printf("\n");
    }

    return (EXIT_SUCCESS);
}