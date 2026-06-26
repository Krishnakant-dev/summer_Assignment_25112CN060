#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main ()
{
    long long sum,n;
    cout << "Enter the number of terms:";
    cin >> n;
    sum = n *(n+1) /2;
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}