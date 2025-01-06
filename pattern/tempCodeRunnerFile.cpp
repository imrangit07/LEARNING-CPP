// LAT-----------------------------

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number: ";
    cin >> num;
    for (int r = 1; r <= num; ++r)
    {
        for (int c = 1; c <= num; ++c)
        {
            if (c >= r)
            {
                cout << r;
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