#include <iostream>
using namespace std;

int main(){
    long int n,m,a,b,k,i,j ;
    long long int max =0, temp = 0;
    cin>>n>>m;
    long int * arr  = new long int[n +1]();
    
    
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b>>k;
        arr[a] += k;
        if((b +1 ) <= n){ 
           arr[b + 1 ] -=k;
        }        
    }   
    for (int i = 0; i <= n; i++)
    {
        cout<<" "<<arr[i];
    }
     
    

    for (int i = 0; i < n; i++)
    {
        temp = temp + arr[i];
        if(max < temp){ max = temp;}
    }   
    

    
    cout<<max<<endl;

    return 0;
}