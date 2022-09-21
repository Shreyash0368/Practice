// Pointer and Array Arithemetic
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int  *p, age[5];
    p = age;

    for (int i = 0; i < 5; i++)
    {
        printf("enter the value of %d position of the array\n", i + 1);
        scanf("%d", p + i);
    }

    printf("-----------\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("the value entered in %d position is %d\n", i + 1, *(p + i));
    }

    printf("-----------\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("the address of %d value is %p\n", i + 1, p + i);
    }

    return 0;
}
