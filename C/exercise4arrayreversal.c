#include <stdio.h>

// make a program to reverse the elements of an array 

void printarray(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("the value at position %d is %d\n",i,arr[i]);
    }
    
}
void arrreversal( int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
    
}
int main(int argc, char const *argv[])
{
    int array[] = {1,2,3,4,5,6,7};
    
    printf("the values of array before reversal\n");
    printarray(array);
    printf("the values of array after reversal\n");
    arrreversal(array);
    printarray(array);

    return 0;
}
