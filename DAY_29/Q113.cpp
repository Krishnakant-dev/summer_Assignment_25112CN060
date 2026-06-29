#include <iostream>
#include <limits>

int main() {
    int choice;
    double a, b;

    do {
        std::cout << "Menu-driven Calculator\n";
        std::cout << "1. Add\n";
        std::cout << "2. Subtract\n";
        std::cout << "3. Multiply\n";
        std::cout << "4. Divide\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number from 1 to 5.\n\n";
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            std::cout << "Enter first number: ";
            std::cin >> a;
            std::cout << "Enter second number: ";
            std::cin >> b;
        }

        switch (choice) {
            case 1:
                std::cout << "Result: " << (a + b) << "\n\n";
                break;
            case 2:
                std::cout << "Result: " << (a - b) << "\n\n";
                break;
            case 3:
                std::cout << "Result: " << (a * b) << "\n\n";
                break;
            case 4:
                if (b == 0) {
                    std::cout << "Error: Division by zero is not allowed.\n\n";
                } else {
                    std::cout << "Result: " << (a / b) << "\n\n";
                }
                break;
            case 5:
                std::cout << "Exiting calculator.\n";
                break;
            default:
                std::cout << "Invalid choice. Please select from 1 to 5.\n\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
