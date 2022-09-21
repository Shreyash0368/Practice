#include <stdio.h>
// this is a call by value function

int takenumber(int n)
{
    printf("enter a number\n");
    scanf("%d" , &n);
    printf("the number enterd is %d\n" , n);    
}
int main(int argc, char const *argv[])
{
    int a,b;    
    b = takenumber(a);

    return 0;
}
