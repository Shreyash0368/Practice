#include <stdio.h>
// initializing a string  and basic commands

int main(int argc, char const *argv[])
{
    char name[35];
    printf("enter a name\n");
    //gets is like scanf for strings 
    gets(name);
    printf("printing the name using printf %s\n", name);
    printf("printing the name using puts: ");
    //puts is printf for string
    puts(name);
    return 0;
}
