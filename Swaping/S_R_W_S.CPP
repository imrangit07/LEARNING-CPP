#include <iostream>
using namespace std;

int main()
{
   string Enter;

   cout << "Enter a for summer "<<endl;
   cout << "Enter b for winter "<<endl;
   cout << "Enter c for rainy "<<endl;
   cout << "Enter d for spring "<<endl;

   cin >> Enter;

   if (Enter == "a")
   {
      cout << "SUMMER"<<endl; 
   }
   else if (Enter == "b")
   {
      cout << "WINTER"<<endl;
   }  else if (Enter == "c")
   {
      cout << "RAINY"<<endl;
   }  else if (Enter == "d")
   {
      cout << "SPRING"<<endl;
   }
   else
   {
      cout << "envalid input";
   }

   return 0;
}



