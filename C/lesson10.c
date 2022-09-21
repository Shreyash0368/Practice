#include <stdio.h>
// checking if the student has passed the test

int main(int argc, char const *argv[])
{
    int s, m;

    printf("enter your marks in science\n");
    scanf("%d" , &s);

    printf("enter your marks in maths\n");
    scanf("%d" , &m);

    if (m>=33 && s>=33)
    {
        printf("you have passed in both subjects and win 45rs\n");
    }
    else if (m>=33 && s<=32)
    {
        printf("you have passed in maths and win 15rs");
    }
    else if (m<=32 && s>=33)
    {
        printf("you have passed in science and win 15rs");
    }
    else
    {
         printf("you have failed in both and win nothing");
    }
    
    return 0;
}
