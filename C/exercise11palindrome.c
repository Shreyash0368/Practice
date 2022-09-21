#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 0, reverse = 0, num2;
    printf("Enter a number:  \n");
    scanf("%d", &num);
    num2 = num;

    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }
    printf("the reversed number is %d\n", reverse);

    if (num2 == reverse)
    {
        printf("the numbe is a palindrome\n");
    }
    else
    {
        printf("the number is not a palindrome\n");
    }
    float w = 123.45;
    printf("%0.2f\n", w);

    return 0;
}
