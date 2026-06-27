// Write a program to Print factors of a number.

#include<iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter a number: ";
    cin >> n;

    cout<<"Factors of "<<n<<" are: "<<endl;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            cout<<i<<endl;
        }
    }

    return 0;
}