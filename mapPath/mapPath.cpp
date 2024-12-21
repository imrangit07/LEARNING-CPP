#include <iostream>
using namespace std;

int main()
{

    int pathInput;
    cout << "\nEnter path 1: ";
    cin >> pathInput;

    if (pathInput == 1)
    {
        cout << "\nEnter 2,3 or 4: ";
        cin >> pathInput;
        if (pathInput == 2)
        {
            cout << "\nEnter 3 or 4: ";
            cin >> pathInput;
            if (pathInput == 3)
            {
                cout << "\nEnter 4: ";
                cin >> pathInput;
                if (pathInput == 4)
                {
                    cout << "\nReached";
                }
                else
                {
                    cout << "\nInvalide Input";
                }
            }
            else
            {
                cout << "\nInvalide Input";
            }
        }
        else if (pathInput == 3)
        {
            cout << "\nEnter 2 or 4: ";
            cin >> pathInput;
            if (pathInput == 2)
            {
                cout << "Enter 4 for reached: ";
                cin >> pathInput;
                if (pathInput == 4)
                {
                    cout << "\nReached";
                }
                else
                {
                    cout << "\nInvalide Input";
                }
            }
            else if (pathInput == 4)
            {
                cout << "\nReached";
            }
            else
            {
                cout << "Invalide Input";
            }
        }
        else if (pathInput == 4)
        {
            cout << "\nReached";
        }
        else
        {
            cout << "Invalide Input";
        }
    }
    else
    {
        cout << "Invalide Input";
    }
    return 0;
}