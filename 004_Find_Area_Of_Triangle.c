/**
 * @file 004_Find_Area_Of_Triangle.c
 * @author Vinayak Mali
 * @brief To find the area of triangle
 * @version 0.1
 * @date 2023-09-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float a, b, c, s, area;

    printf("Enter sides of triangle : ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of triangle whos sides %.2f, %.2f and %.2f is : %6.2f sq.units", a, b, c, area);

    return (EXIT_SUCCESS);
}