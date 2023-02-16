// Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls
// received grades "A" if 17 boys made up 80% of the students that received grades "A".

#include <iostream>
using namespace std;
int main()
{
    // boys --> Number of boys which are achieved the grades'A
    // girls --> Number of girls which are achieved the grades'A
    // total_stduents --> Number of total students which are achieved the grades'A

    int boys = 17, girls, total_students;
    total_students = (80 * 45) / 100;
    girls = total_students - boys;
    cout << girls << " girls which are achieved the grade 'A'";
    return 0;
}