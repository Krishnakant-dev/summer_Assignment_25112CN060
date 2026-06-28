// Write a program to Find duplicates in array.
#include <iostream>
using namespace std;
//
void findDuplicates(int arr[], int n) {
    cout << "Duplicates in the array are: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
}

int main() {
    int arr[] = {10, 20, 80, 30, 60, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    findDuplicates(arr, n);
    return 0;
    
}
