#include <iostream>
using namespace std;

int main()
{
    int num = 1234;

    int digit1, digit2, digit3;
    digit1 = num % 10;
    num = num / 10;
    digit2 = num % 10;
    num = num / 10;
    digit3 = num % 10;
    num = num / 10;
    cout << digit1 << digit2 <<digit3 << num;
    return 0;
}
