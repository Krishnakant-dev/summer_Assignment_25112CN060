// Write a program to Find missing number in array.

#include<bits/stdc++.h>
using namespace std;

int findMissingNum(vector<int>&arr){
    int n = arr.size();
    int sum1 = (n*(n+1))/2;
    int sum2 = 0;
    for(int i = 0; i<n; i++){
        sum2 = sum2 + arr[i];
    }
    return sum1 - sum2;
}

int main(){
    vector<int> arr = {0, 1, 2, 4, 5, 6};
    cout << "Missing Number: " << findMissingNum(arr);
    return 0;
}