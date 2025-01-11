#include <iostream>
using namespace std;

int main()
{
  // int arr[]={12,23,53,9,5};

  int arr[]={20,30,40,90,10};
  int max = arr[0];
  int min = arr[0];

  int arr_size = sizeof(arr) / sizeof(arr[0]);

  

  for (int i = 1; i <= arr_size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  cout << "The max value is: " << max << endl;
  cout << "The min value is: " << min;

  return 0;
}