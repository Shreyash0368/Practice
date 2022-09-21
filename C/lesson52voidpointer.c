#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 34;
    float b = 9.12;
    void *ptr;

    ptr = &a;
    // printf("the value of a is %d\n",*ptr);
    // when we have to use a void pointer to derefrence the address and the value at that address
    // we have to first typecast it into the required data type 
    //if we use the above method it will give error
    printf("the value of a is %d\n",*((int *)ptr));
    ptr = &b;
    printf("the value of b is %0.4f\n",*((float *)ptr));
    return 0;
}
