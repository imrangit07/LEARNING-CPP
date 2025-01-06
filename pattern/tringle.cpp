// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter num: ";
//     cin >> num;

//     for (int r = 1; r <= num; ++r)
//     {
//         for (int c = 1; c <= (num*2)-1; ++c)
//         {

//             if ((c >= (num+1) - r) && (c <= (num-1) + r))
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }




#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;

    for (int r = 1; r <= num; ++r)
    {
        for (int c = 1; c <= (num*2)-1; ++c)
        {

            if (c >= r && (c <= (num*2) - r))
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




