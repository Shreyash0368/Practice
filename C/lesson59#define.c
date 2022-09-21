#include <stdio.h>
#include<stdlib.h>
#define PI 3.14
#define AREA(x) x*x

int main2(int argc, char const *argv[])
{
    float a;
    
    printf("value of PI %f\n", PI);
    printf("enter the radius\n");
    scanf("%f", &a);

    printf("the area of circle is %f\n", PI * AREA(a));

    
    return 0;
}
