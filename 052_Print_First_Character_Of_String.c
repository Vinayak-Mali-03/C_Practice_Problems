/**
 * @file 052_Print_First_Character_Of_String.c
 * @author Vinayak Mali
 * @brief TO demonstrate how to print first character of a string
 * @version 0.1
 * @date 2023-11-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("The first character of string literal \"Vinayak\" is %c\n", *"Vinayak");
    printf("The first character of string literal \"Vinayak\" is %c\n", *("Vinayak" + 1));

    return (EXIT_SUCCESS);
}