//Write function for perfect number.
#include <iostream>
using namespace std;

bool isPerfect(int num) {
    if (num <= 1) {
        return false;
    }

    int sum = 1; // 1 is a divisor of every number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) { // Avoid counting the square root twice for perfect squares
                sum += num / i;
            }
        }
    }

    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfect(num)) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}