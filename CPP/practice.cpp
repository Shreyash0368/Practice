#include <iostream>
using namespace std;

class A{
    protected:
    int a;
    public:
    A(int x){
        cout<<"constructor called A"<<endl;

        a = x;
    }
    int get(){
        return a;
    }
};

class B{
    protected:
    int b;
    public:
    B(){}
    B(int x){
        cout<<"constructor called B"<<endl;

        b = x;
    }
    int get(){
        return b; 
    }
};


class C :  public A, virtual public B
{
    protected:
    int c;
    public:
    C(int x,int y, int z) : A(x), B(y){
        cout<<"constructor called C"<<endl;

        c = z;
                       
    }
    void sum(){
        cout<<"sum is: " << a + b + c <<endl;
    }
};

class D: public C,virtual public B{
    protected:
    int d;
    public:
    D(int a, int b, int c, int x): C(a,b,c), B(b) {
        cout<<"constructor called D"<<endl;
        d = x;
        cout<<"a: "<< A:: get() << ", b: " << B :: get() << ", c: "<< c << ", d: "<< d <<endl; 
    }
   
};

int main(int argc, char const *argv[])
{
    D obj(1,2,3,4);
    obj.sum();
    
    return 0;
}