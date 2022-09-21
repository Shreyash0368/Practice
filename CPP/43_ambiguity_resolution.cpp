#include <iostream>
using namespace std;

class base{
    int d1;
    public:
    int d2;
    int getdata(){
        return d1;
    }
    void setdata(int a, int b){
        d1 = a;
        d2 = b;
    }
};

class derived : public base{
    
    int d3;
    public:
    void setdata(int a, int b, int c){
        d3 = a;
        // here we use scope resolution to distinguish both set data
        base :: setdata(b,c);
        // if we remove base :: then compiler will output error
    }
    void process(){
        
        int c = d2 + getdata() * d2;
        cout<< "the value of d1: "<< getdata() << ", d2: " 
        << d2 << "and d3 is: " << d3 << ", after process the final value is: "<< c << endl;

    }
};
// This is also useful in multilevel or multiple inheritance 
// where some classes can have functions with same name


int main(int argc, char const *argv[])
{
    cout<< "inside main"<< endl;
    derived d;    
    cout<<"caling setdata and process"<<endl;
    
    d.setdata(8,5,4);
    d.process();

    
    return 0;
}