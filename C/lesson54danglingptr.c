#include <stdio.h>
#include <stdlib.h>

int* myfunc()
{
    int a, b, sum;
    a = 5;
    b = 6;
    sum = a + b;
    return sum;
}

int main(int argc, char const *argv[])
{
    // Case 1: Deallocating of memory
    int * ptr = (int *)malloc(6* sizeof(int));
    ptr[0] = 34;
    ptr[1] = 23;
    ptr[2] = 56;
    ptr[3] = 70;
    free(ptr);

    // Case 2: function returning local variable 
    int * dangptr = myfunc(); 
    //since sum does not exist after myfunc has been used 
    //it is a dangling

    // Case3: variable going out of scope
    int * dangptr2;
    {
        int m = 10;
        dangptr2 = &m;
    }
    // since m has gone out of scope (does not exist) the ptr is dangling ptr
    return 0;
}
