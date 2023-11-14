/**
 * @file 067_Print_Inverted_Right_Half_Pyramid.c
 * @author Vinayak Mali
 * @brief To print the inverted right half pyramid
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
        for(j = num; j > i; --j)
            printf("* ");
        
        printf("\n");
    }

    return (EXIT_SUCCESS);
}