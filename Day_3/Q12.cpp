// Write a program to Find LCM of two numbers.
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter two numbers whose LCM you want to find!"<<endl;
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

    if(n1 == 0 || n2 == 0){
        cout << "LCM of " << x << " and " << y << " is 0" << endl;
        return 0;
    }

    int lcm;
    if(n1 > n2){
        lcm = n1;
    }
    else{
        lcm = n2;
    }

    while(true){
        if(lcm % n1 == 0 && lcm % n2 == 0){
            cout<<"LCM of "<< x <<" and " << y <<" is "<<lcm<<endl;
            break;
        }
        lcm++;
    }
    return 0;
}