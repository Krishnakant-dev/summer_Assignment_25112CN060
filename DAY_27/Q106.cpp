// Write a program to Create employee management system.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee {
    string name;
    int age;
    string department;
    double salary;
};

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "Employee Management System" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display Employees" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Employee newEmployee;
                cout << "Enter employee name: ";
                cin >> newEmployee.name;
                cout << "Enter employee age: ";
                cin >> newEmployee.age;
                cout << "Enter employee department: ";
                cin >> newEmployee.department;
                cout << "Enter employee salary: ";
                cin >> newEmployee.salary;
                employees.push_back(newEmployee);
                break;
            }
            case 2: {
                cout << "\nEmployee Records:" << endl;
                for (const auto& employee : employees) {
                    cout << "Name: " << employee.name 
                         << ", Age: " << employee.age 
                         << ", Department: " << employee.department 
                         << ", Salary: $" << employee.salary << endl;
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