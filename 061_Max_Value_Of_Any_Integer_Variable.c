/**
 * @file 061_Max_Value_Of_Any_Integer_Variable.c
 * @author Vinayak Mali
 * @brief To demonstrate the max value of any integer variabl
 * @version 0.1
 * @date 2023-11-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned long long int u_lng_lng_int_var;
    unsigned int u_int_var;

    u_lng_lng_int_var = 0;
    u_int_var = 0;

    u_lng_lng_int_var = ~u_lng_lng_int_var;
    u_int_var = ~u_int_var;

    printf("Max value of u_lng_lng_int_var = %llu\n", u_lng_lng_int_var);
    printf("Max value of u_int_var = %u\n", u_int_var);

    return (EXIT_SUCCESS);
}