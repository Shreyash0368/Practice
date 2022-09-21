#include <stdio.h>
#include <stdlib.h>
//this program is to use dynamic memory using malloc calloc realloc and free



int main(int argc, char const *argv[])
{
    // using malloc
    int *ptr;
    int n;
    printf("enter the size of array u want\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n* sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("entr the number at position %d\n",i);
        scanf("%d",&ptr[i]);
    }
    printf("-----printing the values-----\n");
    for (int i = 0; i < n; i++)
    {
        printf("the value and address at position %d is %d and %p\n",i,ptr[i],&ptr[i]);
    }
    printf("#################\n");
    free(ptr);
    //using calloc
    printf("enter the size of new array(calloc) u want\n");
    scanf("%d",&n);
    ptr = (int *)calloc(n ,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("entr the number at position %d\n",i);
        scanf("%d",&ptr[i]);
    }
    printf("-----printing the values-----\n");
    for (int i = 0; i < n; i++)
    {
        printf("the value and address at position %d is %d and %p\n",i,ptr[i],&ptr[i]);
    }
    printf("#################\n");
    // using realloc
    printf("enter the size of new array(realloc) u want \n");
    scanf("%d",&n);
    ptr = (int *)realloc(ptr, n*sizeof(int));
     for (int i = 0; i < n; i++)
    {
        printf("entr the number at position %d\n",i);
        scanf("%d",&ptr[i]);
    }
    printf("-----printing the values-----\n");
    for (int i = 0; i < n; i++)
    {
        printf("the value and address at position %d is %d and %p\n",i,ptr[i],&ptr[i]);
    }
    printf("#################\n");
    
    free(ptr);    

    
    return 0;
}
