/**
 * @file 036_Self_Referential_Structure.c
 * @author Vinayak Mali
 * @brief To demonstreate the self referential structure
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node prev;
    struct node next;
};

int main(void)
{
    struct node head_node;

    /* struct node is an self referential structure 
        because struct node contain a pointers having its own type pointer.
            Structure which contain its own type pointer is called self referential structure.
    */
   
    exit(EXIT_SUCCESS);
}