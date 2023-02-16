// Q3 - Write a C++ program to take length and breadth of a rectangle and print its area.

#include <iostream>
using namespace std;
int main()
{
    int l, b;
    cout << "Enter the length of rectangle : ";
    cin >> l;
    cout << "Enter the breadth of rectangle : ";
    cin >> b;
    cout << "The area of rectangle is : " << l * b;
    return 0;
}