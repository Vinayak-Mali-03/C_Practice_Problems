/**
 * @file 008_Find_Mean_Variance_And_Standard_Deviation.c
 * @author Vinayak Mali
 * @brief To find arithmetic mean, variance and stadard deviation of n elements
 * @version 0.1
 * @date 2023-09-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int num, i;
    float sum, mean, var, sd;
    float* elements = NULL;

    sum = 0.0;

    printf("Enter number of elements : ");
    scanf("%d", &num);

    elements = (float*)malloc(sizeof(float) * num);
    if(NULL == elements)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < num; i++)
    {
        printf("Enter element at index %d : ", i);
        scanf("%f", &elements[i]);
    }

    for(i = 0; i < num; i++)
        sum = sum + elements[i];

    mean = sum / num;

    sum = 0.0;
    for(i = 0; i < num; i++)
        sum = sum + (elements[i] - mean) * (elements[i] - mean);
    
    var = sum / num;

    sd = sqrt(var);

    printf("Arithmetic mean is : %f\n", mean);
    printf("Variance is : %f\n", var);
    printf("Standard deviation is : %f\n", sd);

    free(elements);
    elements = NULL;

    return (EXIT_SUCCESS);
}