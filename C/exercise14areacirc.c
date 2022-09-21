#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float radius(float x1, float y1, float x2, float y2){

    float a, b;
    a = pow((x2 - x1), 2);
    b = pow((y2 - y1), 2);

    return sqrt(a + b);
}
void areacircle(float(*fptr)(float, float, float, float)){
    float x1, x2, y1, y2;
    printf("Enter the value of x1 and y1\n");
    scanf("%f" "%f", &x1, &y1);
    printf("Enter the value of x2 and y2\n");
    scanf("%f" "%f", &x2, &y2);
    float radius = (*fptr)(x1, y1, x2, y2);
    float area = 3.14 * pow(radius, 2);
    printf("The area of the circle is: %f\n", area);
}

int main(int argc, char const *argv[])
{
    float(*ptr)(float ,float ,float ,float );
    ptr = radius;
    areacircle(ptr);
   
    return 0;
}
