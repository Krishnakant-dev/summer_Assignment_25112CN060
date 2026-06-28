// Write a program to Count even and odd elements.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "The number of even elements in the array is: " << evenCount << endl;
    cout << "The number of odd elements in the array is: " << oddCount << endl;

    return 0;
}