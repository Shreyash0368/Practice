#include <bits/stdc++.h>
using namespace std;

//This is a function for kth largest/smallest element in an unsorted array 

int partition(int arr[], int l, int r, int piv) {
    int p = l,  q = r - 1;
    while (p <= q) 
    {
        while(arr[p] < piv) {
            p++;
        }       
        while (arr[q] > piv) {
            q--;
        }
        if (p <= q) {
            swap(arr[p], arr[q]);
        }        
    }
    swap(arr[p], arr[r]);
    return p;
     
}

int quickSelect(int arr[], int l, int r, int k, int n) {

    // for kth smallest element we compare p with k instead of n - k
    int pivot = arr[r];
    int p = partition(arr, l, r, pivot);
    if (p == (n - k)) {
        return arr[p];
    } else if ( (n - k) < p) {
        return quickSelect(arr, l, p - 1, k, n);
    } else {
        return quickSelect(arr, p + 1, r, k, n);
    }
    return -1;
    
}

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for kth smallest we pas k -1 into the function
    cout << "final soln: " << quickSelect(arr, 0, n - 1, k, n) << endl;
    


    
    return 0;
}
