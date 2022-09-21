#include <stdio.h>
// declaring an array using pointers

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d position is %d\n", i , *(ptr + i));
    }
    *(ptr + 1) = 21;
}

int main(int argc, char const *argv[])
{
    int arry[4]= {1,2,3,4};
    func2(arry);
    printf("the value of second position after changing is %d\n" , arry[1]);
    

    return 0;
}
