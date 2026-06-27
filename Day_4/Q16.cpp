// Write a program to Print Armstrong numbers in a range.
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin >> n;

    cout<<"Armstrong numbers between 0 and "<<n<<" are: "<<endl;
    for(int i=0; i<=n; i++){
        int original = i;
        int temp = i;
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

        temp = i;
        int sum = 0;

        while(temp > 0){
            int ld = temp % 10;
            int power = 1;
            for (int j = 0; j < digits; j++) {
                power *= ld;
            }
            sum += power;
            temp = temp/10;
        }
        if(i == 0){
            sum = 0;
        }

        if (sum == original) cout << original << endl;
    }

    return 0;
}