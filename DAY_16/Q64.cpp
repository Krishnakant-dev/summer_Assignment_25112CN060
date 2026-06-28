// Write a program to Remove duplicates from array.

#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int>&arr){
    unordered_set<int>s;
    vector<int>ans;
    for(int num: arr){
        if(s.find(num) == s.end()){
            ans.push_back(num);
            s.insert(num);
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 2, 3, 2, 4, 2, 5, 1};
    vector<int> ans = removeDuplicates(arr);
    cout << "Array after removing duplicates: ";
    for(int num: ans){
        cout << num << " ";
    }
    return 0;
}

