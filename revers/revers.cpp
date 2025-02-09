// #include <iostream>
// using namespace std;

// int main()
// {
//     int num = 1234;

//     int digit1, digit2, digit3;
//     digit1 = num % 10;
//     num = num / 10;
//     digit2 = num % 10;
//     num = num / 10;
//     digit3 = num % 10;
//     num = num / 10;
//     cout << digit1 << digit2 <<digit3 << num;
//     return 0;
// }

#include <iostream>
using namespace std;
int Rev = 0;
int rev(int num)
{
    for (int i = 1; i <= 4; i++)
    {
        Rev = (Rev * 10) + (num % 10);
        num = num / 10;
    }
    return Rev;
}
void second(int num2)
{
    rev(num2);
}

int main()
{

    int num = 1234;
    int num2 = 6789;
    second(num2);
    cout<<rev(num);
    return 0;
}