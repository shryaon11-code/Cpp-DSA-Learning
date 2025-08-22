#include <iostream>
using namespace std;

int main() {
    int n;

    // While loop: Print numbers from 1 to n
    cout << "Enter n: ";
    cin >> n;
    int i = 1;
    cout << "\nNumbers from 1 to " << n << ": ";
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // Multiplication Table
    int num;
    cout << "\nEnter number for multiplication table: ";
    cin >> num;
    i = 1;
    while (i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    // Factors of a number
    cout << "\nFactors of " << num << ": ";
    i = 1;
    while (i <= num) {
        if (num % i == 0) cout << i << " ";
        i++;
    }
    cout << endl;

    // Print even & odd numbers up to n
    cout << "\nEven numbers up to " << n << ": ";
    i = 0;
    while (i <= n) {
        if (i % 2 == 0) cout << i << " ";
        i++;
    }
    cout << "\nOdd numbers up to " << n << ": ";
    i = 0;
    while (i <= n) {
        if (i % 2 != 0) cout << i << " ";
        i++;
    }
    cout << endl;

    // Do-While Example
    cout << "\nDo-While Loop (Sum of n natural numbers):\n";
    int sum = 0;
    i = 1;
    do {
        sum += i;
        i++;
    } while (i <= n);
    cout << "Sum = " << sum << endl;

    // Break and Continue
    cout << "\nBreak and Continue Example:\n";
    for (int j = 1; j <= 10; j++) {
        if (j == 5) continue; // skip 5
        if (j == 8) break;    // stop at 8
        cout << j << " ";
    }
    cout << endl;

    // Switch Example
    int choice;
    cout << "\nMenu:\n1. Add\n2. Subtract\n3. Multiply\nEnter choice: ";
    cin >> choice;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice) {
        case 1:
            cout << "Sum = " << a + b << endl;
            break;
        case 2:
            cout << "Difference = " << a - b << endl;
            break;
        case 3:
            cout << "Product = " << a * b << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    // Scope Example
    cout << "\nScope Example:\n";
    int val = 100;
    cout << "Outside block: " << val << endl;
    {
        int val = 200; // shadows outer val
        cout << "Inside block: " << val << endl;
    }
    cout << "Back to outer: " << val << endl;

    return 0;
}
