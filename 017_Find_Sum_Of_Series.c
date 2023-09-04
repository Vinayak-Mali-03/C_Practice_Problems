/**
 * @file 017_Find_Sum_Of_Series.c
 * @author Vinayak Mali
 * @brief To find the sum of series up to 'n' terms
 * @version 0.1
 * @date 2023-09-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief Find the sum of series 1 + ( 1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + 4)......n terms
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, i, j, sum;

    i = 1;
    sum = 0;

    printf("Enter the number of terms : ");
    scanf("%d", &num);

    while(i <= num)
    {
        j = 1;

        printf("(");

        while(j <= i)
        {
            printf("%d", j);
            sum = sum + j;
            j++;

            if(j <= i)
                printf(" + ");
            else    
                printf(")");
        }

        if(i < num)
            printf(" + ");
        i++;
    }

    printf(" = %d\n", sum);

    return (EXIT_SUCCESS);
}