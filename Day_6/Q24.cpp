// Write a program to Find x^n without pow().
#include <iostream>
using namespace std;

int main() {
    int x, n;
    cout << "Enter base x: ";
    cin >> x;

    cout << "Enter power n: ";
    cin >> n;

    int result = 1;

    for (int i = 1; i <= n; i++) {
        result = result * x;
    }

    cout << x << "^" << n << " = " << result << endl;

    return 0;
}