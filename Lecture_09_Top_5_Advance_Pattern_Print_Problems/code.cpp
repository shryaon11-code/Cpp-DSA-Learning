#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // 1. Pyramid Pattern
    cout << "Pyramid Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << "*";
        cout << endl;
    }

    // 2. Diamond Pattern
    cout << "\nDiamond Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << "*";
        cout << endl;
    }

    // 3. Hollow Rectangle
    cout << "\nHollow Rectangle:\n";
    int rows = 5, cols = 7;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // 4. Number Pyramid
    cout << "\nNumber Pyramid:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << j << " ";
        cout << endl;
    }

    // 5. Floyd’s Triangle
    cout << "\nFloyd's Triangle:\n";
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }

    return 0;
}
