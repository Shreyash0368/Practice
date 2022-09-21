#include <stdio.h>
#include <math.h>

int main()
{
   int size, flag;
   printf("Enter the size of the array\n");
   scanf("%d", &size);
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      printf("Enter the number at position %d\n", i);
      scanf("%d", &arr[i]);
   }
   
   for (int i = 0; i < size; i++)
   {
      flag = 0;
      if (arr[i] == 0 || arr[i] == 1)
      {
         flag = 1;
         
      }
      else
      {
         for (int i = 2; i < arr[i] / 2; i++)
         {
            if ((arr[i] % i) == 0)
            {
               flag = 1;
               break;
            }
         }
      }
      if (flag == 0)
      {
         printf("the number %d at position %d is prime number\n", arr[i], i);
      }
      else
      {
         arr[i] == 0;
      }
      
      
   }

   return 0;
}