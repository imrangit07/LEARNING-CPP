#include <iostream>
using namespace std;

int main()
{

    // int size = 5;
    int size;
    
    cout<<"Enter The Size Of Array: ";
    cin>>size;

    int arr[size];

    cout << "Enter "<<size<<" element in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout<< arr[i] << " is even number "<<endl;
        }
        else
        {
            cout << arr[i] << " is odd number"<<endl;
        }
    }

    return 0;
}