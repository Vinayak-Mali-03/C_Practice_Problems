/**
 * @file 040_Demonstrate_Comma_Operator.c
 * @author Vinayak Mali
 * @brief To demonstrate the comma operator
 * @version 0.1
 * @date 2023-10-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief The precendence of assignment operator is greater than comma operator and its associativity is left to right
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;

    a = 1, 2, 3, 4, 5;
    b = (1, 2, 3, 4, 5);

    printf("Resultant values of a and b are : \n");
    printf("%d %d", a, b);

    exit(EXIT_SUCCESS);
}