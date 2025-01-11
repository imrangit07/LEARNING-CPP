#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 1, 2, 3, 4, 4, 3, 4, 5, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = -1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}