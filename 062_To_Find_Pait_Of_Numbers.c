/**
 * @file 062_To_Find_Pait_Of_Numbers.c
 * @author Vinayak mali 
 * @brief To find the pair of numbers in given array
 * @version 0.1
 * @date 2023-11-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[] = {1, 1, 3, 1, 2, 1, 3, 3, 3, 3};
    int i, j, k;
    int m = 10;
    int count = 0;

    for(i = 0; i < m; ++i)
    {
        for(j = i + 1; j < m; ++j)
        {
            if(arr[i] == arr[j])
            {
                for(k = j + 1; k < m; ++k)
                    arr[k - 1] = arr[k];
                
                m = m - 1;
            
                for(k = i + 1; k < m; ++k)
                    arr[k - 1] = arr[k];
                
                m = m - 1;
                count++;
                i--;
                break;
            }
        }
    }

    printf("Number of pairs : %d\n", count);

    return (EXIT_SUCCESS);
}