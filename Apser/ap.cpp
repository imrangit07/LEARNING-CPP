#include <iostream>

using namespace std;
int main()
{

    int first_term = 1;
    int diffrence = 2;
    int nth_term = 6;
    int term;

    for (int i = 0; i <= nth_term; ++i)
    {
        // a+(n-1)*d  ap
        // a*r^(n-1)  gp  a*paw(r,i)
        //term*10+1   nth term like 1 11 111 1111 11111
       

        term = first_term + i * diffrence;
        cout<<term<<"\t"; //for seres

    }
    // cout << term;  for term

    return 0;
}