// overloding

// one the bases of parameters number
// one the bases of return type
// one the bases order of parameters


// one the bases of parameters number
// #include<iostream>
// using namespace std;
// void sum(int a,int b){
//     cout<<a<<" "<<b<<endl;

// }
// void sum(int a){
//     cout<<a;
// }
 
// int main(){
//     sum(100,90);
//     sum(100);
//     return 0;
// }


// one the bases of return type

// #include<iostream>
// using namespace std;
// void sum(int a){
//     cout<<a<<endl;

// }
// void sum(char a){
//     cout<<a;
// }
 
// int main(){
//     sum(100);
//     sum('c');
//     return 0;
// }



// one the bases order of parameters
#include<iostream>
using namespace std;
void sum(char a,int b){
    cout<<a<<" "<<b<<endl;

}
void sum(int a,char b){
    cout<<a<<" "<<b;
}
 
int main(){
    sum('c',90);
    sum(100,'d');
    return 0;
}