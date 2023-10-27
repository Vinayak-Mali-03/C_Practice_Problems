/**
 * @file 043_Sum_Of_First_N_Natural_Numbers_Using_Recursion.c
 * @author Vinayak Mali
 * @brief Use of recursion and static variables, show the sum of first n natural numbers
 * @version 0.1
 * @date 2023-10-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int num);

int main(void){
    int num;

    printf("Enter the number of natural numbers that you want to sum up : ");
    scanf("%d", &num);

    printf("The sum of first %d natural numbers is %d\n", num, sum(num));

    return (EXIT_SUCCESS);
}

int sum(int num){
    static int i = 1;
    static int result = 0;
    result = result + i;
    i++;
    if(i <= num)
        sum(num);
    
    return result;
}

