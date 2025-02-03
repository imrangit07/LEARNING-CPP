#include <iostream>
using namespace std;

class one
{
    int a;

public:
    void setValue(int x)
    {
        a = x;
        cout << a;
    }
};

int main()
{
    one obj;

    obj.setValue(50);

    return 0;
}