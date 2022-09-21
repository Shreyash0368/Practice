#include <iostream>
#include <iomanip>
using namespace std;

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}

int main(int argc, char const *argv[])
{
    cout<<"the volume of cylinder with radius 10 and height 3 is "<<volume(10,3)<<endl;
    cout<<"the volume of cude of side 3 is "<<volume(3)<<endl;
    cout<<"the volume of cuboid with l, b, h equal to 10, 3, 5 is "<<volume(10,3,5)<<endl;
    
    return 0;
}

// Function overloading is a process to make more than one function with the same name
// but different parameters, numbers, or sequence.
// An example program to explain function overloading is shown