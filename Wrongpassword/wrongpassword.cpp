#include <iostream>
using namespace std;

int main()
{
   int password;
   int savepass=999;

   cout<<"Enter Your password : ";
   cin>>password;

   // (password==savepass)?cout<<"Open":
   //  (cout<<"Wrong Password, please tray again : ",

   // cin>>password,
   // (password==savepass)?cout<<"Open": 
   // (cout<<"Wrong Password, please tray again : ",

   // cin>>password,
   // (password==savepass)?cout<<"Open": cout<<"Blocked!"));

   if(password==savepass){
      cout<<"Open";
   }else{
      cout<<"Wrong password,please try angain ";
      cin>>password;
      if(password==savepass){
      cout<<"Open";
   }
   }
   return 0;
}