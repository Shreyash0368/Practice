#include <stdio.h>
// printing a multiplication table of given number 

int main()
{
    int num, i ;
     printf("enter number\n");
     scanf("%d" , &num);
     printf("the table for %d is:\n\n", num);

     for ( i = 1; i < 11 ; i++)
     {
         printf("%d*%d = %d\n", num,i,num*i);
     }
     
    return 0;
}
