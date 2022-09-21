#include <stdio.h>
#include "lesson59#define.c"


int main(int argc, char const *argv[])
{
    printf("%f\n", PI);
    printf("the area of circle of radius 10 %f\n", PI*AREA(10));
    printf("here we can run code from lesson59#define without declaring any of the variables or function\n");
    
    return 0;
}
