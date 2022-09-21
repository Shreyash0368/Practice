#include <stdio.h>
// initializing a static variable

int myfunc2()
{
    int i = 0;
    i++;
    return i;
}
int myfunc()
{
    static int i = 0;
    i++;
    return i;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Value with statitc var:%d\n", myfunc());
    }
    printf("\n------------------\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Value with normal var:%d\n",myfunc2());
    }
    
    return 0;
}