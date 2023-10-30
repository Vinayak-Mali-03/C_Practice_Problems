/**
 * @file 048_Search_Set_With_Caret.c
 * @author Vinayak Mali
 * @brief To demonstrate the use of search set with caret
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
    char str[20];

    printf("Enter string : ");
    scanf("%[^abcd]", str);

    printf("You entered string is : %s\n", str);

    return (EXIT_SUCCESS);
}

/**
 * @brief If the first character in the bracket is a caret (i.e ^) the search set is inverted to include all the characters (even white space)
 *          except those between the baractes.
 *          
 * 
 */