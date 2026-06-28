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

    char firstNonRepeating = '\0';
    for (char ch : str) {
        if (freq[ch] == 1) {
            firstNonRepeating = ch;
            break;
        }
    }

    if (firstNonRepeating != '\0') {
        cout << "First non-repeating character: " << firstNonRepeating << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }

    return 0;
}
