#include <iostream>
using namespace std;

int main() {
    // Taking input from user and summing two numbers
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << a + b << endl;

    // Typecasting example
    int x = 10;
    float y = (float)x / 3;
    cout << "Typecasting Example: " << y << endl;

    // If-Else example: Grading system
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks >= 90) cout << "Grade: A" << endl;
    else if (marks >= 75) cout << "Grade: B" << endl;
    else if (marks >= 50) cout << "Grade: C" << endl;
    else cout << "Grade: F" << endl;

    // Even or Odd
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0) cout << num << " is Even" << endl;
    else cout << num << " is Odd" << endl;

    // Positive, Negative, or Zero
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) cout << "Positive" << endl;
    else if (num < 0) cout << "Negative" << endl;
    else cout << "Zero" << endl;

    // Vowel check
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        cout << ch << " is a vowel" << endl;
    else cout << ch << " is not a vowel" << endl;

    // For loop examples
    cout << "Numbers from 1 to 5: ";
    for (int i = 1; i <= 5; i++) cout << i << " ";
    cout << endl;

    cout << "Squares from 1 to n (n=5): ";
    for (int i = 1; i <= 5; i++) cout << i*i << " ";
    cout << endl;

    cout << "CoderArmy 10 times:" << endl;
    for (int i = 1; i <= 10; i++) cout << "CoderArmy" << endl;

    cout << "First n natural numbers (n=10): ";
    for (int i = 1; i <= 10; i++) cout << i << " ";
    cout << endl;

    cout << "Even numbers up to 20: ";
    for (int i = 2; i <= 20; i += 2) cout << i << " ";
    cout << endl;

    return 0;
}
