// Write a program to Frequency of an element.
#include <iostream>
using namespace std;

//
int countFrequency(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            count++;
    }
    return count;
}

int main() {
    int arr[] = {10, 20, 80, 30, 60, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;
    int frequency = countFrequency(arr, n, x);
    cout << "Frequency of " << x << " is " << frequency;
    return 0;
    
}
