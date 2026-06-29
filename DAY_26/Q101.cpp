// Write a program to Sort words by length.
#include <bits/stdc++.h>
using namespace std;

bool sortByLength(const string& a, const string& b) {
    return a.length() < b.length();
}

int main() {
    vector<string> words = {"apple", "pie", "banana", "cat"};

    sort(words.begin(), words.end(), sortByLength);

    cout << "Words sorted by length:" << endl;
    for (const auto& word : words) {
        cout << word << endl;
    }

    return 0;
}