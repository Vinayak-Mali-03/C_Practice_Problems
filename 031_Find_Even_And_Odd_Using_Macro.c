/**
 * @file 031_Find_Even_And_Odd_Using_Macro.c
 * @author Vinayak Mali
 * @brief To find teh even and odd using macro
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define EVENODD(a) ((a) % 2 == 0 ? "even" : "odd")

int main(void)
{
    int num;

    printf("Enter a number to be checked : ");
    scanf("%d", &num);

    printf("%d is an %s number", num, EVENODD(num));

    exit(EXIT_SUCCESS);
}