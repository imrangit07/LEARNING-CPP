/*Write a program in C to read 10 numbers from the keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000*/

#include <iostream>
using namespace std;

void readNaturalNum(int num[])
{

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
}

int sumNaturalNum(int num[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {

        sum += num[i];
    }
    // cout << sum << " ";
    return sum;
}

int main()
{
    int num[10], sum;
    readNaturalNum(num);

    cout << sumNaturalNum(num);
    return 0;
}

// Write a C program to compute the sum of the first 10 natural numbers.
// #include <iostream>
// using namespace std;

// int sumNaturalNum()
// {
//     int sum = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

// int main()
// {
//     cout << sumNaturalNum() << " ";
//     return 0;
// }