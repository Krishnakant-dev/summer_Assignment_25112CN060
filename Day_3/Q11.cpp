// Write a program to Find GCD of two numbers.
#include<iostream>
using namespace std;

int main(){

    cout<<"Enter two numbers whose HCF you want to find!"<<endl;
    int n1;
    int n2;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;

    int x = n1;
    int y = n2;

    n1 = abs(n1);
    n2 = abs(n2);

    while(n2 != 0){
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    
    cout<<"GCD Of "<< x <<" and " << y <<" is "<<n1<<endl;
    return 0;
}