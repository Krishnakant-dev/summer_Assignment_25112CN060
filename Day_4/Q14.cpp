#include <iostream>
using namespace std;

int fibonacci(int n){
    int prev2 = 0,prev1 = 1, curr = 0;
    if(n == 1) return prev2;
    else if(n == 2) return prev1;
    else{
        for (int i = 2; i < n; i++)
        {
            curr = prev2 + prev1;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
    return -1;
}

int main(){
    // Q-Write a program to Find nth Fibonacci term. 
    int n;
    cout << "Enter which term of fibonacci series to get" << endl;
    cin >> n;
    cout << n << "th term of series is " << fibonacci(n);
    return 0;
}