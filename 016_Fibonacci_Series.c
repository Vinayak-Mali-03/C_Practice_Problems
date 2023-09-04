/**
 * @file 016_Fibonacci_Series.c
 * @author Vinayak Mali
 * @brief To print the fibonacci series
 * @version 0.1
 * @date 2023-09-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief Fibonacci series is a series in which a term is equal to the sum of the previous two terms.
 *          The first term of the series is 0 amd second term is 1.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, count, a, b, c;
    count = 2;
    a = 0;
    b = 1;

    printf("How many terms do you want to print : ");
    scanf("%d", &n);

    printf("Fibonacci series : \n");
    printf("%d %d", a, b);

    while(count < n)
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
        count++;
    }
}