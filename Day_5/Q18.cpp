// Write a program to Check strong number

#include<iostream>
using namespace std;

int main() {
    int n, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n;
    while (temp > 0) {
        digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == n) {
        cout << n << " is a strong number." << endl;
    } else {
        cout << n << " is not a strong number." << endl;
    }
    return 0;
}