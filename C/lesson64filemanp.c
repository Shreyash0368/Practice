#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    char string1[64], string2[64];

    // *****reading the file*****
    ptr = fopen("lesson64filemanp.txt", "r");

    fscanf(ptr, "%s", string1);
    printf("the text in the file is %s \n", string1);
    
    fclose(ptr);

    // *****writing in the file*****
    ptr = fopen("lesson64filemanp.txt", "a");

    printf("enter a text to be input in the file\n");
    scanf("%s", &string2);
    fprintf(ptr, "%s", string2);

    fclose(ptr);

    return 0;
}
