#include <iostream>
using namespace std;

int main()
{

    int num;

    cout<<"Enter Number: ";
    cin>>num;

    if(num<=1){
        cout<<"Not a Prime";
        return 0;
    }

    for(int i=2;i*i<=num;i++){

        if(num%i==0){
            cout<<"Not a Prime Number";
            return 0;
        }
    }

    cout<<"Prime";

    return 0;

}