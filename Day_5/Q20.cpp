// Write a program to Find largest prime factor of a number.
#include<iostream>
using namespace std;

int main() {
    int n, largestPrimeFactor = 1;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            bool isPrime = true;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                largestPrimeFactor = i;
            }
        }
    }

    cout << "The largest prime factor of " << n << " is: " << largestPrimeFactor << endl;

    return 0;
}