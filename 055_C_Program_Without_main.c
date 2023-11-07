/**
 * @file 055_C_Program_Without_main.c
 * @author Vinayak Mali
 * @brief To demonstrate the C program without main() function
 * @version 0.1
 * @date 2023-11-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define start main

int start()
{
    printf("Hello World...!");

    return (EXIT_SUCCESS);
}