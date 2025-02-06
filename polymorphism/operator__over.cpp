
 //POLYMORPHISM:- OPERATER OVERLOADING (compile time)

// #include<iostream>
// using namespace std;
// class complex
// {
//     private:
//   int real;
//   int imag;
//   public:
//   complex(int r=0,int i=0)
//   {
//      real=r;
//      imag=i;
//   }
//  complex operator+(complex const& obj){
//       complex res;
//       res.real=real+obj.real;
//       res.imag=imag+obj.imag;
//       return res;
//   }
//   void print(){
//       cout<<real<<" + "<<" i"<<imag;
//   }
// };
//   int main()
// {
//     complex c1(5,70) ,c2(6,5);
//     complex c3=c1+c2;
//     c3.print();
//     return 0;
// }
//  //POLYMORPHISM:- OPERATER OVERLOADING (compile time)

#include<iostream>
using namespace std;
class complex
{
    private:
  int real;
  int imag;
  public:
  complex(int real=0,int imag=0)
  {
     this->real=real;
     this->imag=imag;
  }
 complex operator+(complex const& obj){
      complex res;
      res.real=real+obj.real;
      res.imag=imag+obj.imag;
      return res;
  }
  void print(){
      cout<<real<<" + "<<imag<<"i";
  }
};
  int main()
{
    complex c1(15,10) ,c2(6,5);
    complex c3=c1+c2;
    c3.print();
    return 0;
}