// Q1 - Write a program to check whether two numbers (entered by user) are equal or not.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, result;
    cout << "Enter your 1st number : ";
    cin >> num1;
    cout << "Enter your 2nd number : ";
    cin >> num2;
    cout << ((num1 == num2) ? "Numbers are equal!" : "Numbers aren't equal!");
    return 0;
}