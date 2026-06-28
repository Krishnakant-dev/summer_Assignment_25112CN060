// Write a program to Find maximum frequency element.

#include<bits/stdc++.h>
using namespace std;

int maxFreqElement(vector<int>&arr){
    unordered_map<int, int>mpp;
    for(int num: arr){
        mpp[num]++;
    }
    int maxfreqel = arr[0];
    for(auto it : mpp){
        if(it.second > mpp[maxfreqel]){
            maxfreqel = it.first;
        }
    }
    return maxfreqel;
}


int main(){
    vector<int> arr = {1, 2, 3, 2, 4, 2, 5, 1};
    cout << "Maximum frequency element: " << maxFreqElement(arr);

    return 0;
}