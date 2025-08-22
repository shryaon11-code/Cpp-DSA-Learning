#include <iostream>
using namespace std;

int main() {

    // 1. Right-Angled Triangle
    cout << "Right-Angled Triangle:\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // 2. Ascending Number Pattern
    cout << "\nAscending Number Pattern:\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // 3. Number Pattern - 02 (Row repeated numbers)
    cout << "\nNumber Pattern - Row repeated:\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    // 4. Reverse Number Pattern
    cout << "\nReverse Number Pattern:\n";
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // 5. Alphabet Pattern
    cout << "\nAlphabet Pattern:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    // 6. Star Pattern (Inverted Triangle)
    cout << "\nInverted Triangle Star Pattern:\n";
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
