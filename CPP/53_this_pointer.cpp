#include <iostream>
using namespace std;

class Base{
    int a;
    public:

    Base & setdata(int x){
        this->a = x;
        return *this;
    } 
    void getdata(){
        cout<<"The value of a is: "<< a <<endl;
    }
};

int main(int argc, char const *argv[])
{
    Base obj;
    obj.setdata(45).getdata();    
    
    return 0;
}