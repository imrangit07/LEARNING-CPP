#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1,2,2,1,3,4,4};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        bool dup = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && arr[i] != -1)
            {
                arr[j] = -1;
                dup = true;
            }
        }
        if (!dup && arr[i] != -1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}