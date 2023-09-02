/**
 * @file 006_Age_In_Seconds.c
 * @author Vinayak Mali
 * @brief To print the age in seconds
 * @version 0.1
 * @date 2023-09-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age;
    float age_in_sec;

    printf("How old are you? : ");
    scanf("%d", &age);

    age_in_sec = 3.156e7 * age;

    printf("Your age in seconds is %5.2e", age_in_sec);

    return (EXIT_SUCCESS);
}