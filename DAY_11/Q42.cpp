// Write function to find maximum.

#include <bits/stdc++.h>
using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}



int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int maxNum = findMax(num1, num2);
    cout << "The maximum of " << num1 << " and " << num2 << " is: " << maxNum << endl;

    return 0;
}