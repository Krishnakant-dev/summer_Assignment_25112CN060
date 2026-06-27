// Write a program to Print character triangle.
// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (char j = 'A'; j < 'A' + i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}