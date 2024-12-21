#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year: ";
    cin>>year;

    if(year%400==0 || (year%4==0 && year%100!=0) ){
        cout<<"This is Leap Year";
    }else{
        cout<<"This is not leap year";
    }
return 0;
} 


// Century year   --  or Normal year 
//       2000 , 2020, 1600,               
// (year%400==0 || (year%4==0 && year%100!=0) )