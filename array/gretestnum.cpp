#include<iostream>
using namespace std;
 
int main(){
     int arr[]={12,23,53,9,5};
    int max=arr[0];
    
    for(int i=1;i<=4;i++){
       if(arr[i]>max){
        max=arr[i];
       }
    }
  cout<<max;
    return 0;
}