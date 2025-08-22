#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;

    // Arithmetic Operators
    cout << "Arithmetic Operators:\n";
    cout << "a + b = " << (a + b) << endl;
    cout << "b - a = " << (b - a) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "b / a = " << (b / a) << endl;
    cout << "b % a = " << (b % a) << endl;

    // Unary Operators
    int x = 5;
    cout << "\nUnary Operators:\n";
    cout << "x = " << x << endl;
    cout << "Pre-increment ++x = " << (++x) << endl;
    cout << "Post-increment x++ = " << (x++) << endl;
    cout << "After post-increment, x = " << x << endl;

    // Comparison Operators
    cout << "\nComparison Operators:\n";
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;

    // Logical Operators
    cout << "\nLogical Operators:\n";
    cout << "(a < b && b < c): " << (a < b && b < c) << endl;
    cout << "(a < b || b > c): " << (a < b || b > c) << endl;
    cout << "!(a > b): " << !(a > b) << endl;

    // Largest among three numbers
    cout << "\nLargest among three numbers:\n";
    if (a >= b && a >= c)
        cout << "a is largest" << endl;
    else if (b >= a && b >= c)
        cout << "b is largest" << endl;
    else
        cout << "c is largest" << endl;

    // Check vowel or consonant
    char ch = 'e';
    cout << "\nCheck Vowel or Consonant for '" << ch << "':\n";
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        cout << "It is a vowel" << endl;
    else
        cout << "It is a consonant" << endl;

    // Bitwise Operators
    cout << "\nBitwise Operators:\n";
    int y = 5;  // 0101
    int z = 9;  // 1001
    cout << "y & z = " << (y & z) << endl; // 0001 = 1
    cout << "y | z = " << (y | z) << endl; // 1101 = 13
    cout << "y ^ z = " << (y ^ z) << endl; // 1100 = 12
    cout << "~y = " << (~y) << endl;       // 2's complement

    // Shift Operators
    cout << "\nShift Operators:\n";
    cout << "y << 1 = " << (y << 1) << endl; // Left shift
    cout << "z >> 1 = " << (z >> 1) << endl; // Right shift

    // Assignment Operators
    cout << "\nAssignment Operators:\n";
    int p = 10;
    p += 5;
    cout << "p += 5 -> " << p << endl;
    p *= 2;
    cout << "p *= 2 -> " << p << endl;

    return 0;
}
