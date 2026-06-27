// Write a program to Recursive reverse number. 
#include <iostream>
using namespace std;

int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    
    rev = rev * 10 + n % 10;
    return reverseNumber(n / 10, rev);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Reversed number: " << reverseNumber(n, 0) << endl;
    return 0;
}