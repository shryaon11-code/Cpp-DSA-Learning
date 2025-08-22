#include <iostream>
#include <cmath>
using namespace std;

// Binary to Decimal
int binaryToDecimal(long long bin) {
    int dec = 0, base = 1;
    while (bin > 0) {
        int lastDigit = bin % 10;
        dec += lastDigit * base;
        base *= 2;
        bin /= 10;
    }
    return dec;
}

// Decimal to Binary
long long decimalToBinary(int n) {
    long long bin = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

// Decimal to Octal
int decimalToOctal(int n) {
    int oct = 0, i = 1;
    while (n != 0) {
        int rem = n % 8;
        n /= 8;
        oct += rem * i;
        i *= 10;
    }
    return oct;
}

// Binary to Octal
int binaryToOctal(long long bin) {
    int dec = binaryToDecimal(bin);
    return decimalToOctal(dec);
}

int main() {
    long long bin;
    int dec;

    // Binary to Decimal
    cout << "Enter binary number: ";
    cin >> bin;
    cout << "Decimal: " << binaryToDecimal(bin) << endl;

    // Decimal to Binary
    cout << "\nEnter decimal number: ";
    cin >> dec;
    cout << "Binary: " << decimalToBinary(dec) << endl;

    // Decimal to Octal
    cout << "\nEnter decimal number: ";
    cin >> dec;
    cout << "Octal: " << decimalToOctal(dec) << endl;

    // Binary to Octal
    cout << "\nEnter binary number: ";
    cin >> bin;
    cout << "Octal: " << binaryToOctal(bin) << endl;

    return 0;
}
