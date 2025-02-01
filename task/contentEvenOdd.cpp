#include<iostream>
using namespace std;

int checkArr(int arr[], int size)
{
   for(int i=0;i<size;i++){
    if(i%2==0 && arr[i]%2!=0){
        return false;
    }
    if(i%2!=0 && arr[i]%2==0){
        return false;
    }
   }
   return true;
}
 
int main(){
    int arr[] ={2,3,4,5,6,7,8,8};
int size = sizeof(arr)/sizeof(arr[0]);

if(checkArr(arr,size)){
    cout<<"true";
}else{

    cout<<"false";
}

    return 0;
}