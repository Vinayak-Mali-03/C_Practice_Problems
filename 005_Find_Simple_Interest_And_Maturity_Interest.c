/**
 * @file 004_Find_Simple_Interest_And_Maturity_Interest.c
 * @author Vinayak Mali
 * @brief To find to simple interest and maturity interest
 * @version 0.1
 * @date 2023-09-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float p, r, t, i, amt;

    printf("Enter principle, rate, time : ");
    scanf("%f %f %f", &p, &r, &t);

    i = p * r * t / 100;
    amt = p + i;

    printf("Interest is %6.2f\n", i);
    printf("Amount is %6.2f\n", amt);

    return (0);
}