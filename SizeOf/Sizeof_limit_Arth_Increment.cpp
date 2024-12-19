// Online C++ compiler to run C++ program online
#include <iostream>
#include <limits>
using namespace std;

int main()
{

    // This is for size of data type
    int num = 17;
    // cout << "Size of Int is " << sizeof(num) << " byts" << endl;

    // float num1 = 10.50;
    // cout << "Size of Float is " << sizeof(num1) << " byts" << endl;

    // double num2 = 12.50;
    // cout << "Size of Double is " << sizeof(num2) << " byts" << endl;

    // char c = 'C';
    // cout << "Size of Char is " << sizeof(c) << " byts" << endl<< endl;

    // This is for address of variable
    cout << "Address of Num is : " << &num << endl<< endl;

    // This is for data type min and max values
    // cout << "Int min limit is : " << numeric_limits<int>::min() << endl;
    // cout << "Int max limit is : " << numeric_limits<int>::max() << endl;

    // cout << "float min limit is : " << numeric_limits<float>::min() << endl;
    // cout << "float max limit is : " << numeric_limits<float>::max() << endl;

    // cout << "double min limit is : " << numeric_limits<double>::min() << endl;
    // cout << "double max limit is : " << numeric_limits<double>::max() << endl;

    // cout << "Char min limit is : " << static_cast<int>(numeric_limits<char>::min()) << endl;
    // cout << "Char max limit is : " << static_cast<int>(numeric_limits<char>::max()) << endl
    //      << endl;

    // arithmetic operators
    // cout << "Sum of " << num1 << " and " << num2 << " is : " << num1 + num2 << endl;
    // cout << "Subtraction of " << num1 << " and " << num2 << " is : " << num1 - num2 << endl;
    // cout << "Multiplication of " << num1 << " and " << num2 << " is : " << num1 * num2 << endl;
    // cout << "Division of " << num1 << " and " << num2 << " is : " << num1 / num2 << endl;
    // cout << "modulo of " << (int)num1 << " and " << (int)num2 << " is : " << (int)num1 % (int)num2 << endl<<endl;


//  increment Operator

// PRE-INCREMENT

    // cout << "Value before using pre increment operator is : " << num1 << endl;
    // double temp1 = ++num1;
    // cout << "The value stored by temp1 is : " << temp1 << endl;
    // cout << "After using the pre increment operator is : " << num1 << endl;

// POST-INCREMENT
    
    // cout << "Value before using post increment operator is : " << num2 << endl;
    // double temp2 = num2++;
    // cout << "The value stored by temp2 is : " << temp2 << endl;
    // cout << "After using the post increment operator is : " << num2 << endl;

    return 0;
}