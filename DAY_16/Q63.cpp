// Write a program to Find pair with given sum.

#include<bits/stdc++.h>
using namespace std;

vector<int>pairSum(vector<int>&arr, int sum){
    int n = arr.size();
    unordered_map<int, int>mpp;
    for(int i=0; i<n; i++){
        int num = arr[i];
        int reqSum = sum - num;
        if(mpp.find(reqSum) != mpp.end()){
            return {i, mpp[reqSum]};
        }
        else{
            mpp[num] = i;
        }

    }
    return  {-1, -1};
}


int main(){

    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pairSum(arr, target);
    cout << ans[0] << " " << ans[1];

    return 0;
}