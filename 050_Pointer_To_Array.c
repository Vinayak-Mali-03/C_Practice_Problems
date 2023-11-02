/**
 * @file 050_Pointer_To_Array.c
 * @author Vinayak Mali
 * @brief To demonstrate the pointer to array
 * @version 0.1
 * @date 2023-11-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = NULL;
    int(*z)[5] = NULL;
    int i;

    p = arr; /* Pointer to array element type */
    z = &arr; /* Pointer to array type */

    puts("Using pointer to array element type");
    for(i = 0; i < 5; ++i)
    {
        printf("p[%d] = %d\n", i, p[i]);
    }

    puts("Using pointer to array type");
    for(i = 0; i < 5; ++i)
    {
        printf("z[%d] : %d\n", i, (*z)[i]);
    }

    return (EXIT_SUCCESS);
}