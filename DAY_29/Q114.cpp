#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

void showMenu() {
    std::cout << "Menu-driven Array Operations\n";
    std::cout << "1. Create/Reset array\n";
    std::cout << "2. Display array\n";
    std::cout << "3. Insert element\n";
    std::cout << "4. Delete element\n";
    std::cout << "5. Search element\n";
    std::cout << "6. Sort array\n";
    std::cout << "7. Exit\n";
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

void displayArray(const std::vector<int> &arr) {
    if (arr.empty()) {
        std::cout << "Array is empty.\n";
        return;
    }
    std::cout << "Array contents: ";
    for (int value : arr) {
        std::cout << value << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> arr;
    int choice;

    do {
        showMenu();
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice. Please select a number from 1 to 7.\n\n";
            continue;
        }

        switch (choice) {
            case 1: {
                int n = readInt("Enter number of elements: ");
                if (n < 0) {
                    std::cout << "Number of elements cannot be negative.\n";
                    break;
                }
                arr.clear();
                arr.reserve(n);
                for (int i = 0; i < n; ++i) {
                    arr.push_back(readInt("Enter element: "));
                }
                std::cout << "Array created.\n";
                break;
            }
            case 2:
                displayArray(arr);
                break;
            case 3: {
                int value = readInt("Enter element to insert: ");
                int index = readInt("Enter position (0-based index): ");
                if (index < 0 || index > static_cast<int>(arr.size())) {
                    std::cout << "Invalid position.\n";
                } else {
                    arr.insert(arr.begin() + index, value);
                    std::cout << "Element inserted.\n";
                }
                break;
            }
            case 4: {
                if (arr.empty()) {
                    std::cout << "Array is already empty.\n";
                    break;
                }
                int index = readInt("Enter position to delete (0-based index): ");
                if (index < 0 || index >= static_cast<int>(arr.size())) {
                    std::cout << "Invalid position.\n";
                } else {
                    arr.erase(arr.begin() + index);
                    std::cout << "Element deleted.\n";
                }
                break;
            }
            case 5: {
                if (arr.empty()) {
                    std::cout << "Array is empty.\n";
                    break;
                }
                int value = readInt("Enter element to search: ");
                auto it = std::find(arr.begin(), arr.end(), value);
                if (it != arr.end()) {
                    std::cout << "Element found at position " << std::distance(arr.begin(), it) << ".\n";
                } else {
                    std::cout << "Element not found.\n";
                }
                break;
            }
            case 6:
                if (arr.empty()) {
                    std::cout << "Array is empty.\n";
                } else {
                    std::sort(arr.begin(), arr.end());
                    std::cout << "Array sorted in ascending order.\n";
                }
                break;
            case 7:
                std::cout << "Exiting array operations system.\n";
                break;
            default:
                std::cout << "Invalid choice. Please select a number from 1 to 7.\n";
                break;
        }
        std::cout << "\n";
    } while (choice != 7);

    return 0;
}
