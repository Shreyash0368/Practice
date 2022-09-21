#include <iostream>
using namespace std;

void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int insertion(int arr[], int& size, int index, int capacity, int element)
{ 
    if (size >= capacity)
    {
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        size += 1;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
        
        return 1;
    }
}
int deletion(int arr[], int& size, int index, int capacity)
{ 
    if (index >= capacity)
    {
        return -1;
    }
    else
    {
        
        for (int i = index; i <= size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }   
        
        size--;    
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
        
        return 1;
    }
}


int main()
{
    int arr[20] = {1, 23, 56, 71};
    int size = 4, capacity = 20, index = 2, element = 33;
    traversal(arr, size);    
    cout<<"size is: "<<size<<endl;    
    cout<<"----------------"<<endl;
    // int arr[], int size, int index, int capacity, int element
    insertion(arr, size, index, capacity, element);    
    cout<<"size is: "<<size<<endl;  
    cout<<"----------------"<<endl;
    deletion (arr, size, index, capacity);  
    cout<<"size is: "<<size<<endl;  

    return 0;
}
