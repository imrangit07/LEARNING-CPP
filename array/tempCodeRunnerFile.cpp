#include<iostream>
using namespace std;
 
int main(){

    int arr[4];

    for(int i=0;i<=3;++i){
        cout<<"Enter valu "<<i+1<<" is: ";
        cin>>arr[i];
    }
    for(int i=0;i<=3;++i){
        cout<<"Value of index ["<<i <<"] is:" <<arr[i]<<endl;
    }
    return 0;
}