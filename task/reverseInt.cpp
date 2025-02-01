// input 123
// output 321123

#include <iostream>
using namespace std;

int reverseIntValue(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    return rev;
}

int finalReverse(int num){
     int reversed = reverseIntValue(num);
     reversed=reversed*1000+num;
     return reversed;
}

int main()
{
    int n=123;
   
    cout << finalReverse(n);
    return 0;
}