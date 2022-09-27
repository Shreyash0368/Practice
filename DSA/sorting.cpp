#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        std :: cout << arr[i] << " ";
    }
    std :: cout << "\n";
    
}

void countSort(int array[], int size) {
    int max, min;
    max = min = array[0];
    std :: cout << "finding max min\n";
    
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }           
    }

    std :: cout << "making \n";

    int count[max]{0};
    for (int i = 0; i < size; i++)
    {
        count[array[i] - min]++;
    }

    std :: cout << "updating count\n";

    for (int i = 1; i < max; i++)
    {
        count[i] += count[i - 1];
    }
    
    

    std :: cout << "creating sorted array\n";
    int tempArray[size]{0};
    for (int i = size - 1; i >= 0; i--)
    {
       count[array[i] - min]--; 
       tempArray[count[array[i]- min]] = array[i];
    }

    std :: cout << "copying\n";

    for (int i = 0; i < size; i++)
    {
        array[i] = tempArray[i];
    }    
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {8,6,5,9,2,1,3,5,3,3,1};
    int size = (sizeof(arr)/sizeof(int));
    
    printArray(arr, size);
    countSort(arr, size);
    printArray(arr, size);

    return 0;
}
