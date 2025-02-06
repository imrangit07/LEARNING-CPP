//POLYMORPHISM:- Virtual Function (RUN time)

#include<iostream>
using namespace std;

class Animal
{
    public:
     // pure virtual function
    virtual void speak()=0;
    //Virtual Function
// virtual void speak(){
//         cout<<"\nAnimal Speak";
//     }
};
class Dog:public Animal
{
    public:
   void speak(){
        cout<<"\nDog Bark";
   }
};
class Cat:public Animal
{
  public:
  void speak(){
      cout<<"\nCat Meow";
  }
};
int main()
{
//  Animal obj;
//  Dog obj1;
//  Cat obj2;
//  obj.speak();
//  obj1.speak();
//  obj2.speak();
 Animal* animal1=new Dog();
  Animal* animal2=new Cat();
 animal1->speak();
  animal2->speak();
 return 0;   
}