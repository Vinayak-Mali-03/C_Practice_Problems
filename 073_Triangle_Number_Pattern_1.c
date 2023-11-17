/**
 * @file 073_Triangle_Number_Pattern_1.c
 * @author Vinayak Mali
 * @brief Triangle Number pattern
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
        for(j = 0; j <= num - i; ++j)
            printf("%d", i);
        
        printf("\n");
    }

    return (EXIT_SUCCESS);
}