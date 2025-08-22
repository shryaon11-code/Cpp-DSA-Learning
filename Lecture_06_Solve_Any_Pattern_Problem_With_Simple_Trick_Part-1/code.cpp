#include <iostream>
using namespace std;

int main() {

    // 1. Solid Rectangle (5 rows x 4 columns)
    cout << "Solid Rectangle:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // 2. Number Pattern - Repeated row number
    cout << "\nNumber Pattern (Row number repeated):\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    // 3. Number Pattern - Increasing sequence
    cout << "\nIncreasing Number Pattern:\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // 4. Descending Number Pattern
    cout << "\nDescending Number Pattern:\n";
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // 5. Alphabet Pattern - Using ASCII values
    cout << "\nAlphabet Pattern:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
