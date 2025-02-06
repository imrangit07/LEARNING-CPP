//POLYMORPHISM:- OVERRIDING (RUN time)

#include<iostream>
using namespace std;

class Parent{
    public:
    void show(){
        cout<<"\nThis is Parent Class";
    }
};
class Child:public Parent
{
    public:
    void show(){
        cout<<"\nThis is Child Class";
    }
};
int main(){
    Parent obj1;
    Child obj2;
    obj1.show();
    obj2.show();
    return 0;
}
