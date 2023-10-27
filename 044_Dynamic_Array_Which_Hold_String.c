/**
 * @file 044_Dynamic_Array_Which_Hold_String.c
 * @author Vinayak Mali
 * @brief Dynamically create an array that holds the result concatenation of the strings;
 * @version 0.1
 * @date 2023-10-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char str1[50], str2[50];
    char* resultant = 0; 
    int length1, length2;

    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);

    length1 = strlen(str1);
    length2 = strlen(str2);

    resultant = (char*)malloc(length1 + length2);
    if(resultant == 0)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    strcpy(resultant, str1);
    strcat(resultant, str2);

    printf("Concatenated string is %s", resultant);

    free(resultant);
    resultant = 0;

    return EXIT_SUCCESS;
}