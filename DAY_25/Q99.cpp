// Write a program to Sort names alphabetically.
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> names = {"Alice", "Bob", "Charlie", "David"};

    sort(names.begin(), names.end());

    cout << "Sorted names:" << endl;
    for (const auto& name : names) {
        cout << name << endl;
    }

    return 0;
}