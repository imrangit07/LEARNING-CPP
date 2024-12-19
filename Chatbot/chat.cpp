// #include <iostream>
// using namespace std;

// int main()
// {
//     string userInput;

//     cout << "Welcome! ";
//     cout << "\nWhat you need 'product','services' \n type here : ";
//     cin >> userInput;

//     if (userInput == "product")
//     {
//         cout << "\nbank Chatbot : Here are your available products\n";
//         cout << "1.Saving Account \n";
//         cout << "2.Fixed Deposits \n";
//         cout << "3.Home Loans \n";
//         cout << "4.Credit Cards \n";
//         int input1;
//         cout << "\nEnter any number for serveser 1 to 4 : ";
//         cin >> input1;
//         if (input1 == 1)
//         {
//             cout << "Saving Account details here";
//         }
//         else if (input1 == 2)
//         {
//             cout << "Fixed Deposit details here";
//         }
//         else if (input1 == 3)
//         {
//             cout << "Home Loans details here";
//         }
//         else if (input1 == 3)
//         {
//             cout << "Credit Cards details here";
//         }
//         else
//         {
//             cout << "Input valide number 1 to 4";
//         }
//     }
//     else if (userInput == "services")
//     {
//         cout << "\nbank Chatbot : Here are your available services\n";
//         cout << "1.Online Banking \n";
//         cout << "2.Customer Support \n";
//         cout << "3.Atm Services \n";
//         cout << "4.Lone Services \n";

//         int input2;
//         cout << "\nEnter any number for services 1 to 4 : ";
//         cin >> input2;
//         if (input2 == 1)
//         {
//             cout << "Our Bank Online details here";
//         }
//         else if (input2 == 2)
//         {
//             cout << "Our Customer Support details here";
//         }
//         else if (input2 == 3)
//         {
//             cout << "Our Atm Services details here";
//         }
//         else if (input2 == 3)
//         {
//             cout << "Our Lone Services details here";
//         }
//         else
//         {
//             cout << "Input valide number 1 to 4";
//         }
//     }
//     else
//     {
//         cout << "\nBank Chatbot : I am sorry, I didn't understand";
//     }
// }



// with one variable

#include <iostream>
using namespace std;

int main()
{
    string userInput;
    cout << "Ask Imran,Enter Imran :";
    cin >> userInput;

    if (userInput == "Imran")
    {
        cout << "\nWhat you need 'product','service' \ntype here :";
        cin >>userInput;
        if (userInput == "product")
        {
            cout << "Enter homelon or personallon : ";

            cin >> userInput;

            if (userInput == "homelon")
            {
                cout << "20lak";
            }
            else if (userInput == "personallon")
            {
                cout << "4lak";
            }
            else
            {
                cout << "Enter valide input";
            }
        }
        else if (userInput == "service")
        {
            cout << "corrently not avalavle";
        }
        else
        {
            cout << "wrong input!";
        }
    }
}