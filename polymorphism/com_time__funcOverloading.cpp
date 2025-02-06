// #include<iostream>
// using namespace std;

// //Compile-Time Polymorphism [Function Overloading]

// class poly
// {

//     public:
//     void func(int a){
//         cout<<"The value of a is : "<<a<<endl;
//     }
//     void func(double a){
//         cout<<"The value of a is : "<<a<<endl;
//     }
//     void func(int a,int b){
//         cout<<"The value of a is : "<<a<<"\nThe value of b is : "<<b<<endl;
//     }

// };
 
// int main(){

//     poly obj;

//     obj.func(10);
//     obj.func(10.90);
//     obj.func(10,20);
    
//     return 0;
// }




//POLYMORPHISM:- METHOD OVERLOADING (compile time)
#include<iostream>
using namespace std;
class Overloding
{
    public:
    //Area of rectangle =length*width;
    int calculateArea(int length,int width)
    {
        return length*width;
    }
    
    //Area of Circle =pi*r*r;
    double calculateArea(double r)
    {
        return 3.14*r*r;
    }
};
int main(){
   Overloding obj;
   cout<<obj.calculateArea(30,20)<<endl;
   cout<<obj.calculateArea(30)<<endl;
}
