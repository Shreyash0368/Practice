#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float *d;
    d = new float(23.35454);
    // here we assign value to pointer at time of creation itself
    cout<< *d << endl;

    float * m;
    m = new float;
    *(m) = 4.747;
    cout<< *m << endl;

    cout<< endl <<"----------------------------"<<endl;

    int * arr = new int[3] ();

    arr[0] = 23;
    arr[1] = 76;
    arr[2] = 65;

    cout<< arr[0]<<" ";
    cout<< arr[1]<<" ";
    cout<< arr[2]<<" ";
    cout<<""<<endl;
    cout<< endl <<"----------------------------"<<endl;

    // free(arr) ; // we can also use free function
    delete [] arr;
    cout<< arr[0]<<" ";
    cout<< arr[1]<<" ";
    cout<< arr[2]<<" ";
    cout<<""<<endl;
    // we get garbage value here because we deleted the array
    
    return 0;
}