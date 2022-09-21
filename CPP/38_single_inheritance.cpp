/*
Single inheritance is a type of inheritance in which
a derived class is inherited with only one base class.
For example, we have two classes “employee” and “programmer”.
If the “programmer” class is inherited from the “employee” class
which means that the “programmer” class can now implement the functionalities
of the “employee” class.
*/
#include <iostream>
#include <iomanip>
using namespace std;

class Base
{
    int data1;

public:
    int data2;

    Base()
    {
        data1 = 10;
        data2 = 20;
    }
    void SetData1(int d1){
        data1 = d1;
    }
    int getData1();
    int getData2();
};
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}

class Derived : public Base
{
    int data3;

public:
    void process(int d1, int d2)
    {
        SetData1(d1);
        data2 = d2;
        data3 = data2 * getData1();
        // This is a way to access
        // a private member of the base class by using a public function of the base class
    }
    void showD3()
    {
        cout << "When value of data1 and data2 is "<< getData1() <<" and "<< data2 <<". Then value of data3 is: " << data3 << endl;
    }
};

int main(int argc, char const *argv[])
{
    Derived d1;
    cout << "Initial Data1 is: " << d1.getData1() << endl;
    cout << "Initial Data2 thru getdata2 is: " << d1.getData2() << endl;
    cout << "Initial Data2 thru direct access of d1 is: " << d1.data2 << endl;
    d1.process(10, 5);
    d1.showD3();

    return 0;
}