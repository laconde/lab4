// This program illustrates the use of the switch statement.

// Alberto Conde
// September 12, 2020

#include <iostream>
using namespace std;

int main()
{
    char grade;

    cout << "What grade did you earn in Programming I ?" << endl;
    cin >> grade;

    switch (grade)    // This is where the switch statement begins
    {
        case 'A': cout << "an A - excellent work !" << endl;

        case 'B': cout << "you got a B - good job" << endl;

        case 'C': cout << "earning a C is satisfactory" << endl;

        case 'D': cout << "while D is passing, there is a problem" << endl;

        case 'F': cout << "you failed - better luck next time" << endl;

        default: cout << "You did not enter an A, B, C, D, or F" << endl;
    }

    return 0;
}
// When you eliminate all the breaks, you will get all of the ouput in each case.
