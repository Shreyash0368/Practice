#include <iostream>
using namespace std;

class base1{
    protected:
    int a;

    public:
    void Setdata(int x = 10){
        a = x;
    }
};

class derived1 : public base1{
    protected:
    int b;
    public:
    void Setdata2(int x = 20){
        b = x + a;
    }
};
class derived2 : public derived1{
    int c;
    public:
    void Setdata3(int x = 30){
        c = x * b;
    }
    void show(){
        cout<<"value of d1: "<< a <<endl;
        cout<<"value of d2: "<< b <<endl;
        cout<<"value of d3: "<< c <<endl;
    }
};

int main(int argc, char const *argv[])
{
    derived2 d1;
    d1.Setdata(50);
    d1.Setdata2(20);
    d1.Setdata3(40);
    d1.show();

    
    return 0;
}