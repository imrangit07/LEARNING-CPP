#include <iostream>
using namespace std;
int main()
{
    int userInput;
    cout << "Enter KM: ";
    cin >> userInput;
    if (userInput > 0 && userInput <= 50)
    {
        cout<<userInput*10 <<" Rupees!";
    }
    else if (userInput >= 51 && userInput <= 100)
    {
        cout <<50*10+(userInput-50)*20 << " Rupees!";
    }
    else if (userInput >= 100)
    {
        cout<<(50*10+50*20+(userInput-100)*30) << " Rupees!";
    }
    else
    {
        cout << "Invalide Input";
    }
}
