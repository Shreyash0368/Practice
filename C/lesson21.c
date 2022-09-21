#include <stdio.h>
// recursive functions (factorial function)
int factorial(int i)
{
    if (i == 0 || i == 1)
    {
        return 1;
    }
    else
    {
        return (i * factorial(i - 1));
    }
    
}

int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number for factorial\n");
    scanf("%d" , &num);

    printf("the factorial of %d is %d" , num , factorial(num));
    return 0;
}
