#include <bits/stdc++.h>
using namespace std;

// Given two integer arrays of same size, “arr[]” and “index[]”,
// reorder elements in “arr[]” according to given index array.
// It is not allowed to given array arr’s length.

// Input:  arr[]   = [10, 11, 12];
//             index[] = [1, 0, 2];
// Output: arr[]   = [11, 10, 12]
//            index[] = [0,  1,  2] 

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n], idx[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> idx[i];
    }

    int i = 0;
    while(i < n) {
        if(i == idx[i]) {
            i++;
        }
        else {
            swap(arr[i], arr[idx[i]]);            
            swap(idx[i],idx[idx[i]]);        
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    return 0;
}
