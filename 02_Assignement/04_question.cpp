// Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include <iostream>
using namespace std;
int main()
{
    int num, sum, first, second, third, forth, fifth;
    cout << "Enter your 5 digits number : ";
    cin >> num;
    fifth = num % 10;
    forth = (num / 10) % 10;
    third = (num / 100) % 10;
    second = (num / 1000) % 10;
    first = (num / 10000) % 10;

    sum = first + forth;
    cout << "The sum of the first and the second last digit is : " << sum;
    return 0;
}