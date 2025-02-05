#include<iostream>
using namespace std;

//Compile-Time Polymorphism [Function Overloading]

class poly
{

    public:
    void func(int a){
        cout<<"The value of a is : "<<a<<endl;
    }
    void func(double a){
        cout<<"The value of a is : "<<a<<endl;
    }
    void func(int a,int b){
        cout<<"The value of a is : "<<a<<"\nThe value of b is : "<<b<<endl;
    }

};
 
int main(){

    poly obj;

    obj.func(10);
    obj.func(10.90);
    obj.func(10,20);
    
    return 0;
}