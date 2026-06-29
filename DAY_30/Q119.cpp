#include <iostream>
#include <limits>
#include <string>
#include <vector>

struct Employee {
    std::string name;
    int id;
    double salary;
};

void printMenu() {
    std::cout << "Mini Employee Management System\n";
    std::cout << "1. Add employee\n";
    std::cout << "2. Display employees\n";
    std::cout << "3. Search employee by ID\n";
    std::cout << "4. Update salary\n";
    std::cout << "5. Remove employee\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter your choice: ";
}

int readInt(const std::string &prompt) {
    int value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;
        if (!std::cin.fail()) {
            return value;
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter an integer.\n";
    }
}

double readDouble(const std::string &prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;
        if (!std::cin.fail()) {
            return value;
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a number.\n";
    }
}

int findEmployee(const std::vector<Employee> &employees, int id) {
    for (size_t i = 0; i < employees.size(); ++i) {
        if (employees[i].id == id) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int main() {
    std::vector<Employee> employees;
    int choice;

    do {
        printMenu();
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice. Please enter a number from 1 to 6.\n\n";
            continue;
        }

        switch (choice) {
            case 1: {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                Employee emp;
                std::cout << "Enter employee name: ";
                std::getline(std::cin, emp.name);
                emp.id = readInt("Enter employee ID: ");
                if (findEmployee(employees, emp.id) != -1) {
                    std::cout << "Employee ID already exists.\n";
                    break;
                }
                emp.salary = readDouble("Enter employee salary: ");
                employees.push_back(emp);
                std::cout << "Employee added.\n";
                break;
            }
            case 2:
                if (employees.empty()) {
                    std::cout << "No employees found.\n";
                } else {
                    std::cout << "Employee list:\n";
                    for (const auto &emp : employees) {
                        std::cout << "Name: " << emp.name << ", ID: " << emp.id << ", Salary: " << emp.salary << "\n";
                    }
                }
                break;
            case 3: {
                int id = readInt("Enter employee ID to search: ");
                int index = findEmployee(employees, id);
                if (index == -1) {
                    std::cout << "Employee not found.\n";
                } else {
                    const auto &emp = employees[index];
                    std::cout << "Name: " << emp.name << ", ID: " << emp.id << ", Salary: " << emp.salary << "\n";
                }
                break;
            }
            case 4: {
                int id = readInt("Enter employee ID to update salary: ");
                int index = findEmployee(employees, id);
                if (index == -1) {
                    std::cout << "Employee not found.\n";
                } else {
                    employees[index].salary = readDouble("Enter new salary: ");
                    std::cout << "Salary updated.\n";
                }
                break;
            }
            case 5: {
                int id = readInt("Enter employee ID to remove: ");
                int index = findEmployee(employees, id);
                if (index == -1) {
                    std::cout << "Employee not found.\n";
                } else {
                    employees.erase(employees.begin() + index);
                    std::cout << "Employee removed.\n";
                }
                break;
            }
            case 6:
                std::cout << "Exiting employee management system.\n";
                break;
            default:
                std::cout << "Invalid choice. Please enter a number from 1 to 6.\n";
                break;
        }

        std::cout << "\n";
    } while (choice != 6);

    return 0;
}
