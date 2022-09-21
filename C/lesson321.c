#include <stdio.h>
// passing a value from the arraay into a function directly

void func1(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("the value at %d positon is %d\n", i + 1, arr[i]);
    }
    arr[0] = 15;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("the value at first position is %d\n", arr[0]);
    func1(arr);
    printf("the value at first position is %d\n", arr[0]);

    return 0;
}
