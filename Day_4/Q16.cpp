#include <iostream>
using namespace std;

// Counting digits
int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int pow(int num, int power){
    int ans =1;
    for (int i = 0; i < power; i++)
    {
        ans *= num;
    }
    return ans;
}
// Function to check Armstrong number
bool armstrong(int n) {
    int original = n;
    int digits = countDigits(n);  // Count digits
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, digits);  
        n /= 10;
    }

    return sum == original;
}

int main(){
    // Q- Write a program to Print Armstrong numbers in a range
    int l,h;
    cout << "Enter upper and lower limit of ur range" << endl;
    cin >> l >> h;
    for (int i = l; i <= h; i++)
    {
        if((armstrong(i))) cout << i << " ";
    }
    
    return 0;
}