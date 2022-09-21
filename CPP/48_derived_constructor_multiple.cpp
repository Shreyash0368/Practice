#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    A(int x)
    {
        a = x;
        cout<<"A constructor called"<<endl;
    }
    int getdata()
    {
        return a;
    }
};

class B
{
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

class C : public A, public B
{
protected:
    int c;
public:
C(int x, int y, int z) : B(x) , A(y){
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