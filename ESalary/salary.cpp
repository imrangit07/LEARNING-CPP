#include <iostream>
using namespace std;

int main()
{
    int salary, da, in;
    cout << "Enter your salary: ";
    cin >> salary;

    if (salary < 150000)
    {
        da = (salary / 100) * 20;
        in = (salary / 100) * 10;

        cout << salary + da + in;
    }
    else if (salary > 150000 && salary < 350000)
    {
        da = (salary / 100) * 30;
        in = (salary / 100) * 10;
        cout << salary + da + in;
    }
    else if (salary > 350000)
    {
        da = (salary / 100) * 40;
        in = (salary / 100) * 10;
        cout << salary + da + in;
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
}
