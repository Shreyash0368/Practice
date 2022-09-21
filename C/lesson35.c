#include <stdio.h>
#include <string.h>

/* different commands for a string using string.h which includes the following
*/
int main(int argc, char const *argv[])
{
    char name1[20] , name2[20] , name3[20] ;
    printf("enter the name of first person\n");
    gets(name1);
    printf("enter the sirname of person\n");
    gets(name2);
    //strlen which tells the length of a string 
    printf("the length of first name is %d\n" , strlen(name1));
    printf("the length of sirname name is %d\n" , strlen(name2));
    printf("the name in third array before copying is %s\n" , name3);
    //str cpy which copies data from the right array into the left 
    strcpy(name3,name1);
    //strcat which joins two arrays together  
    printf("the two names together are %s\n" , strcat(name1,name2));
    printf("the name in third array after copying is %s\n",name3);
    //strcmp which compares the ASCII difference between the first diff charecter between two arrays
    printf("the ASCII difference between the two is %d\n" , strcmp(name1,name2));
    //strrev which reverses an array
    printf("the reverse of name is %s\n" , strrev(name1));    
    return 0;
}
