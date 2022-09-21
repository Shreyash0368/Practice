#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the number at pposition "<<i<<" ";
        cin>>arr[i];        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"The number at pposition "<<i<<" is "<<arr[i]<<endl;        
    }  
    
    return 0;
}