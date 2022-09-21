#include <stdio.h>

int main(int argc, char const *argv[])
{
    int s,a;
    a = 0;
    printf("enter the number for sum\n");
    scanf("%d", &s);
    for (int i = 0; i < s - 1; i++)
    {
        a = a + (s - (i + 1));
    }
    printf("the sum of numbers upto %d is %d\n", s, a);
    
    
    return 0;
}
