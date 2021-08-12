// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Alberto Conde
// September 12, 2020

#include <iostream>
using namespace std;

int main()
{
    
    int grade;

    cout << "Input your grade:" << endl;
    cin >> grade;
    
    if (grade > 100)
        cout << "Invalid data.\n";
    else if (grade >= 90)
        cout << "A\n";
    else if (grade >= 80)
        cout << "B\n";
    else if (grade >= 60)
        cout << "You pass.\n";
    else if (grade >= 0 && grade <= 59)
        cout << "You fail.\n";

    return 0;
}
// If I put a negative value such as -12, it will not give me any observation

