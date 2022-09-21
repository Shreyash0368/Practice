#include <stdio.h>

//without arguments with return

int takenumber()
{
    int i;
    printf("enter a number\n");
    scanf("%d" , &i );
    return i;
}

int main()
{
    int c;
    c = takenumber();
    
    printf("the number entered is %d" , c);
    return 0;
}

