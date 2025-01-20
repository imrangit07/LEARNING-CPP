#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 8};
    int n=sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] - arr[i] > 1)
        {
            int gap = arr[i] + 1;
            while (gap < arr[i + 1])
            {
                cout << gap++ << " ";
            }
        }
    }

    return 0;
}