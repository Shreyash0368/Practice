#include<iostream> 

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 34;
    int & b = a;

    //  *************refernce to another variable************** 

    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
