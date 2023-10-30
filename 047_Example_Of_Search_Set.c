/**
 * @file 047_Example_Of_Search_Set.c
 * @author Vinayak Mali
 * @brief To demonstrate the search set
 * @version 0.1
 * @date 2023-10-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[20];

    printf("Enter you name : ");
    scanf("%[abcd]", name);

    printf("Your name is %s\n", name);

    return (EXIT_SUCCESS);
}

/**
 * @brief If a search set [abcd] is used the scanf function reads the input characters 
 *          and stops when a character except a, b, c, or d is encountered.
 *              
 * 
 */