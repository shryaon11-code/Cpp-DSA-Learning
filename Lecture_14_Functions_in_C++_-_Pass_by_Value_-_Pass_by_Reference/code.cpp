#include <iostream>
#include <algorithm> // for in-built swap
using namespace std;

// Function to print Hello World
void printHello() {
    cout << "Hello World" << endl;
}

// Function to find sum of n natural numbers
int sumOfN(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Function to check if a number is prime
bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Pass by Value
void passByValue(int x) {
    x = x + 10;
    cout << "Inside function (Value): " << x << endl;
}

// Pass by Reference
void passByReference(int &x) {
    x = x + 10;
    cout << "Inside function (Reference): " << x << endl;
}

// Swap using reference
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function Overloading
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}

int main() {
    printHello();

    cout << "Sum of 5 numbers: " << sumOfN(5) << endl;
    cout << "Is 7 prime? " << (isPrime(7) ? "Yes" : "No") << endl;
    cout << "Factorial of 5: " << factorial(5) << endl;

    int val = 10;
    passByValue(val);
    cout << "After Pass by Value: " << val << endl;

    passByReference(val);
    cout << "After Pass by Reference: " << val << endl;

    int a = 5, b = 10;
    swapNumbers(a, b);
    cout << "Swapped values: a=" << a << ", b=" << b << endl;

    // Inbuilt swap
    swap(a, b);
    cout << "In-built swapped values: a=" << a << ", b=" << b << endl;

    // Function Overloading
    cout << "Sum of ints: " << add(3, 4) << endl;
    cout << "Sum of doubles: " << add(2.5, 3.7) << endl;

    return 0;
}
