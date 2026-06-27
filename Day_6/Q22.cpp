// Write a program to Convert binary to decimal.
#include <iostream>
using namespace std;

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int x = 1; 

    while (binary > 0) {
        int ld = binary % 10;

        decimal = decimal + ld * x;

        x = x * 2;
        binary = binary / 10;
    }

    cout << "Decimal number is: " << decimal << endl;

    return 0;
}