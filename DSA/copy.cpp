#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, d,i;    
    cin>>N>>d;
    d = (d % N);
    int arr[N]; 
    int arr2[N];

    for (i = 0; i < N; i++)
    {
        cin>> arr[i];
    }
    for (i = 0; i < N; i++)
    {
        arr2[(i + N - d) % N] = arr[i];
    }
    
    for (i = 0; i < N; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    return 0;
}