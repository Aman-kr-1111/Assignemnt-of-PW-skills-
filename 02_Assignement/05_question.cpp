// Q5 - write a program to calculate the sum of digits of a 3 digit number.

#include <iostream>
using namespace std;
int main()
{
    int num, sum, first, second, third;
    cout << "Enter your 3 digits number : ";
    cin >> num;
    third = num % 10;
    second = (num / 10) % 10;
    first = (num / 100) % 10;
    sum = first + second + third;
    cout << "the sum of digits of a 3 digit number : " << sum;
    return 0;
}