//Write a program to Find products of digits.
#include <iostream>
using namespace std;

int main() {
    int num, product = 1, digit;
    
    cout << "Enter a number: ";
    cin >> num;
    
    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }
    
    // Handle 0 case
    if (num == 0) {
        cout << "Product of digits: 0" << endl;
        return 0;
    }
    
    // Extract each digit and multiply
    while (num > 0) {
        digit = num % 10;      // Get the last digit
        product = product * digit;
        num = num / 10;        // Remove the last digit
    }
    
    cout << "Product of digits: " << product << endl;
    
    return 0;
}
