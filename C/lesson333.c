#include <stdio.h>
// creating a multidimensional array

void func3(int arr[3][2])
{
    //this for is for switching rows
    for (int i = 0; i < 3; i++)
    {
        //this for is switching coloums
        for (int j = 0; j < 2; j++)
        {
            printf("the value at position %d,%d s %d\n ", i, j, arr[i][j]);
        }
    }
}
int main(int argc, char const *argv[])
{
    int arry[3][2] = {
        {3, 4},
        {45, 6},
        {12, 17},
    };
    func3(arry);
    return 0;
}
