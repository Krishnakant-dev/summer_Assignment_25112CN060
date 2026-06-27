// Write a program to Print character pyramid. 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            char ch = 'A' + min(k - 1, 2 * i - 1 - k);
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}