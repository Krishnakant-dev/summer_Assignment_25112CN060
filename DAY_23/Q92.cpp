// Write a program to Find maximum occurring character.
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char findMaxOccurring(const string& str) {
    unordered_map<char, int> charCount;
    
    for (char c : str) {
        charCount[c]++;
    }
    
    char maxChar = '\0';
    int maxCount = 0;
    
    for (const auto& pair : charCount) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxChar = pair.first;
        }
    }
    
    return maxChar;
}

int main() {
    string str = "abccba";
    char result = findMaxOccurring(str);
    
    if (result != '\0') {
        cout << "Maximum occurring character is: " << result << endl;
    } else {
        cout << "No character found." << endl;
    }
    
    return 0;
}