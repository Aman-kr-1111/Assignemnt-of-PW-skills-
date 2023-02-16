// Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*)

#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    cout << "Enter your 1st number : ";
    cin >> num1;
    cout << "Enter your 2nd number : ";
    cin >> num2;
    cout << "Addition : " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "Subtraction : " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "Multiplication : " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << "Division : " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    return 0;
}