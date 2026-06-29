// Write a program to Create library management system.
#include <iostream>
#include <vector>
#include <string>

class Book {
public:
    std::string title;
    std::string author;
    int isbn;
    bool isAvailable;

    Book(std::string t, std::string a, int i) : title(t), author(a), isbn(i), isAvailable(true) {}
};

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void displayBooks() {
        for (const auto& book : books) {
            std::cout << "Title: " << book.title << ", Author: " << book.author << ", ISBN: " << book.isbn << ", Available: " << (book.isAvailable ? "Yes" : "No") << std::endl;
        }
    }
};

int main() {
    Library lib;
    lib.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald", 123456789));
    lib.addBook(Book("To Kill a Mockingbird", "Harper Lee", 987654321));
    lib.displayBooks();
    return 0;
}