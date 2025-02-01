#include <iostream>
using namespace std;

string subMidString(string str)
{
    int size = str.length();
    int mid = size / 2;
    string result = "";
    cout << size << endl;

    if (size % 2 == 0)
    {

        result += str[mid-1];
        result += str[mid];
        return result;

        // result = str.substr(mid-1, 2);
        // return result;
    }
    else
    {
        result = str[mid];
        return result;
        // result = str.substr(mid, 1);
        // return result;
    }
}

int main()
{
    string s;
    cout << "Enter Any String: ";
    cin >> s;

    cout << subMidString(s);

    return 0;
}