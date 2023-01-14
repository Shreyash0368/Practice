// Given an array of positive and negative numbers, arrange them in an alternate fashion such that
// every positive number is followed by a negative and vice-versa maintaining the order of appearance.

#include <bits/stdc++.h>
using namespace std;

void rightShift(int array[],int i, int j) {
    j++;
    reverse(array + i, array + j - 1);
    reverse(array + j -1, array + j);
    reverse(array + i, array + j);
    
}


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        if((i%2 == 0 && array[i] >= 0)) {
            
            for (int j = i + 1; j < n; j++)
            {
                if (array[j] < 0) {
                    rightShift(array, i, j);
                    break; 
                }
            }   
        }
        else if ((i%2 != 0 && array[i] <0)) {
            for (int j = i + 1; j < n; j++)
            {
                if (array[j] >= 0) {
                    rightShift(array, i, j);
                    break; 
                }
            }
        }
    }
       
    
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
    

    return 0;
}
