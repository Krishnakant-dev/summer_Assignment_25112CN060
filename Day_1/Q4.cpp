#include <iostream>
using namespace std;

int main(){
    long long n;
    cout <<"Enter the value of n: " << endl;
    cin >> n;
    if (n < 0) {
        n = -n; 
    }

   
    int count = 0;
    do {
        count++;
        n /= 10; 
    } while (n > 0);

    cout << "The number of digits is: " << count << endl;
    return 0;
}