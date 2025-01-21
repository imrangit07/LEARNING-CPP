#include<iostream>
using namespace std;

void rev(string name){
    int start=0;
    int end=name.length()-1;
    while(start<end){
        char temp=name[start];
        name[start]=name[end];
        name[end]=temp;
        start++;
        end--;
    }
    cout<<name;
}

int main(){

    string name="IMRAN";
    rev(name);
    return 0;
}

// #include<iostream>
// using namespace std;

// void pol(string name){
//     int start=0;
//     int end=name.length()-1;
//     while(start<end){
//        if(name[start]!=name[end]){
//         cout<<"This is not a pallindrome";
//         return;
//        }
//        start++;
//        end--;
//     }
//     cout<<"This is pallindrome";
// }

// int main(){

//     string name="IMRMI";
//     pol(name);
//     return 0;
// }
