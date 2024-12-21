#include <iostream>
using namespace std;

int main()
{
   int num1 = 20;
   int num2 = 40;
   int Enter;

   cout << "Enter 3 var. swap and Enter 2 two var. swap :";
   cin >> Enter;

   if (Enter == 3)
   {
      int temp;
      temp = num1;
      num1 = num2;
      num2 = temp;
      cout << "Using two var. swap"<<endl;
      cout << num1 << endl
           << num2;
   }
   else if (Enter == 2)
   {
      num1 = num1 + num2;
      num2 = num1 - num2;
      num1 = num1 - num2;

      cout << "Using two var. swap"<<endl;
      cout << num1 << endl
           << num2;
   }
   else
   {
      cout << "envalid number";
   }

   return 0;
}