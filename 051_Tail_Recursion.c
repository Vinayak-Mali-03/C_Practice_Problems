/**
 * @file 051_Tail_Recursion.c
 * @author Vinayak Mali
 * @brief To demonstrate the tail recursion 
 * @version 0.1
 * @date 2023-11-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */


/**
 * @brief In a tail recursive function, there are no pending operations to be performed on return from a recursive call.
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int fact_tail(int, int);

int main(void)
{
    int no, factorial;
    
    printf("Enter the number : ");
    scanf("%d", &no);

    factorial = fact_tail(no, 1);
    printf("Resultant factorial is %d\n", factorial);

    return (EXIT_SUCCESS);
}

int fact_tail(int no, int result)
{
    if(no == 1)
        return result;
    else 
        return fact_tail(no - 1, no * result);
}