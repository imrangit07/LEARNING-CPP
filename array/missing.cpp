// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 4, 6, 7};

//     for (int i = 0; i < 4; i++)
//     {
//         if (arr[i + 1] - arr[i] > 1)
//         {
//             cout << arr[i] + 1 << " ";
//         }
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 22, 23, 28};

    for (int i = 0; i < 4; i++)
    {
        if (arr[i + 1] - arr[i] > 1)
        {
            int start=arr[i]+1;
            while(start<arr[i+1]){
                cout<<start++<<" ";
            }
        }
    }

    return 0;
}