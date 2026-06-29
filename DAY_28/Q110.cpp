// Write a program to Create bank account system.
#include <iostream>
#include <vector>
#include <string>

class BankAccount {
private:
    std::string accountHolder;
    double balance;
    int accountNumber;

public:
    BankAccount(std::string holder, double initialBalance, int accNumber)
        : accountHolder(holder), balance(initialBalance), accountNumber(accNumber) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew: $" << amount << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

    void displayAccountInfo() const {
        std::cout << "Account Holder: " << accountHolder << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    BankAccount acc("John Doe", 1000.0, 12345);
    acc.displayAccountInfo();
    acc.deposit(500.0);
    acc.withdraw(200.0);
    acc.displayAccountInfo();
    return 0;
}