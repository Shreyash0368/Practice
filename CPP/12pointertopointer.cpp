#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 25;
    int * b = &a;
    
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value at b is: "<<*b<<endl;
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address at b is: "<<b<<endl;

    cout<< endl <<"----------------------------"<<endl;

    //POINTER TO POINTER
    int **c = &b;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address at c is: "<<c<<endl;
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl;
    
    


    
    return 0;
}