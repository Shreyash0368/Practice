#include <stdio.h>
// different ways of intializing and printing a pointer


int main(int argc, char const *argv[])
{
    int a ;
    int *pr = &a ;
    int *pr2;

    printf("enter the value of a\n");
    scanf("%d" , &a);

    printf("the address of a is %p\n" , &a);
    printf("the address of a is %p\n" , pr);
    printf("the value of a %d\n" , *pr);
    printf("the value of a is %d\n" , a);
    printf("the address of garbage value is %p\n" , pr2);
    printf("the value of pr2 %d\n" , *pr2);
    
    return 0;
}
