#include <iostream>
using namespace std;

class test{
    int a;
    int b;
    public:
    test(int x, int y) : a(x), b(y){
        cout<<"conts executed"<<endl;
        cout<<"value of a is: " << a <<endl;
        cout<<"value of b is: " << b <<endl;
    }
};
// we will assign value to "a" here always because a is being initialized first, 
// we cant assign value to "b" first as it is being initialized second 

int main(int argc, char const *argv[])
{
    test t(5,7);

    
    return 0;
}