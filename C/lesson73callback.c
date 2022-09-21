#include <stdio.h>

int avg(int a, int b){
    
    return (a + b) / 2;
}
int giveavg(int(*fptr)(int, int)){
    
    int avg = fptr(5,7);
    printf("The average is: %d\n", avg);

}


int main(int argc, char *argv[])
{
    int(*ptr)(int, int) = avg;
    giveavg(ptr);

    
    return 0;
}