// Write a program to Create contact management system.
#include <iostream>
#include <vector>
#include <string>

class Contact {
public:
    std::string name;
    std::string phoneNumber;
    std::string email;

    Contact(std::string n, std::string ph, std::string e) : name(n), phoneNumber(ph), email(e) {}
};

class ContactManagementSystem {
private:
    std::vector<Contact> contacts;

public:
    void addContact(const Contact& contact) {
        contacts.push_back(contact);
    }

    void displayContacts() {
        for (const auto& contact : contacts) {
            std::cout << "Name: " << contact.name << ", Phone: " << contact.phoneNumber << ", Email: " << contact.email << std::endl;
        }
    }
};

int main() {
    ContactManagementSystem cms;
    cms.addContact(Contact("John Doe", "123-456-7890", "john.doe@example.com"));
    cms.addContact(Contact("Jane Smith", "098-765-4321", "jane.smith@example.com"));
    cms.displayContacts();
    return 0;
}