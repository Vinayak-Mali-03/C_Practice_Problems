/**
 * @file 012_Palindrome_Number.c
 * @author Vinayak Mali
 * @brief To check a given number is a palindrome or not
 * @version 0.1
 * @date 2023-09-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief A number is a palindrome if the reverse of the number is equal to the number itself, e.g. 121, 333.
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, temp, digit, reverse;
    reverse = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    temp = num;
    
    while(num != 0)
    {
        digit = num % 10;
        num = num / 10;
        reverse = reverse * 10 + digit;
    }

    if(temp == reverse)
        printf("%d is a palindrome number\n", temp);
    else    
        printf("%d is not a palindrome number\n", num);

    return (EXIT_SUCCESS);
}