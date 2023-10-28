/**
 * @file 045_Fibonacci_Series_Using_Recursion_And_Static_Variable.c
 * @author Vinayak Mali
 * @brief To display the fibonacci series using recursion and static variable
 * @version 0.1
 * @date 2023-10-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void fib(int num);

int main(void)
{
    int terms;

    printf("Enter the number of terms that you want to print : ");
    scanf("%d", &terms);

    printf("%d terms of fibonacci series are : \n", terms);
    fib(terms);

    exit(EXIT_SUCCESS);
}

void fib(int num)
{
    static int a = 0;
    static int b = 1;
    static int i = 0;
    static int c;

    if(i == 0)
    {
        printf("%d", a);
        i++;
    }

    if(i == 1)
    {
        printf("%d", b);
        i++;
    }

    if(i < num)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d", c);
        i++;
        fib(num);
    }
}

