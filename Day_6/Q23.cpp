//Write a program to Count set bits in a number.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int cnt = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            cnt++;
        }

        n = n / 2;
    }

    cout << "Number of set bits: " << cnt << endl;

    return 0;
}