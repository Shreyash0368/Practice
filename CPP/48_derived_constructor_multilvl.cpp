#include <iostream>
using namespace std;

class B{
protected:
    int b;

public:

    B(int x)
    {
        b = x;
        cout<<"B constructor called"<<endl;
    }
    int getdata()
    {
        return b;
    }
};

class A : public B
{
protected:
    int a;

public:
    A(int x, int y) : B(y)
    {
        a = x;
        cout<<"A constructor called"<<endl;
    }
    int getdata()
    {
        return a;
    }
};


class C : public A
{
protected:
    int c;
public:
C(int x, int y, int z) :  A(x,y){
    c = z;
    cout<<"C constructor called"<<endl;
}
void getdata(){
    cout<< "the value of a is: " << A::getdata() << ", and b is: "<< B::getdata() << ", and c is: " << c << endl;
}
    
};

int main(int argc, char const *argv[])
{
    C obj(1,2,3);
    obj.getdata();

    return 0;
}