// // #include <iostream>
// // using namespace std;

// // int main()
// // {

// //     int userInput;

// //     cout << "Enter number 1 to 7 : ";
// //     cin >> userInput;

// //     if (userInput == 1)
// //     {
// //         cout << "sunday";
// //     }
// //     else if (userInput == 2)
// //     {
// //         cout << "monday";
// //     }
// //     else if (userInput == 3)
// //     {
// //         cout << "teusdey";
// //     }
// //     else if (userInput == 4)
// //     {
// //         cout << "wednesday";
// //     }
// //     else if (userInput == 5)
// //     {
// //         cout << "thusday";
// //     }
// //     else if (userInput == 6)
// //     {
// //         cout << "friday";
// //     }
// //     else if (userInput == 7)
// //     {
// //         cout << "saterday";
// //     }
// //     else
// //     {
// //         cout << "Invalid Input";
// //     }
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int userInput;

//     cout << "Enter number 1 to 12 : ";
//     cin >> userInput;

//     if (userInput == 1)
//     {
//         cout << "jai, day-31";
//     }
//     else if (userInput == 2)
//     {
//         cout << "fab, day-28/29";
//     }
//     else if (userInput == 3)
//     {
//         cout << "mar, day-31";
//     }
//     else if (userInput == 4)
//     {
//         cout << "apr, day-30";
//     }
//     else if (userInput == 5)
//     {
//         cout << "may, day-30";
//     }
//     else if (userInput == 6)
//     {
//         cout << "jun, day-30";
//     }
//     else if (userInput == 7)
//     {
//         cout << "jul, day-31";
//     }
//     else if (userInput == 8)
//     {
//         cout << "aug, day-31";
//     }
//     else if (userInput == 9)
//     {
//         cout << "sep, day-30";
//     }
//     else if (userInput == 10)
//     {
//         cout << "oct, day-31";
//     }
//     else if (userInput == 12)
//     {
//         cout << "dev, day-31";
//     }

//     else
//     {
//         cout << "Invalid Input";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int userInput;

    cout << "Enter number 1 to 10: ";
    cin >> userInput;

    if (userInput == 1 || userInput == 3 || userInput == 5 || userInput == 7 ||userInput==8 || userInput == 10 || userInput == 12)
    {
        cout << "31 days";
    }
    else if ( userInput == 4 || userInput == 6 || userInput == 9 || userInput == 11)
    {
        cout << "30 days";
    }
    else if (userInput == 2)
    {
        cout << "28/29 days";
    }
    else
    {
        cout << "Invalid Input";
    }
}
