#include <iostream>
using namespace std;

class one
{
    int a = 90;
public:
    friend class b;
};
class b
{
    one obj1;
public: void show()
    {
        cout << obj1.a;
    }
};

int main()
{
 
    return 0;
}