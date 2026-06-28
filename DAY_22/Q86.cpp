// Write a program to Count words in a sentence.

#include <iostream>
using namespace std;

int main() {
    char str[100];
    int wordCount = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    bool inWord = false;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && !inWord) {
            inWord = true;
            wordCount++;
        } else if (str[i] == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words in the sentence: " << wordCount << endl;

    return 0;
}