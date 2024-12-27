#include<iostream>
using namespace std;
int main(){
//     int num =1;

//     do{
//         cout<<2*num<<endl;
//         num++;
//     }while(num<=10); 
//     // do-While:- Exit Control Loop
    

//     while (num<=10)
//     {
//         cout<<num*5<<endl;
//         num++;
//     }

//     for(int num2=1; num2<=10; ++num2){
//          cout<<num2*15<<endl;
//     }

 for(int num2=2; num2<=10; ++num2){
         for(int num=1; num<=10; num++){
           cout<<num2<<"*"<<num << ":- "<<num2*num <<",\t";
         }
         cout<<endl;
    }
   return 0; 
}

