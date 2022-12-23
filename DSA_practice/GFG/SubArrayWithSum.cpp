#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int st = 0, end = -1, sum =0;

    do {
        if(sum == k) {
            cout << st << " " << end << endl;
            break;
        }
        else if (sum < k)
        {
            end++;
            sum += arr[end];
        }
        else {
            sum -= arr[st];
            st++;
        }  
        // cout << st << " outside " << end << " "<< sum << endl;
              
    } while (end <= n);


    
    return 0;
}
