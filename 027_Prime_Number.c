/**
 * @file 027_Prime_Number.c
 * @author Vinayak Mali
 * @brief To find the given number is prime or not
 * @version 0.1
 * @date 2023-09-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int prime(int);

int main(void)
{
    int num;
    printf("Enter the number to be checked : ");
    scanf("%d", &num);

    if(prime(num) == 0)
        printf("%d is not prime\n", num);
    else
        printf("%d is prime number\n", num);

    return (EXIT_SUCCESS);
}

int prime(int no)
{
    int i;

    for(i = 2; i < no; i++)
        if(no % i == 0)
            return (0);
    return (1);
}