#include<iostream>
using namespace std;
 int fib(int num1){
     if(num1==0){
        return 0;
    }
    if(num1<=2 && num1>0){
        return 1;
    }
   return (fib(num1-1)+fib(num1-2));

   //fib(5) + fib(4)
   //fib(4)+fib(3)  + fib(3)+fib(2)
   //fib(3)+fib(2)+fib(2)+fib(1)  + fib(2)+fib(1)
 }
int main(){
    int n=6;
    // cout<<"Enter number: ";
    // cin>>n;
    cout<<fib(n);
    return 0;
}