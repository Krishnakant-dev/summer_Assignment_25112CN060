//Write a program to Find sum of digits of a number
#include <iostream>
using namespace std;

int main(){
    long long n, sum = 0;
    cout <<"Enter the value of n: " << endl;
    cin >> n;
    if (n < 0) {
        n = -n; 
    }
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of digits is: " << sum << endl;
    return 0;
}