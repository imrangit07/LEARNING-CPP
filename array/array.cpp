// #include<iostream>
// using namespace std;
 
// int main(){
//     int arr[]={100,200,300,400};
//     // int arr[4];

//     for(int i=0;i<=3;++i){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
 
int main(){

    int arr[4];

    for(int i=0;i<=3;++i){
        cout<<"Enter valu "<<i+1<<" is: ";
        cin>>arr[i];
    }
    for(int i=0;i<=3;++i){
        cout<<"Value of index ["<<i <<"] is:" <<arr[i]<<endl;
    }

   cout<<"\n"<<"Size Of Array :- "<< sizeof(arr)/sizeof(arr[0]);
    return 0;
}






// #include<iostream>
// using namespace std;
 
// int main(){

//     int arr[]={20,30,40,50};

//     for(int i=0;i<=3;++i){
//        arr[i]=arr[i]+5;
//     }
//     for(int i=0;i<=3;++i){
//        cout<<"Value of index["<<"] is: "<<arr[i]<<endl;
//     }
   
//     return 0;
// }