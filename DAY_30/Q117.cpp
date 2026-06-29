#include <iostream>
#include <limits>
#include <string>

const int MAX_STUDENTS = 100;

struct Student {
    std::string name;
    int rollNumber;
    double marks;
};

int menu() {
    std::cout << "Student Record System\n";
    std::cout << "1. Add student\n";
    std::cout << "2. Display all students\n";
    std::cout << "3. Search student by roll number\n";
    std::cout << "4. Update student marks\n";
    std::cout << "5. Delete student by roll number\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter your choice: ";

    int choice;
    std::cin >> choice;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return -1;
    }
    return choice;
}

int findStudent(Student students[], int count, int rollNumber) {
    for (int i = 0; i < count; ++i) {
        if (students[i].rollNumber == rollNumber) {
            return i;
        }
    }
    return -1;
}

int main() {
    Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    do {
        choice = menu();
        std::cout << "\n";

        switch (choice) {
            case 1: {
                if (studentCount >= MAX_STUDENTS) {
                    std::cout << "Student list is full.\n";
                    break;
                }
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter student name: ";
                std::getline(std::cin, students[studentCount].name);

                std::cout << "Enter roll number: ";
                std::cin >> students[studentCount].rollNumber;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid roll number.\n";
                    break;
                }

                std::cout << "Enter marks: ";
                std::cin >> students[studentCount].marks;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid marks.\n";
                    break;
                }

                if (findStudent(students, studentCount, students[studentCount].rollNumber) != -1) {
                    std::cout << "Roll number already exists.\n";
                } else {
                    studentCount++;
                    std::cout << "Student record added.\n";
                }
                break;
            }
            case 2:
                if (studentCount == 0) {
                    std::cout << "No student records available.\n";
                } else {
                    std::cout << "Student Records:\n";
                    for (int i = 0; i < studentCount; ++i) {
                        std::cout << "Name: " << students[i].name << ", Roll: " << students[i].rollNumber
                                  << ", Marks: " << students[i].marks << "\n";
                    }
                }
                break;
            case 3: {
                std::cout << "Enter roll number to search: ";
                int roll;
                std::cin >> roll;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid roll number.\n";
                    break;
                }
                int index = findStudent(students, studentCount, roll);
                if (index == -1) {
                    std::cout << "Student not found.\n";
                } else {
                    std::cout << "Name: " << students[index].name << ", Roll: " << students[index].rollNumber
                              << ", Marks: " << students[index].marks << "\n";
                }
                break;
            }
            case 4: {
                std::cout << "Enter roll number to update marks: ";
                int roll;
                std::cin >> roll;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid roll number.\n";
                    break;
                }
                int index = findStudent(students, studentCount, roll);
                if (index == -1) {
                    std::cout << "Student not found.\n";
                } else {
                    std::cout << "Enter new marks: ";
                    std::cin >> students[index].marks;
                    if (std::cin.fail()) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "Invalid marks.\n";
                    } else {
                        std::cout << "Marks updated.\n";
                    }
                }
                break;
            }
            case 5: {
                std::cout << "Enter roll number to delete: ";
                int roll;
                std::cin >> roll;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid roll number.\n";
                    break;
                }
                int index = findStudent(students, studentCount, roll);
                if (index == -1) {
                    std::cout << "Student not found.\n";
                } else {
                    for (int i = index; i < studentCount - 1; ++i) {
                        students[i] = students[i + 1];
                    }
                    studentCount--;
                    std::cout << "Student record deleted.\n";
                }
                break;
            }
            case 6:
                std::cout << "Exiting student record system.\n";
                break;
            default:
                std::cout << "Invalid choice. Please select a number from 1 to 6.\n";
                break;
        }

        std::cout << "\n";
    } while (choice != 6);

    return 0;
}
