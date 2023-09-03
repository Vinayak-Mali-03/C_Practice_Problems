/**
 * @file 009_Quadratic_Equation.c
 * @author Vinayak Mali
 * @brief To find the root of quadratic equaion
 * @version 0.1
 * @date 2023-09-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int a, b, c, d;
    float r1, r2;
    int num;

    printf("Enter the coefficients of a : ");
    scanf("%d", &a);

    printf("Enter the coefficients of b : ");
    scanf("%d", &b);

    printf("Enter the coefficients of c : ");
    scanf("%d", &c);

    d = b * b - 4 * a * c;
    if(d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and unequal\n");
        printf("Roots are %f and %f\n", r1, r2);
    }
    else if(0 == d)
    {
        r1 = -b / (2 * a);
        printf("Roots are real and equal\n");
        printf("Roots are %f and %f\n", r1, r1);
    }
    else    
        printf("No real roots, roots are imaginary");

    exit(EXIT_SUCCESS);
}