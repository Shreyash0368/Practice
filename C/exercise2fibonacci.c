#include <stdio.h>
/* here we see that 
sometimes iterative aproache is better than recursive aproach */
// this is a fibonacci series
int fiborec(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fiborec(n - 1) + fiborec(n - 2);
    }
}

int fiboitr(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n -1 ; i++)
    {
        b = a + b;
        a = b - a;
        
    }
    
    return a;
}

int main(int argc, char const *argv[])
{
    int a;
    printf("enter the index to get the fibonacci series\n");
    scanf("%d", &a);

    printf("the fibonachi number at position %d through recursive method is %d\n", a, fiborec(a));
    printf("the fibonachi number at position %d through iterative method is %d\n", a, fiboitr(a));
    return 0;
}
