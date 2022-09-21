#include <iostream>
#include <iomanip>
using namespace std;
class base1{
    protected:
    int data1;
    public:
    void SetData1(){
        data1 = 10;
    }    
};

class base2{
    protected:
    int data2;
    public:
    void SetData2(){
        data2 = 20;
    }    
};

class derived : public base1, public base2
{
    int data3;
    public:
    void SetData3(){
        data3 = data1 * data2;
    }
    void show(){
        cout<<"Value of Data1: "<< data1 << endl;
        cout<<"Value of Data2 "<< data2 << endl;
        cout<<"Value of Data3: "<< data3 << endl;
    }

};

int main(int argc, char const *argv[])
{
    derived d1;
    d1.SetData1();
    d1.SetData2();
    d1.SetData3();
    d1.show();
    
    
    return 0;
}