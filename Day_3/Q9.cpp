//Write a program to Check whether a number is prime
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    bool flag = true;
    for(int i = 2; i < n; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout<<"Given number is a prime number"<<endl;
    }
    else cout<<"Given number is not a prime number"<<endl;
    
    return 0;

}