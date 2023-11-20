/**
 * @file 071_Hourglass_Pattern.c
 * @author Vinayak Mali
 * @brief To print the hourglass pattern 
 * @version 0.1
 * @date 2023-11-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, i, j;
    int tmp;

    printf("Enter the number of rows : ");
    scanf("%d", &num);

    for(i = 0; i < 2 * num - 1; ++i)
    {
        if(i < num)
            tmp = 2 * i + 1;
        else    
            tmp = 2 * (2 * num - i) - 3;

        for(j = 0; j < tmp; ++j)
            printf(" ");
        
        for(j = 0; j < 2 * num - tmp; ++j)
            printf("* ");

        printf("\n");
    }

    return (EXIT_SUCCESS);
}