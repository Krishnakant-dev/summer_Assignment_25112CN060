// Write a program to Find common characters in strings.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> strings = {"hello", "world", "programming"};
    string commonChars = "";

    for (char c : strings[0]) {
        bool isCommon = true;
        for (int i = 1; i < strings.size(); i++) {
            if (strings[i].find(c) == string::npos) {
                isCommon = false;
                break;
            }
        }
        if (isCommon) {
            commonChars += c;
        }
    }

    cout << "Common characters: " << commonChars << endl;

    return 0;
}