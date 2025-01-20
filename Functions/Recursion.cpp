// recursion: function calling itself

// #include<iostream>
// using namespace std;

// int sum(int n){
//     if(n==0) return 0;
//     return n+sum(n-1);
// }
 
// int main(){
//     cout<<sum(10);
//     return 0;
// }

// loop , recursion = brutforce-----read

// recursion + memorization =DP

// #include<iostream>
// using namespace std;

// int fibo(int n){
//     if(n==1 || n==0) return n;
//     return fibo(n-2)+fibo(n-1);
// }
 
// int main(){
    
//     cout<<fibo(5);
//     return 0;
// }


#include<iostream>
using namespace std;

int fibo(int n){
    if(n==1 || n==0) return n;
    return fibo(n-2)+fibo(n-1);
}
 
int main(){
    for(int i=0;i<=5;i++)
    cout<<fibo(i)<<" ";
    return 0;
}