// Write a program to Find nth Fibonacci term. 
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid input";
        return 0;
    }
    int first = 0;
    int second = 1;
    for(int i=0; i<n; i++){
        if(i == n-1){
            cout<<n<< "th Fibonacci term is: "<<first<<endl;
        }
        int fib = first + second;
        first = second;
        second = fib;
    }
    return 0;
}