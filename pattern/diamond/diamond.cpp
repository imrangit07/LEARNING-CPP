#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    for (int row = 1; row <= 9; ++row)
    {
        (row <= 5) ? a++ : a--;
        for (int col = 1; col <= 10; ++col)
        {
            if (col >= 6 - a && col <= 4 + a)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}