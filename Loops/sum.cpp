#include <iostream>
using namespace std;
int main()
{

    // int userInput,sum=0;
    //     cout<<"Enter the number: ";
    //     cin>>userInput;

    //     for(int i=1; i<=userInput; ++i ){
    //         sum= sum+i;
    //     }
    //     cout<<sum;

    // fact------------------------

    // int userInput,fact=1;
    // cout<<"Enter the number: ";
    // cin>>userInput;

    // for(int i=1; i<=userInput; ++i ){
    //     fact=fact*i;
    // }
    // cout<<fact;



    // factor:- divi. by number ex. 8:- 1,2,3,4,8




    //  int userInput;
    // cout<<"Enter the number: ";
    // cin>>userInput;

    // for(int i=1; i<=userInput; ++i){
    //     if(userInput%i==0){
    //         cout<<i;
    //     }
    // }



    // HCF, LCM---------------------------




    // int smallerNumber = 4, largerNumber = 8, hcf = 0;

    // for (int i = 1; i <= smallerNumber; ++i)
    // {
    //     if ((smallerNumber % i == 0) && (largerNumber % i == 0))
    //     {
    //         hcf = i;
    //     }
    // }
    // cout << hcf;




    // LCM ------------------------------------

    

    // lcm=(smallerNumber*largerNumber)/hcf

    // int smallerNumber = 4, largerNumber = 8, lcm = 0;

    // for (int i = largerNumber;; i += largerNumber)
    // {
    //     if ((i % smallerNumber == 0) && (i % largerNumber == 0))
    //     {
    //         lcm = i;
    //         break;
    //     }
    // }
    // cout <<lcm;



    // Power--------------------------------------


    int number=2;
    int power=3;
    int ans=1;

    for(int i=1; i<=power;++i){
        ans=ans*number;
    }

    cout<<"ans is: "<<ans;


    return 0;
}