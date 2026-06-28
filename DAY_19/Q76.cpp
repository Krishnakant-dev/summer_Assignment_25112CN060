// Write a program to Find diagonal sum.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of square matrix: ";
    cin >> n;
    int matrix[n][n];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int diagonalSum = 0;

    for (int i = 0; i < n; i++) {
        diagonalSum += matrix[i][i]; // Adding primary diagonal elements
    }

    cout << "Sum of the primary diagonal: " << diagonalSum << endl;

    return 0;
}