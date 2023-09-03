/**
 * @file 007_Maximum_And_Minimum.c
 * @author Vinayak Mali
 * @brief To find max and min in the array
 * @version 0.1
 * @date 2023-09-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, i, max, min;
    int* elements = NULL;

    printf("Enter number of elementss in the array : ");
    scanf("%d", &num);

    elements = (int*)malloc(sizeof(int) * num);
    if(NULL == elements)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < num; i++)
    {
        printf("Enter elements at index %d : ", i);
        scanf("%d", &elements[i]);
    }

    max = min = elements[0];
    
    for(i = 0; i < num; i++)
    {
        if(elements[i] > max)
            max = elements[i];
        else if(elements[i] < min)
            min = elements[i];   
    }

    printf("Maximum elements in the array is : %d\n", max);
    printf("Minimum elements in the array is : %d\n", min);

    free(elements);
    elements = NULL;

    return (EXIT_SUCCESS);
}