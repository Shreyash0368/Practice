#include <stdio.h>
#include <stdlib.h>

void printarray(int n, int h, int arr[n][h])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < h; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void getnumber(int n, int h, int arr[n][h])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < h; j++)
        {
            printf("enter the number at position %d, %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

int main()
{
    int n, h, a, b;
    printf("enter the number of rows in the first array: ");
    scanf("%d", &n);
    printf("enter the number of coloumns in the first array: ");
    scanf("%d", &h);
    int arr[n][h];
    getnumber(n, h, arr);
    printarray(n, h, arr);

    printf("enter the number of rows in the second array array: ");
    scanf("%d", &a);
    printf("enter the number of coloumns in the second: ");
    scanf("%d", &b);
    int arr2[a][b];
    getnumber(a, b, arr2);
    printarray(a, b, arr2);
    printf("the resulting matrix after multiplication is\n");
    int sum = 0, result[n][b];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < h; k++)
            {
                sum += arr[i][k] * arr2[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    printarray(n,b, result);        

    return 0;
}