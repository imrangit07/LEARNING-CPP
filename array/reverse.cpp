#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 23, 53, 91, 5, 90};
    int i = 0;
    int j = 5;

    while (i < j)
    {

        arr[i]+=arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]-=arr[j];
        i++;
        j--;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}