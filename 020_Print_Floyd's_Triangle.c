/**
 * @file 020_Print_Floyd's_Triangle.c
 * @author Vinayak Mali
 * @brief To print the floyd's triangle
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, r, val, j;
    r = 1;
    val = 1;

    printf("Enter the number of rows in the triangle : ");
    scanf("%d", &n);

    while(r <= n)
    {
        for(j = 1; j <= r; j++)
            printf("%d ", val++);

        printf("\n");
        r++;
    }

    return (EXIT_SUCCESS);
}