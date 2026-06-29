// Write a program to Compress a string.
#include <iostream>
#include <string>
using namespace std;

string compressString(const string& str) {
    if (str.empty()) return str;

    string compressed = "";
    char currentChar = str[0];
    int count = 1;

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == currentChar) {
            count++;
        } else {
            compressed += currentChar + to_string(count);
            currentChar = str[i];
            count = 1;
        }
    }
    compressed += currentChar + to_string(count);

    return compressed;
}

int main() {
    string str = "aaabbbcccaaa";
    string result = compressString(str);

    cout << "Original string: " << str << endl;
    cout << "Compressed string: " << result << endl;

    return 0;
}