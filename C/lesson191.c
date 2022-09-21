#include <stdio.h>
//both argument and return value.

int sum( int a , int b)
{
    return a + b ;
}

int main()
{
    int a , b , c ;

    printf("enter the first value\n");
    scanf("%d" , &a);

    printf("enter the second value\n");
    scanf("%d" , &b);

    c = sum(a , b);    
    printf("their sum is %d \n" , c);

    return 0;
}


