#include <bits/stdc++.h>
using namespace std;

int findNumberOfTriangles(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 0;
    for (int i = n - 1; i >= 2; i--)
    {
        int l = 0;
        int r = i - 1;
        while (r > l)
        {
            // cout << i << " " << l << " " << r << endl;
            if ((arr[l] + arr[r]) > arr[i])
            {
                // cout << "match found\n";
                count = count + (r - l);
                // cout << "count is: " << count << endl;
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    return count;
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

    int count = findNumberOfTriangles(arr, n);
    cout << "\n count is: " << count << endl;

    return 0;
}
