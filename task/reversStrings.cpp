#include<iostream>
using namespace std;

string reverseString(string str){
    int i=0;
    int j=str.length()-1;
    char temp;
while (j>i)
{
    temp = str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
}

return str;

}
 
int main(){
    string s;
    cout<<"Enter Any String: ";
    cin>>s;

    cout<<reverseString(s);
    return 0;
}