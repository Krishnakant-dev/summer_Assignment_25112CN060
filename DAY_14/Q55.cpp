// Write a program to Second largest element.
#include <iostream>
using namespace std;
//
int secondLargest(int arr[], int n) {
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;

}

int main() {
    int arr[] = {10, 20, 80, 30, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = secondLargest(arr, n);
    cout << "Second largest element is " << result;
    return 0;
    
}
