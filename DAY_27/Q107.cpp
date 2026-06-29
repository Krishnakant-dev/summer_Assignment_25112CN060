// Write a program to Create salary management system.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Salary {
    string employeeName;
    double baseSalary;
    double bonus;
    double totalSalary;
};

int main() {
    vector<Salary> salaries;
    int choice;

    do {
        cout << "Salary Management System" << endl;
        cout << "1. Add Salary Record" << endl;
        cout << "2. Display Salary Records" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Salary newSalary;
                cout << "Enter employee name: ";
                cin >> newSalary.employeeName;
                cout << "Enter base salary: ";
                cin >> newSalary.baseSalary;
                cout << "Enter bonus: ";
                cin >> newSalary.bonus;
                newSalary.totalSalary = newSalary.baseSalary + newSalary.bonus;
                salaries.push_back(newSalary);
                break;
            }
            case 2: {
                cout << "\nSalary Records:" << endl;
                for (const auto& salary : salaries) {
                    cout << "Employee: " << salary.employeeName
                         << ", Base Salary: $" << salary.baseSalary
                         << ", Bonus: $" << salary.bonus
                         << ", Total Salary: $" << salary.totalSalary << endl;
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