/**
 * @file 37_Enum_Example.c
 * @author Vinayak Mali
 * @brief To demonstrate the enum example
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

enum SWITCH{off, on};

int main(void)
{
    enum SWITCH s1 = on, s2;

    s2 = s1;

    if(s1 == s2)
        printf("Both the switches are in ON state\n");
    else    
        printf("Switches are in diffent states\n");

    exit(EXIT_SUCCESS);
}