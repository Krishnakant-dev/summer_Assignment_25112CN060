#include <iostream>
#include <limits>
#include <string>
#include <vector>

struct Book {
    std::string title;
    std::string author;
    int copies;
};

void printMenu() {
    std::cout << "Mini Library System\n";
    std::cout << "1. Add book\n";
    std::cout << "2. Display books\n";
    std::cout << "3. Search book by title\n";
    std::cout << "4. Borrow book\n";
    std::cout << "5. Return book\n";
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

int findBook(const std::vector<Book> &books, const std::string &title) {
    for (size_t i = 0; i < books.size(); ++i) {
        if (books[i].title == title) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int main() {
    std::vector<Book> books;
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
                Book book;
                std::cout << "Enter book title: ";
                std::getline(std::cin, book.title);
                std::cout << "Enter author name: ";
                std::getline(std::cin, book.author);
                book.copies = readInt("Enter number of copies: ");
                books.push_back(book);
                std::cout << "Book added.\n";
                break;
            }
            case 2:
                if (books.empty()) {
                    std::cout << "No books in the library.\n";
                } else {
                    std::cout << "Library books:\n";
                    for (const auto &book : books) {
                        std::cout << "Title: " << book.title << ", Author: " << book.author
                                  << ", Copies: " << book.copies << "\n";
                    }
                }
                break;
            case 3: {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter book title to search: ";
                std::string title;
                std::getline(std::cin, title);
                int index = findBook(books, title);
                if (index == -1) {
                    std::cout << "Book not found.\n";
                } else {
                    const Book &book = books[index];
                    std::cout << "Found: Title: " << book.title << ", Author: " << book.author
                              << ", Copies: " << book.copies << "\n";
                }
                break;
            }
            case 4: {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter book title to borrow: ";
                std::string title;
                std::getline(std::cin, title);
                int index = findBook(books, title);
                if (index == -1) {
                    std::cout << "Book not found.\n";
                } else if (books[index].copies <= 0) {
                    std::cout << "No copies available to borrow.\n";
                } else {
                    books[index].copies--;
                    std::cout << "Book borrowed successfully.\n";
                }
                break;
            }
            case 5: {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter book title to return: ";
                std::string title;
                std::getline(std::cin, title);
                int index = findBook(books, title);
                if (index == -1) {
                    std::cout << "Book not found.\n";
                } else {
                    books[index].copies++;
                    std::cout << "Book returned successfully.\n";
                }
                break;
            }
            case 6:
                std::cout << "Exiting mini library system.\n";
                break;
            default:
                std::cout << "Invalid choice. Please enter a number from 1 to 6.\n";
                break;
        }

        std::cout << "\n";
    } while (choice != 6);

    return 0;
}
