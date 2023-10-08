/**
 * @file 035_To_Check_Armstrong_Number_Usign_Macro.c
 * @author Vinayak Mali
 * @brief To check the given number is armstrong number or not
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief The number contains three digits
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define POW1(x) ((x) * (x) * (x))
#define ARM(n) ((n == POW1(n % 10) + POW1(n / 10 % 10) + POW1(n / 100 % 10)) ? "is" : "is not")

int main(void)
{
    int num;

    printf("Enter a three digit number : ");
    scanf("%d", &num);

    printf("%d %s an Armstrong number", num, ARM(num));

    exit(EXIT_SUCCESS);
}