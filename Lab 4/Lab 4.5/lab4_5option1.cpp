// This program prompts the user for their quarterly bill

// Alberto Conde
// September 12, 2020

#include <iostream>
using namespace std;

int main()
{
    
    cout << "Please input your water bill for quarter 1:\n";
    double billq1;
    cin >> billq1;
    
    cout << "Please input your water bill for quarter 2:\n";
    double billq2;
    cin >> billq2;
    
    cout << "Please input your water bill for quarter 3:\n";
    double billq3;
    cin >> billq3;

    cout << "Please input your water bill for quarter 4:\n";
    double billq4;
    cin >> billq4;
    
    double average;
    average = (billq1+billq2+billq3+billq4)/4.0;
    
    if (average > 75)
        cout << "You are using excessive amounts of water.\n";
    else if (average >= 25 && average <= 75)
        cout << "Typical amounts of water are being used.\n";
    else if (average < 25)
        cout << "You truly conserve water!\n";

    return 0;
}
