#include <iostream>
using namespace std;

int main() {

    int n = 5;

    // 1. Pyramid Star Pattern (with spaces)
    cout << "Pyramid Star Pattern:\n";
    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // 2. Inverted Pyramid Star Pattern
    cout << "\nInverted Pyramid Star Pattern:\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // 3. Number Pyramid
    cout << "\nNumber Pyramid:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    // 4. Diamond Star Pattern
    cout << "\nDiamond Star Pattern:\n";
    // upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << "* ";
        cout << endl;
    }
    // lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << "* ";
        cout << endl;
    }

    return 0;
}
