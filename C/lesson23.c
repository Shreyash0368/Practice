#include <stdio.h>

int main()
{
    int matrice[6];

    for (int i = 0; i < 7; i++)
    {
        printf("enter the value of %d element of matrice\n" , i+1);
        scanf("%d" , &matrice[i]);
    }
    
    return 0;
}


