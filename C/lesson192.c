#include <stdio.h>

//with arguments without return

void printstart(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        printf("%c" , '#');
    }
}

int main(int argc, char const *argv[])
{
    printstart(2);
    return 0;
}
