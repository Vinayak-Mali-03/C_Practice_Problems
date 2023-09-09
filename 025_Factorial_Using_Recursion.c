/**
 * @file 025_Factorial_Using_Recursion.c
 * @author Vinayak Mali
 * @brief To find the factorial using recursion
 * @version 0.1
 * @date 2023-09-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int fact(int);

int main(void)
{
    int no, factorial;

    printf("Enter the number : ");
    scanf("%d", &no);

    factorial = fact(no);

    printf("Factorial of %d is %d\n", no, factorial);

    return (EXIT_SUCCESS);
}

int fact(int no)
{
    if(no == 1)
        return (1);
    else 
        return (no * fact(no - 1));
}