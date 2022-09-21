#include <iostream>
using namespace std;

int count = 0;
class num{
    public:
    num(){
        count++;
        cout<<"The constructor is called for obj: "<<count<<endl;
    }
    // we add ~ symbol for destructor
    ~num(){
        cout<<"Here destructor is called for obj: "<<count<<endl;
        count--;
    }
};

int main(int argc, char const *argv[])
{
    cout<<"We are inside the main function"<<endl;
    cout<<"creating first object"<<endl;
    num n1;
    {
        cout<<"Entring the code block"<<endl;
        cout<<"Creating objects 2 and 3"<<endl;
        num n2, n3;
        cout<<"Exiting the code block"<<endl;
    }
    cout<<"Entering the main function again"<<endl;
    // destructor is called in reverse order 
    return 0;
}