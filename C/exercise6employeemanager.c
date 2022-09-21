#include <stdio.h>
#include <stdlib.h>

// Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen. 
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically
// EXAMPLE:
    // Employee 1:
    // Enter no of characters in your eId
    // 45
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 2:
    // Enter no of characters in your eId
    // 4
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 3:
    // Enter no of characters in your eId
    // 9
    // Dynamically allocate the character array.
    // take input from user 

int main()
{
    char a,b;
    int charecters , *ptr;
    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d : enter the number of charecters in the ID\n",i+1);
        scanf("%d",&charecters);
        ptr = (char *)malloc((charecters + 1)*sizeof(char));
        printf("enter your employee ID\n");
        scanf("%s",ptr);
        getchar();
        // when we have multiple canf one after the other the enter we press for one 
        // scanf will also be used as an input for the next scanf so we have to use a getchar command 
        // which takes in the enter . 
        // if we remove the getchar after te scanf for entering the no of charecters in an employee id the 
        // the enter will be used as an input for the scanf for a and it will be skipped 
        printf("enter the char for a\n");
        scanf("%c",&a);
        getchar();
        printf("enter the char value of b\n");
        scanf("%c",&b);
        printf("your employee id is %s\n",ptr);
    }
    
    
    

    return 0;
}
