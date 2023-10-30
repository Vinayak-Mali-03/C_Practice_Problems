/**
 * @file 19_Reading_A_Line_Of_Text_Using_Inverted_Search_Set.c
 * @author Vinayak Mali
 * @brief  Reading a line of text using inverted search set
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
    char line[50];

    printf("Enter a line of text : \n");
    scanf("%[^\n]", line);

    printf("The text you entered is : \n%s", line);

    return (EXIT_SUCCESS);
}