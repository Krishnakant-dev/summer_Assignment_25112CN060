// Write a program to Reverse a number.
#include <iostream>
using namespace std;

int main(){
    long long n, reversed = 0;
    cout <<"Enter the value of n: " << endl;
    cin >> n;
    if (n < 0) {
        n = -n; 
    }
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed number is: " << reversed << endl;
    return 0;
}