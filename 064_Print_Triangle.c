/**
 * @file 064_Print_Triangle.c
 * @author Vinayak Mali
 * @brief To print the triangle patttern
 * @version 0.1
 * @date 2023-11-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, j, k;
    int num;

    printf("Enter the number of rows : ");
    scanf("%d", &num);

    for(i = num - 1; i > -1; --i){
        for(j = 0; j < i; ++j){
            printf(" ");
        }
        for(j = 1; j <= num - i; ++j)
            printf("#");
        printf("\n");
    }
}