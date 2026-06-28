#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<char, int> freq;
    for (char ch : str) {
        freq[ch]++;
    }

    char firstRepeating = '\0';
    for (char ch : str) {
        if (freq[ch] > 1) {
            firstRepeating = ch;
            break;
        }
    }

    if (firstRepeating != '\0') {
        cout << "First repeating character: " << firstRepeating << endl;
    } else {
        cout << "No repeating character found." << endl;
    }

    return 0;
}
