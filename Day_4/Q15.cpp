// Write a program to Check Armstrong number.
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin >> n;

    int original = n;
    int temp = n;
    int digits = 0; 

    if(temp ==0){
        digits = 1;
    }
    else{
        while(temp > 0){
            digits++;
            temp = temp/10;
        }
    }

    temp = n;
    int sum = 0;

    while(temp > 0){
        int ld = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= ld;
        }
        sum += power;
        temp = temp/10;
    }
    if(n == 0){
        sum = 0;
    }

    if (sum == original) cout << original << " is an Armstrong number." << endl;
    else cout << original << " is not an Armstrong number." << endl;

    return 0;
}