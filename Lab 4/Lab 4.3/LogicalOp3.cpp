// This program illustrates the use of logical operators

// Alberto Conde
// September 12, 2020

#include <iostream>
using namespace std;

int main()
{
    char year;
    float gpa;

    cout << "What year student are you ?" << endl;
    cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
    << endl << endl;
    cin >> year;

    cout << "Now enter your GPA" << endl;
    cin >> gpa;

    if (gpa >= 2.0 || year == '4')
        cout << "It is time to graduate soon" << endl;

    else if (year != '4' && gpa <2.0)
        cout << "You need more schooling" << endl;

    return 0;
}
// According to this program, students will graduate if they have a GPA higher or equal to 2.0. And they will also graduate if they are a senior. They will need more schooling if they have a GPA lower than 2.0 and they also are not seniors. It does hold any combination of year and GPA. 
