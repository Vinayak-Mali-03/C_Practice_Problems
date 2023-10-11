/**
 * @file 039_File_And_Line_Macro.c
 * @author Vinayak Mali
 * @brief To demonstrate the __LINE__ and __FILE__ macro
 * @version 0.1
 * @date 2023-10-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("The name of current file is %s\n", __FILE__);

    printf("Current line number is %d\n", __LINE__);

    exit(EXIT_SUCCESS);
}