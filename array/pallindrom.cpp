#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 2, 5};

    int i=0;
    int j=4;
    while (arr[i]!=arr[j])
    {
        if(arr[i]!=arr[j]){
            cout<<"This is not pallindrom";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"This is pallindrom";
    
    return 0;
}