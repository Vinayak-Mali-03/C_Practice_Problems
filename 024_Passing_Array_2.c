/**
 * @file 024_Passing_Array_2.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-09-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void largest_ele(int[][10], int*, int*);

int main(void)
{
    int arr[10][10];
    int rows, cols, rc, cc;

    printf("Enter the number of rows in array less than 10 : ");
    scanf("%d", &rows);
    printf("Enter the number of cols in array less than 10 : ");
    scanf("%d", &cols);

    for(rc = 0; rc < rows; rc++)
        for(cc = 0; cc < cols; cc++)
        {
            printf("Enter the data at index (%d, %d) : ", rc, cc);
            scanf("%d", &arr[rc][cc]);
        }

    largest_ele(arr, &rows, &cols);

    printf("Largest element is %d\n", arr[rows][cols]);
    printf("Located in row no. %d\n", rows);
    printf("Located in column no. %d\n", cols);

    return (EXIT_SUCCESS);
}

void largest_ele(int arr[][10], int* rows, int* cols)
{
    int row = 0, col = 0, rc = 0, cc = 0, max = arr[0][0];

    for(rc = 0; rc <*rows; rc++)
        for(cc = 0; cc < *cols; cc++)
            if(arr[rc][cc] > max)
            {
                max = arr[rc][cc];
                row = rc, col = cc;
            }

    *rows = row;
    *cols = col;
}