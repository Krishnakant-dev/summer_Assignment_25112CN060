#include <iostream>
#include <limits>
#include <string>
#include <vector>

struct Item {
    std::string name;
    int quantity;
    double price;
};

void printMenu() {
    std::cout << "Inventory Management System\n";
    std::cout << "1. Add item\n";
    std::cout << "2. Display inventory\n";
    std::cout << "3. Update item quantity\n";
    std::cout << "4. Remove item\n";
    std::cout << "5. Search item\n";
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
        std::cout << "Invalid input. Please enter a number.\n";
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
        std::cout << "Invalid input. Please enter a valid number.\n";
    }
}

void displayInventory(const std::vector<Item> &inventory) {
    if (inventory.empty()) {
        std::cout << "Inventory is empty.\n";
        return;
    }
    std::cout << "Current inventory:\n";
    std::cout << "Index | Name | Quantity | Price\n";
    for (size_t i = 0; i < inventory.size(); ++i) {
        const Item &item = inventory[i];
        std::cout << i << " | " << item.name << " | " << item.quantity << " | " << item.price << "\n";
    }
}

int findItem(const std::vector<Item> &inventory, const std::string &name) {
    for (size_t i = 0; i < inventory.size(); ++i) {
        if (inventory[i].name == name) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int main() {
    std::vector<Item> inventory;
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
                Item item;
                std::cout << "Enter item name: ";
                std::getline(std::cin, item.name);
                item.quantity = readInt("Enter item quantity: ");
                item.price = readDouble("Enter item price: ");
                inventory.push_back(item);
                std::cout << "Item added.\n";
                break;
            }
            case 2:
                displayInventory(inventory);
                break;
            case 3: {
                if (inventory.empty()) {
                    std::cout << "Inventory is empty.\n";
                    break;
                }
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter item name to update: ";
                std::string name;
                std::getline(std::cin, name);
                int index = findItem(inventory, name);
                if (index == -1) {
                    std::cout << "Item not found.\n";
                } else {
                    inventory[index].quantity = readInt("Enter new quantity: ");
                    std::cout << "Quantity updated.\n";
                }
                break;
            }
            case 4: {
                if (inventory.empty()) {
                    std::cout << "Inventory is empty.\n";
                    break;
                }
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter item name to remove: ";
                std::string name;
                std::getline(std::cin, name);
                int index = findItem(inventory, name);
                if (index == -1) {
                    std::cout << "Item not found.\n";
                } else {
                    inventory.erase(inventory.begin() + index);
                    std::cout << "Item removed.\n";
                }
                break;
            }
            case 5: {
                if (inventory.empty()) {
                    std::cout << "Inventory is empty.\n";
                    break;
                }
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter item name to search: ";
                std::string name;
                std::getline(std::cin, name);
                int index = findItem(inventory, name);
                if (index == -1) {
                    std::cout << "Item not found.\n";
                } else {
                    const Item &item = inventory[index];
                    std::cout << "Found: " << item.name << " | Quantity: " << item.quantity << " | Price: " << item.price << "\n";
                }
                break;
            }
            case 6:
                std::cout << "Exiting inventory management system.\n";
                break;
            default:
                std::cout << "Invalid choice. Please enter a number from 1 to 6.\n";
                break;
        }

        std::cout << "\n";
    } while (choice != 6);

    return 0;
}
