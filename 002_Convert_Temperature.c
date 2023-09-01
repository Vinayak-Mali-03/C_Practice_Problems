/**
 * @file 002_Convert_Temperature.c
 * @author Vinayak Mali
 * @brief To Convert the temperature 
 * @version 0.1
 * @date 2023-09-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void convert(void);
void fahrenheit_to_celsius(void);
void celsius_to_fahrenheit(void);

int main(void)
{
    convert();

    return (EXIT_SUCCESS);
}

void convert(void)
{
    int choice;
    int count_choice = 0;

    while(1)
    {
        puts("1. Convert Fahrenheit to Celsius : ");
        puts("2. Convert Celsius to Fahrenheit : ");
        puts("3. Exit :\n");

        printf("Enter the choice : ");
        scanf("%d", &choice);

        if(1 == choice)
            fahrenheit_to_celsius();
        else if(2 == choice)
            celsius_to_fahrenheit();
        else if(3 != choice)
        {
            count_choice++;
            if(3 == count_choice)
            {
                puts("You entered wrong choice to many times.......");
                exit(EXIT_FAILURE);
            }
            continue;
        }
        else
            exit(EXIT_SUCCESS);
        
        puts("-----------------------------------------------------------------------\n");
    }
}

void fahrenheit_to_celsius(void)
{
    double temp_f;
    double temp_c;

    printf("Enter temperature in Faharenhit : ");
    scanf("%lf", &temp_f);

    temp_c = ((temp_f - 32) * 5) / 9;

    printf("Tempeerature in Fahrenheit : %.3lf\n", temp_f);
    printf("Tempeerature in Celsius : %.3lf\n", temp_c);
}

void celsius_to_fahrenheit(void)
{
    double temp_f;
    double temp_c;

    printf("Enter temperature in Celsius : ");
    scanf("%lf", &temp_c);

    temp_f = ((temp_c * 9) / 5) + 32;

    printf("Tempeerature in Celsius : %.3lf\n", temp_c);
    printf("Tempeerature in Fahrenheit : %.3lf\n", temp_f);
}

