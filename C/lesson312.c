#include <stdio.h>
// this is a call by reference function

void swap(int *a ,int *b)
{
    int temp;
    temp = *a;
    *a = *b ;
    *b = temp;
}


int main(int argc, char const *argv[])
{
    int x, y;
    printf("enter the value of a    ");
    scanf("%d", &x);

    printf("enter the value of b    ");
    scanf("%d", &y); 

    swap(&x, &y);
    printf("after swapping the value of a is %d and value of b is %d" , x , y);
    return 0;
}
