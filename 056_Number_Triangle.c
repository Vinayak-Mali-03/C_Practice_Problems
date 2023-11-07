/**
 * @file 056_Number_Triangle.c
 * @author Vinayak Mali
 * @brief To print the number triangle
 * @version 0.1
 * @date 2023-11-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k, l, n;

    printf("Enter the rows : ");
    scanf("%d", &n);

    for(i = 1; i < n; ++i)
    {
        for(j = 1; j <= n - i; ++j)
        {
            printf(" ");
        }

        for(k = 1; k <= i; ++k)
        {
            printf("%d", k);
        }

        for(l = i - 1; l >= 1; --l)
        {
            printf("%d", l);
        }

        printf("\n");
    }

    return (EXIT_SUCCESS);
}