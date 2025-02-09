#include<iostream>
using namespace std;

int fact(int n){
if(n<=1){
    return 1;
}
return n* fact(n-1);
//n*fact(4)
//5*4*fact(3)
//5*4*3*fact(2)
//5*4*3*2*fact(1)
}
 
int main(){
    int n=5;
    // cout<<"Enter number: ";
    // cin>>n;
    cout<<fact(n);
    return 0;
}