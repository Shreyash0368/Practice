#include <stdio.h>
#include <string.h>

/* this is a program to remove the the tags from the given string
*/

void parser(char *string)
{
    //we use in to check wether we are inside the tags
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    //program to remove white spaces in begining
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    //program to remove white spaces after the word
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main(int argc, char const *argv[])
{
    char string[] = "<h1> agshd   jfjhjhk     </h1>";
    printf("the string before parsering is ~~%s~~\n", string);
    parser(string);
    printf("the string after parsering is ~~%s~~\n", string);

    return 0;
}
