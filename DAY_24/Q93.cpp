// Write a program to Check string rotation.
#include <iostream>
#include <string>
using namespace std;

bool isRotation(const string& str1, const string& str2) {

    if (str1.length() != str2.length()) {
        return false;
    }

    string concatenated = str1 + str1;


    return concatenated.find(str2) != string::npos;
}

int main() {
    string str1 = "abcdef";
    string str2 = "defabc";

    if (isRotation(str1, str2)) {
        cout << "The strings are rotations of each other." << endl;
    } else {
        cout << "The strings are not rotations of each other." << endl;
    }

    return 0;
}