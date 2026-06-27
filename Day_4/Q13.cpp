// Write a program to generate fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of fibonacci series terms you want: ";
    cin >> n;

    int first = 0;
    int second = 1;
    for(int i=0; i<=n-1; i++){
        cout << first<< " ";
        int fib = first + second;
        first = second;
        second = fib;
    }
    return 0;
}