#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    int num1, num2;
    char * operation;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);
    printf("the no. of arguments is: %d\n", argc);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("%d\n", num1 -  num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("%d\n", num1/num2);
    } 
    
    else
    {
        printf("invalid statment\n");
    }
    
        
    return 0;
}
