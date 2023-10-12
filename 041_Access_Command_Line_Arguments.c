/**
 * @file 041_Access_Command_Line_Arguments.c
 * @author Vinayak Mali
 * @brief To access the command line arguments
 * @version 0.1
 * @date 2023-10-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;

    for(i = 0; i < argc; ++i)
    {
        printf("argv[%d] : %s\n", i, argv[i]);
    }

    exit(EXIT_SUCCESS);
}