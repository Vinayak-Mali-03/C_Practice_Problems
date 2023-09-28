/**
 * @file 028_Printf_Function_Without_Semocolon.c
 * @author Vinayak Mali
 * @brief To demonstrate how to printf function without semicolon
 * @version 0.1
 * @date 2023-09-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    if(printf("Hello, World..!"))
        ;
    
    exit(EXIT_SUCCESS);
}