/**
 * @file 019_Reverse_Add_And_Check_For_Palindrome.c
 * @author Vinayak Mali
 * @brief Reverse, add, and check for palindrome
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief Take a number , reverse its digits and add the reverse to the original.
 *          If the sum is not a palindrome, repeat the procedure with the sum until the result
 *          is a palindrome.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, temp, reverse, add, digit;
    reverse = 0;
    add = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    while(1)
    {
        temp = num;
        reverse = 0;

        while(temp != 0)
        {
            digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
        }

        if(num == reverse)
        {
            printf("Palindrome is %d and no. of addition is %d", reverse, add);
            break;
        }
        else
        {
            printf("  %d\n", num);
            printf("+ %d\n", reverse);
            
            num = num + reverse;

            printf("------------\n");
            printf("  %d\n", num);
            printf("------------\n");
            add++;
        }
    }

    return (EXIT_SUCCESS);
}