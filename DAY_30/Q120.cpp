#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_STUDENTS = 100;

void displayMenu() {
    cout << "\n===== Student Record Management System =====\n";
    cout << "1. Add Student\n";
    cout << "2. Display All Students\n";
    cout << "3. Search Student\n";
    cout << "4. Update Student Marks\n";
    cout << "5. Delete Student\n";
    cout << "6. Exit\n";
    cout << "========================================\n";
}

void addStudent(string names[], int rollNo[], float marks[], int &count) {
    if (count >= MAX_STUDENTS) {
        cout << "Student list is full!\n";
        return;
    }

    cout << "Enter student name: ";
    cin >> names[count];

    cout << "Enter roll number: ";
    cin >> rollNo[count];

    cout << "Enter marks: ";
    cin >> marks[count];

    count++;
    cout << "Student added successfully!\n";
}

void displayStudents(const string names[], const int rollNo[], const float marks[], int count) {
    if (count == 0) {
        cout << "No students found.\n";
        return;
    }

    cout << "\n--- Student Records ---\n";
    cout << left << setw(15) << "Name" << setw(10) << "Roll No" << "Marks\n";
    cout << setfill('-') << setw(35) << "" << setfill(' ') << "\n";

    for (int i = 0; i < count; i++) {
        cout << left << setw(15) << names[i] << setw(10) << rollNo[i] << marks[i] << "\n";
    }
}

void searchStudent(const string names[], const int rollNo[], const float marks[], int count) {
    int targetRoll;
    bool found = false;

    cout << "Enter roll number to search: ";
    cin >> targetRoll;

    for (int i = 0; i < count; i++) {
        if (rollNo[i] == targetRoll) {
            cout << "\nStudent Found!\n";
            cout << "Name: " << names[i] << "\n";
            cout << "Roll No: " << rollNo[i] << "\n";
            cout << "Marks: " << marks[i] << "\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }
}

void updateStudentMarks(string names[], int rollNo[], float marks[], int count) {
    int targetRoll;
    bool found = false;

    cout << "Enter roll number to update: ";
    cin >> targetRoll;

    for (int i = 0; i < count; i++) {
        if (rollNo[i] == targetRoll) {
            cout << "Enter new marks: ";
            cin >> marks[i];
            cout << "Marks updated successfully!\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }
}

void deleteStudent(string names[], int rollNo[], float marks[], int &count) {
    int targetRoll;
    bool found = false;

    cout << "Enter roll number to delete: ";
    cin >> targetRoll;

    for (int i = 0; i < count; i++) {
        if (rollNo[i] == targetRoll) {
            for (int j = i; j < count - 1; j++) {
                names[j] = names[j + 1];
                rollNo[j] = rollNo[j + 1];
                marks[j] = marks[j + 1];
            }
            count--;
            cout << "Student deleted successfully!\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }
}

int main() {
    string names[MAX_STUDENTS];
    int rollNo[MAX_STUDENTS];
    float marks[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(names, rollNo, marks, count);
                break;
            case 2:
                displayStudents(names, rollNo, marks, count);
                break;
            case 3:
                searchStudent(names, rollNo, marks, count);
                break;
            case 4:
                updateStudentMarks(names, rollNo, marks, count);
                break;
            case 5:
                deleteStudent(names, rollNo, marks, count);
                break;
            case 6:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
