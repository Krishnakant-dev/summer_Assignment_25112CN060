// Write a program to Create quiz application.

#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int answer;

    cout << "Welcome to the Quiz Application!" << endl;

    cout << "Question 1: What is the capital of France?" << endl;
    cout << "1. Berlin" << endl;
    cout << "2. Madrid" << endl;
    cout << "3. Paris" << endl;
    cout << "4. Rome" << endl;
    cout << "Enter your answer (1-4): ";
    cin >> answer;

    if (answer == 3) {
        score++;
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is Paris." << endl;
    }

    cout << "\nQuestion 2: What is 5 + 7?" << endl;
    cout << "1. 10" << endl;
    cout << "2. 11" << endl;
    cout << "3. 12" << endl;
    cout << "4. 13" << endl;
    cout << "Enter your answer (1-4): ";
    cin >> answer;

    if (answer == 3) {
        score++;
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is 12." << endl;
    }

    cout<<"\nQuestion 3: Who wrote 'Romeo and Juliet'?" << endl;
    cout << "1. William Shakespeare" << endl;
    cout << "2. Charles Dickens" << endl;
    cout << "3. Mark Twain" << endl;
    cout << "4. Jane Austen" << endl;

    cout << "Enter your answer (1-4): ";
    cin >> answer;

    if (answer == 1) {
        score++;
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is William Shakespeare." << endl;
    }

    cout << "\nYour total score is: " << score << "/3" << endl;

    return 0;
}