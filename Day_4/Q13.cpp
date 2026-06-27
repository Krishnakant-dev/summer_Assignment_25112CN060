#include <iostream>
using namespace std;

void fibonacci(int n){
    int prev2 = 0,prev1 = 1,curr = 0;

    if(n == 1) cout << prev2;
    else if(n == 2) cout << prev2 << " " << prev1;
    else{
        cout << prev2 << " " << prev1;
        for (int i = 2; i < n; i++)
        {
            // resetting variables for next iteration
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
        cout << " " << curr;
        }
    }
}
int main(){
    // Q-Write a program to generate fibanacci series
    int n;
    cout << "Enter the number of terms of fibonacci series to print";
    cin >> n;
    fibonacci(n);
    return 0;
}