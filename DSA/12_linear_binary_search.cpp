#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int element)
{
    int high, low, mid;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 15, 22, 34, 45, 56, 66};
    int size = (sizeof(arr) / sizeof(int));
    int element;
    cout<<"enter element"<<endl;
    cin >> element;
    cout << "-----------------------" << endl;
    cout << "The element is present at position: " << binarysearch(arr, size, element) << endl;

    return 0;
}