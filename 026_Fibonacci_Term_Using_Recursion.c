/**
 * @file 026_Fibonacci_Term_Using_Recursion.c
 * @author Vinayak Mali
 * @brief To find the fibonacci term using recursion
 * @version 0.1
 * @date 2023-09-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int fib_term(int);

int main(void)
{
    int n, term;

    printf("Enter the no : ");
    scanf("%d", &n);

    term = fib_term(n);

    printf("Fibonacci term is %d", term);

    return (EXIT_SUCCESS);
}

int fib_term(int n)
{
    if(n == 1)
        return (0);
    if(n == 2)
        return (1);
    return fib_term(n - 1) + fib_term(n - 2);
}