#include <iostream>
#include <string>
using namespace std;

void anagram(string str1, string str2)
{
    // int arr[256]={0};
    int count[256] = {0};
    if (str1.length() != str2.length())
    {
        cout << "not!";
        return;
    }
    for (int i = 0; i <= str1.length(); i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            cout << "not";
            return;
        }
    }
    cout<<"anagram";
}

int main()
{
    string str1 = "ONM";
    string str2 = "MNO";

    anagram(str1, str2);
    return 0;
}