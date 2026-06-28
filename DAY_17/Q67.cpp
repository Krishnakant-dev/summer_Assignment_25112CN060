// Write a program to Intersection of arrays.

#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int a[n1];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int b[n2];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    set<int> st;

    // Store first array elements
    for (int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }

    cout << "Intersection of arrays: ";

    for (int i = 0; i < n2; i++) {
        if (st.find(b[i]) != st.end()) {
            cout << b[i] << " ";
            st.erase(b[i]);   // Remove after printing to avoid duplicates
        }
    }

    return 0;
}