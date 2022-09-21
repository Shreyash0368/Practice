#include <iostream>
using namespace std;
/* 
We use virtual inheritance when the same class is inheritance multiple times and sometimes 
the parent and base class inherit the same class
Here both B and C inherit A and, then D inherits c and B due to this D will recieve A 2 times. 
Using virtual only one cokpy of A will be inherited by both B and C and hence D will 
also inherit ony one copy of A

*/
class A{
    protected:
    int a;
    public:
    void setdata(int x){
        a = x;
    }
    int getdata(){
        return a;
    }
};

class B : virtual public A{
    protected:
    int b;
    public:
    void setdata(int x){
        b = x;
    }
    int getdata(){
        return b;
    }
};

class C : virtual public A{
    protected:
    int c;
    public:
    void setdata(int x){
        c = x;
    }
    int getdata(){
        return c;
    }
};

class D : public B, public C{
    int d;
    public:

    void process(int x,int y ,int z, int m ){
        d = m;
        A :: setdata(x);
        B :: setdata(y);
        C:: setdata(z);
        int c;
        c = A :: getdata() + B :: getdata() + C :: getdata() +d;
        cout<< c << endl;
    }
};

int main(){

    D obj;
    obj.process(1,2,3,4);


    return 0;
}