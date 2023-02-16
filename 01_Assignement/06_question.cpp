// Q6 - Write a C++ program to swap two numbers with the help of a third variable.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, temp;
    cout << "Enter your 1st number : ";
    cin >> num1;
    cout << "Enter your 2nd number : ";
    cin >> num2;
    cout << "Before swap 1st number is " << num1 << " and 2nd number is " << num2<<endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swap 1st number is " << num1 << " and 2nd number is " << num2<<endl;
    return 0;
}
