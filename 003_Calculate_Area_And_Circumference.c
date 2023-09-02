/**
 * @file 003_Calculate_Area_And_Circumference.c
 * @author Vianyak Mali
 * @brief To canculate the area and circumference of a circle 
 * @version 0.1
 * @date 2023-09-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void enter_choice(void);
void calculate_area_and_circumference(void);

int main(void)
{
    enter_choice();

    return (0);
}

void enter_choice(void)
{
    int i = 1;
    int choice = 0;
    int count_choice = 0;
    
    while(i == 1)
    {
        puts("1. Find area and circumference : ");
        puts("2. Exit : \n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        if(choice == 1)
            calculate_area_and_circumference();
        else if (choice != 2)
        {
            count_choice++;
            if(count_choice == 3)
            {
                i = 2;
                puts("You entered worng choice to many times......");
            }
        }
        else 
            exit(EXIT_SUCCESS);
    }
}

void calculate_area_and_circumference(void)
{
    float radius;
    float area;
    float circumference;

    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);

    area = 2 * radius * 22 / 7;
    circumference = radius * radius * 22 / 7;

    puts("\n");

    printf("Area of circle whos radius is %.3f : %.3f\n", radius, area);
    printf("Circumference of circle whos radius is %.3f : %.3f\n", radius, circumference);

    puts("-------------------------------------------------------------------");
}