#include <iostream>
using namespace std;

int main()
{
    string userInput;
    int userSalary, interest, price = 25000;

    cout << "Enter Mobile: ";
    cin >> userInput;

    if (userInput == "Mobile")
    {
        cout << "Enter mobile name (Iphone, Samsung, Redmi): ";
        cin >> userInput;

        if (userInput == "Iphone" || userInput == "Samsung" || userInput == "Redmi")
        {
            cout << "Enter your monthly salary: ";
            cin >> userSalary;

            if (userSalary <= 20000)
            {
                interest = (price * 5 * 5) / 100;
                price += interest;
                price /= 5*12;
                cout << "Monthly payment: " << price << endl;
            }
            else if (userSalary > 20000 && userSalary <= 40000)
            {
                interest = (price * 10 * 3) / 100;
                price += interest;
                price /= 3*12;
                cout << "Monthly payment: " << price << endl;
            }
            else if (userSalary > 40000)
            {
                interest = (price * 20 * 2) / 100;
                price += interest;
                price /= 2*12;
                cout << "Monthly payment: " << price << endl;
            }
            else
            {
                cout << "Invalid salary input!" << endl;
            }
        }
        else
        {
            cout << "Invalid input. Please enter only Iphone, Samsung, or Redmi." << endl;
        }
    }
    else
    {
        cout << "Invalid input. Please enter 'Mobile'." << endl;
    }

    return 0;
}
