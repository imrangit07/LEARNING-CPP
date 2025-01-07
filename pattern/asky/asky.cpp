// #include<iostream>
// using namespace std;
 
// int main(){
    
//      for(int i=1;i<=127;i++){
//         cout<<"This is asky value "<<i<<" is : "<<char(i)<<endl; 
//      }
//     return 0;
// }


// #include<iostream>
// using namespace std;
 
// int main(){
    
//     for(int r=1;r<=5; ++r){
//         for(int c=1;c<=5;++c){
//             if(c<=r){
//                 cout<<char(char(r+64));
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
 
int main(){
    
    for(int r=1;r<=5; ++r){
        for(int c=1;c<=5;++c){
            if(c<=r){
                cout<<char(char(c+64))<<" ";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}