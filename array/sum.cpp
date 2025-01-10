#include<iostream>
using namespace std;
 
int main(){
    

    int arr[]={1,2,3,4,5};
    int sum=0;
    int mul=1;
    
    for(int i=0;i<=4;i++){
        sum+=arr[i];
        mul*=arr[i];
    }
    cout<<"sum of arr: "<<sum<<endl;
    cout<<"mul. of arr: "<<mul;
    
    return 0;
}