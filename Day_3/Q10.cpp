// Write a program to Print prime numbers in a range.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Range: ";
    cin>>n;
    for(int i = 2; i<=n; i++){
        bool flag = true; 
        for(int j = 2; j < i; j++){
            if(i%j==0){
                flag = false; 
                break;   
            }
        }
        if(flag == true){
            cout<<i<<endl;
        }
    }


    return 0;
}