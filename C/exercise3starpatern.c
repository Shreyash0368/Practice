#include <stdio.h>
// create a program to print a star pattern 

void star(int rows)
{
     for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%c" , '*');                
            }      
            printf("\n");      
        }        
}

void revstar(int rows)
{
    for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < rows - i; j++)
            {
                printf("%c" , '*');                
            }
            printf("\n");            
        }          

}



int main(int argc, char const *argv[])
{
    int n , rows;
    printf("choose te type of patern\n1.start pattern\n2.reverse star pattern\n");
    scanf("%d", &n);
    printf("how many rows do you want?\n");
    scanf("%d" , &rows);
    if (n == 1)
    {
        star(rows);       
    }
    else if (n == 2)
    { 
        revstar(rows);           
    }
    else
    {
        printf("------------ERROR------------");
    }
    
    return 0;
}
