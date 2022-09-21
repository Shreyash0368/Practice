#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    b = 0;
    c = 0;
    printf("enter the number\n");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        if ((i % 2) == 0)
        {
            c = c + i;
            
        }
        else
        {
            b = b + i;
            
        }  
        
    }
    printf("the sum of all even number is %d\n",c);
    printf("the sum of odd numbers is %d\n",b);
      
    
    return 0;
}
