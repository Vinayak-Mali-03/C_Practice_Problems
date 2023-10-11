/**
 * @file 038_Print_Date_And_Time_Using_Macro.c
 * @author Vinayak Mali
 * @brief To print date and time using __DATE__ and __TIME__ macro
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
    printf("Date is : %s\n", __DATE__);
    printf("Time is : %s\n", __TIME__);

    exit(EXIT_SUCCESS);
}