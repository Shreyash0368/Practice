#include <stdio.h>

int main(int argc, char const *argv[])
{
    char chr;

   for (int i = 0; i < 5; i++)
   {
    printf("enter the character\n");
    scanf("%c", &chr);

    if ((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z'))   
    {
        printf("the charecter is an alphabet\n");
    }
    else
    {
        printf("no\n");
    }
    getchar();
   }
   
   
    
    

    return 0;
}
