// Program 1: Print Personal Information
#include <iostream>
using namespace std;

int main() {
    cout << "Name: Aimen Saeed" << endl;
    cout << "Registration Number: 12345" << endl; 
    cout << "Course Name: Software Construction and Development" << endl;
    return 0;
}


// Program 2: Input name, roll number, and GPA of 3 students
#include <iostream>
using namespace std;

int main() {
    string name;
    int roll;
    float gpa;

    for (int i = 1; i <= 3; i++) {
        cout << "\nEnter details for Student " << i << ":" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Roll Number: ";
        cin >> roll;
        cout << "GPA: ";
        cin >> gpa;

        cout << "Student " << i << " -> Name: " << name << ", Roll No: " << roll << ", GPA: " << gpa << endl;
    }

    return 0;
}


// Program 3: Calculate and display student grade using if-else
#include <iostream>
using namespace std;

int main() {
    float marks;
    cout << "Enter student's marks (out of 100): ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A+" << endl;
    else if (marks >= 80)
        cout << "Grade: A" << endl;
    else if (marks >= 70)
        cout << "Grade: B" << endl;
    else if (marks >= 60)
        cout << "Grade: C" << endl;
    else if (marks >= 50)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}


// Program 4: Check whether a number is an Armstrong number
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num;
    int digits = 0;
    int sum = 0;

    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;

    return 0;
}


// Program 5: Create integer array and find maximum and minimum values
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {12, 45, 23, 67, 89, 11, 9, 34, 76, 55};
    int maxVal = arr[0];
    int minVal = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
        if (arr[i] < minVal)
            minVal = arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;

    return 0;
}


// Program 6: Implement linear search
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {12, 45, 23, 67, 89, 11, 9, 34, 76, 55};
    int target;
    bool found = false;

    cout << "Enter value to search: ";
    cin >> target;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == target) {
            cout << "Value found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Value not found in the array." << endl;

    return 0;
}

// Program 7: Bubble Sort (Ascending Order)
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {12, 45, 23, 67, 89, 11, 9, 34, 76, 55};
    int n = 10;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array (Ascending Order): ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
