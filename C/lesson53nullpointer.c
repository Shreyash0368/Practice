#include<stdio.h> 

int main(int argc, char const *argv[])
{
    int a = 34;
    float b = 9.4356;
    int *ptr = NULL;

    printf("the address and value of a is %p and %d\n", &a, a);
    printf("the address and value of b is %p and %0.5f\n", &b, b);

    if (ptr != NULL)
    {
        printf("the address of the pointer and the value in it are %p and %f\n", ptr, *((float *)ptr));
    }
    else
    {
        printf("the pointer is a null pointer and can not be derefrenced and its address is %p\n", ptr);
    }

    return 0;
}
// when we put int *ptr = NULL the address becomes zero
// when we put the address of a in it it gives the value and address of a
// when we put address of b it gives error because pointer is of int type
//  but the address is that of a float