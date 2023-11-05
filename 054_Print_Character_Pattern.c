/**
 * @file 054_Print_Character_Pattern.c
 * @author Vinayak Mali
 * @brief To print the character pattern
 * @version 0.1
 * @date 2023-11-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char chr = 'A';
    int i, j;
    int rows;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    for(i = 0; i <= rows; ++i)
    {
        for(j = 0; j <= i; ++j)
        {
            printf("%c", chr);
        }
        
        printf("\n");
    
        chr++;
    }

    return (EXIT_SUCCESS);
}