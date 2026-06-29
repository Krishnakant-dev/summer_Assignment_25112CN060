// Write a program to Find longest word.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words = {"apple", "pie", "banana", "cat"};
    string longestWord = "";

    for (const auto& word : words) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord << endl;

    return 0;
}