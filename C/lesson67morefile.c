#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char c;
    FILE *ptr = NULL;
    ptr = fopen("lesson64.txt", "a+");

    for (int i = 0; i < 5; i++)
    {
        c = fgetc(ptr);
        printf("the letter read in %d iteration is %c\n", i + 1, c);
    }
    // fclose(ptr);
    // every time we run fgetc the command reads the next characther in the file

    // ptr = fopen("lesson64.txt", "a+");
    char string[64];
    
    fgets(string, 20, ptr);
    printf("the string read by the command is: %s\n", string);

    fputc('t', ptr);

    fclose(ptr);
    return 0;
}
