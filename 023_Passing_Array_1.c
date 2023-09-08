/**
 * @file 023_Passing_Array_1.c
 * @author Vinayak Mali
 * @brief Passing one dimentional array to a function
 * @version 0.1
 * @date 2023-09-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void find_max_min_1(int[], int);
void find_max_min_2(int*, int);

int main(void)
{
    int arr[10], num, i, sum;
    sum = 0;

    printf("Enter no of elements less than 10 : ");
    scanf("%d", &num);

    for(i = 0; i < num; i++)
    {
        printf("Enter element at index %d : ", i);
        scanf("%d", &arr[i]);
    }

    find_max_min_1(arr, num);
    find_max_min_2(arr, num);

    return (EXIT_SUCCESS);
}

void find_max_min_1(int arr[], int num)
{
    int i, max, min;
    max = min = arr[0];

    for(i = 0; i < num; i++)
        if(arr[i] > max)
            max = arr[i];
        else if(arr[i] < min)
            min = arr[i];

    printf("In find_max_min_1() : \n");
    printf("max = %d, min = %d\n", max, min);
}

void find_max_min_2(int* arr, int num)
{
    int i, max, min;
    max = min = arr[0];

    for(i = 0; i < num; i++)
        if(arr[i] > max)
            max = arr[i];
        else if(arr[i] < min)
            min = arr[i];

    printf("In find_max_min_2() : \n");
    printf("max = %d, min = %d\n", max, min);
}