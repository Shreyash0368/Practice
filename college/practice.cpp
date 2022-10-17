#include <iostream>

int BinarySearch(int array[], int x, int low, int high) 
{
  while (low <= high) 
  {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) 
{
  int array[] = {3, 4, 5, 6, 7, 8, 9, 2};
  int x;
  std :: cout << "Enter the number to be searched: ";
  std :: cin>> x;
  int n = sizeof(array) / sizeof(array[0]);

  int result = BinarySearch(array, x, 0, n - 1);

  if (result == -1)
    std::cout << "Not found\n";
  else
    std::cout << "Element is found at index: " << result << std :: endl;
}


