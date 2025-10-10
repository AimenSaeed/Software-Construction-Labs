#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks (0 - 100): ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A" << endl;
    else if (marks >= 75)
        cout << "Grade: B" << endl;
    else if (marks >= 50)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: F" << endl;

    // -------------------------------
    // Task 2: Multiplication Table (loop)
    // -------------------------------
    int number;
    cout << "\nEnter a number to print its multiplication table: ";
    cin >> number;

    cout << "Multiplication Table of " << number << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
