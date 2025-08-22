#include <iostream>
using namespace std;

// 1. Sum of two numbers
void sumOfTwo() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << a + b << endl;
}

// 2. Average of two numbers
void averageOfTwo() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Average = " << (a + b) / 2.0 << endl;
}

// 3. Cube and Square
void cubeAndSquare() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square = " << n * n << ", Cube = " << n * n * n << endl;
}

// 4. Even or Odd
void evenOdd() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0)
        cout << n << " is Even." << endl;
    else
        cout << n << " is Odd." << endl;
}

// 5. Positive or Negative
void positiveNegative() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0)
        cout << n << " is Positive." << endl;
    else if (n < 0)
        cout << n << " is Negative." << endl;
    else
        cout << "Number is Zero." << endl;
}

// 6. Print a number 10 times
void printTenTimes() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 0; i < 10; i++)
        cout << num << " ";
    cout << endl;
}

// 7. Print n natural numbers
void printNaturalNumbers() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << endl;
}

// 8. Sum of n natural numbers
void sumNaturalNumbers() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum += i;
    cout << "Sum = " << sum << endl;
}

// 9. Prime number check
void primeCheck() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;
    if (n <= 1) isPrime = false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << n << " is Prime." << endl;
    else
        cout << n << " is Not Prime." << endl;
}

int main() {
    cout << "Lecture 2: Flowcharts & PseudoCode Examples\n" << endl;

    sumOfTwo();
    averageOfTwo();
    cubeAndSquare();
    evenOdd();
    positiveNegative();
    printTenTimes();
    printNaturalNumbers();
    sumNaturalNumbers();
    primeCheck();

    return 0;
}
