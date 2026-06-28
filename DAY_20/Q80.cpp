// Write a program to Find column-wise sum.

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

    cout << "Column-wise sums:\n";
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += matrix[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << sum << endl;
    }

    return 0;
}