#include <iostream>
#include <string>
using namespace std;

void bp(string str)
{
    int cur = 0, cir = 0, squ = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '{')
        {
            cur++;
        }
        else if (ch == '(')
        {
            cir++;
        }
        else if (ch == '[')
        {
            squ++;
        }
        else if (ch == '}')
        {
            cur--;
        }
        else if (ch == ')')
        {
            cir--;
        }
        else if (ch == ']')
        {
            squ--;
        }
    }

    if (cur == 0 && cir == 0 && squ == 0)
    {
        cout << "This string is balance";
    }
    else
    {
        cout << "This string is not balance";
    }
}

int main()
{
    string str = "{[()]}()";

    bp(str);
    return 0;
}