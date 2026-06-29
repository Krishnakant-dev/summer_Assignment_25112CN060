#include <algorithm>
#include <iostream>
#include <limits>
#include <string>

void showMenu() {
    std::cout << "Menu-driven String Operations\n";
    std::cout << "1. Enter/Reset string\n";
    std::cout << "2. Display string\n";
    std::cout << "3. Length of string\n";
    std::cout << "4. Convert to uppercase\n";
    std::cout << "5. Convert to lowercase\n";
    std::cout << "6. Reverse string\n";
    std::cout << "7. Find substring\n";
    std::cout << "8. Exit\n";
    std::cout << "Enter your choice: ";
}

int readChoice() {
    int choice;
    std::cin >> choice;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return -1;
    }
    return choice;
}

int main() {
    std::string str;
    int choice;

    do {
        showMenu();
        choice = readChoice();

        if (choice == -1) {
            std::cout << "Invalid input. Please enter a number from 1 to 8.\n\n";
            continue;
        }

        switch (choice) {
            case 1: {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter new string: ";
                std::getline(std::cin, str);
                std::cout << "String saved.\n";
                break;
            }
            case 2:
                std::cout << "Current string: " << str << "\n";
                break;
            case 3:
                std::cout << "Length: " << str.length() << "\n";
                break;
            case 4: {
                std::string result = str;
                std::transform(result.begin(), result.end(), result.begin(), ::toupper);
                std::cout << "Uppercase: " << result << "\n";
                break;
            }
            case 5: {
                std::string result = str;
                std::transform(result.begin(), result.end(), result.begin(), ::tolower);
                std::cout << "Lowercase: " << result << "\n";
                break;
            }
            case 6: {
                std::string result = str;
                std::reverse(result.begin(), result.end());
                std::cout << "Reversed: " << result << "\n";
                break;
            }
            case 7: {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter substring to find: ";
                std::string substring;
                std::getline(std::cin, substring);
                size_t pos = str.find(substring);
                if (pos != std::string::npos) {
                    std::cout << "Substring found at position " << pos << ".\n";
                } else {
                    std::cout << "Substring not found.\n";
                }
                break;
            }
            case 8:
                std::cout << "Exiting string operations system.\n";
                break;
            default:
                std::cout << "Invalid choice. Please select a number from 1 to 8.\n";
                break;
        }

        std::cout << "\n";
    } while (choice != 8);

    return 0;
}
