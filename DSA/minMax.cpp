#include <bits/stdc++.h>
using namespace std;

void maxMin(int arr[], int l, int r, int &maxNum, int &minNum) {
    if(l == r) {
        maxNum = minNum = arr[l];
    }
    else {
        int mid = (l + r)/2;
        int max2,min2;
        maxMin(arr, l, mid, maxNum, minNum);
        maxMin(arr, mid + 1, r, max2, min2);
    
        maxNum = max(maxNum, max2);
        minNum = min(minNum, min2);
    }
    return;
}


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max, min;
    maxMin(arr, 0, n -1, max, min);
    cout << max << " " << min;

    
    
    return 0;
}
