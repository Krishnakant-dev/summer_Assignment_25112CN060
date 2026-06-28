// Write a program to Find row-wise sum.

#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter rows and columns of the matrix: ";
    cin >> r >> c;
    int matrix[r][c];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Row-wise sums:\n";
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += matrix[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }

    return 0;
}