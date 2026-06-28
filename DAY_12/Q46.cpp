// Write a program to Write function for Armstrong.
#include <iostream>
using namespace std;  
#include <cmath>

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int n = 0;

    // Count the number of digits
    while (originalNum > 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate the sum of the nth powers of the digits
    while (originalNum > 0) {
        int digit = originalNum % 10;
        sum += pow(digit, n);
        originalNum /= 10;
    }

    return (sum == num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}