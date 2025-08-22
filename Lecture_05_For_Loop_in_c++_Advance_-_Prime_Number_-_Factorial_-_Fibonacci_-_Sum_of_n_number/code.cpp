#include <iostream>
using namespace std;

int main() {
    // Print numbers from 101 to 200
    for (int i = 101; i <= 200; i++) cout << i << " ";
    cout << endl;

    // Print alphabets 'a' to 'z'
    for (char ch = 'a'; ch <= 'z'; ch++) cout << ch << " ";
    cout << endl;

    // Print numbers in reverse order (from 10 to 1)
    for (int i = 10; i >= 1; i--) cout << i << " ";
    cout << endl;

    // Print numbers from 1 to 100 with difference of 3
    for (int i = 1; i <= 100; i += 3) cout << i << " ";
    cout << endl;

    // Multiplication table of a number
    int n;
    cout << "Enter number for table: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) cout << n << " x " << i << " = " << n * i << endl;

    // Power of a number (first approach)
    int base, exp, result = 1;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    for (int i = 1; i <= exp; i++) result *= base;
    cout << "Power = " << result << endl;

    // Sum of n natural numbers
    int sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) sum += i;
    cout << "Sum of n numbers = " << sum << endl;

    // Sum of squares of n natural numbers
    int sumSquares = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) sumSquares += i * i;
    cout << "Sum of squares = " << sumSquares << endl;

    // Factorial of a number
    int fact = 1;
    cout << "Enter number for factorial: ";
    cin >> n;
    for (int i = 1; i <= n; i++) fact *= i;
    cout << "Factorial = " << fact << endl;

    // Prime number check
    cout << "Enter number to check prime: ";
    cin >> n;
    bool isPrime = true;
    if (n <= 1) isPrime = false;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) cout << n << " is Prime" << endl;
    else cout << n << " is Not Prime" << endl;

    // Fibonacci series up to n terms
    int terms;
    cout << "Enter number of terms for Fibonacci: ";
    cin >> terms;
    int a = 0, b = 1;
    cout << "Fibonacci: " << a << " " << b << " ";
    for (int i = 3; i <= terms; i++) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;

    return 0;
}
