// Write a program to Create marksheet generation system.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Marksheet {
    string studentName;
    int rollNumber;
    double marks;
};

int main() {
    vector<Marksheet> marksheets;
    int choice;

    do {
        cout << "Marksheet Generation System" << endl;
        cout << "1. Add Marksheet Record" << endl;
        cout << "2. Display Marksheet Records" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Marksheet newMarksheet;
                cout << "Enter student name: ";
                cin >> newMarksheet.studentName;
                cout << "Enter roll number: ";
                cin >> newMarksheet.rollNumber;
                cout << "Enter marks: ";
                cin >> newMarksheet.marks;
                marksheets.push_back(newMarksheet);
                break;
            }
            case 2: {
                cout << "\nMarksheet Records:" << endl;
                for (const auto& marksheet : marksheets) {
                    cout << "Student: " << marksheet.studentName
                         << ", Roll Number: " << marksheet.rollNumber
                         << ", Marks: " << marksheet.marks << endl;
                }
                break;
            }
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}