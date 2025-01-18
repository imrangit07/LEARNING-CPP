#include <iostream>
using namespace std;

void printFNS(int n)
{
    int first = 0, second = 1, next = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << first << " ";
            continue;
        }
        if (i == 2)
        {
            cout << second << " ";
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        cout << next << " ";
    }
    
}

int main()
{

    int n;
    cout << "Enter the range of fibonacci: ";
    cin >> n;

    printFNS(n);

    return 0;
}

// #include <iostream>
// using namespace std;

// void  printFNS(int n){
//    int first=0,second=1,next=0;

//    for(int i=1;i<=n;i++){
//     cout<<first<<" ";
//     next=first+second;
//     first=second;
//     second=next;
//    }
// }

// int main()
// {

//    int n;
//    cout<<"Enter the range of fibonacci: ";
//    cin>>n;

//    printFNS(n);

//     return 0;
// }