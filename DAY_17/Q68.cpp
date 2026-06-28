// Write a program to Find common elements.

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

  
    for (int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }

    cout << "Common elements: ";


    for (int i = 0; i < n2; i++) {
        if (st.find(b[i]) != st.end()) {
            cout << b[i] << " ";
            st.erase(b[i]);  
        }
    }

    return 0;
}