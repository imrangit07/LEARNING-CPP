#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 1, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    ++count;
                    arr[j] = -1;
                }
            }
                cout <<"Frequency of "<< arr[i] << " is = " << count << endl;
        }
    }
    return 0;
}