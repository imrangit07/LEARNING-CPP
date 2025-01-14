// Rempve the tergeted elements/accurence

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 4, 3, 4, 3, 2, 2, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 1;
//     int j = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]!=target){
//             cout<<arr[i]<<" ";
//         }
//     }
//     return 0;
// }

// Rempve the tergeted elements/accurence

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 3, 4, 3, 2, 2, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    int j = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] != target)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < j; ++i)
    {
        cout << arr[i] << " ";
    }
}

// keep first accurence
