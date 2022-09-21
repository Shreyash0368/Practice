#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("enter the number\n");
    scanf("%d", &a);

    if ((a % 5) == 0 && (a % 7) == 0)
    {
        printf("the number is divisible by 5 and 7\n");
    }
    else
    {
        printf("not\n");
    }
    
    
    
    return 0;
}
