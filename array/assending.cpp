#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 23, 53, 91, 5, 90};

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] > arr[j])
            {
                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;

                arr[i] += arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] -= arr[j];
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}