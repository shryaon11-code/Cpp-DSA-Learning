#include <iostream>
using namespace std;

// Example 1: Linear Search
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i; // Found at index i
        }
    }
    return -1; // Not found
}

// Example 2: Sum of n numbers (O(n))
int sumLoop(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Example 3: Sum of n numbers (O(1))
int sumFormula(int n) {
    return (n * (n + 1)) / 2;
}

// Example 4: O(n^2) complexity
void printPairs(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
}

// Example 5: O(n^3) complexity
void printTriplets(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= n; k++) {
                cout << "(" << i << "," << j << "," << k << ") ";
            }
            cout << endl;
        }
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;
    int key = 8;

    // Linear Search
    int index = linearSearch(arr, n, key);
    cout << "Linear Search: Key found at index " << index << endl;

    // Sum of n numbers
    cout << "Sum using loop (n=10): " << sumLoop(10) << endl;
    cout << "Sum using formula (n=10): " << sumFormula(10) << endl;

    // O(n^2) Example
    cout << "\nPairs for n=3:" << endl;
    printPairs(3);

    // O(n^3) Example
    cout << "\nTriplets for n=2:" << endl;
    printTriplets(2);

    return 0;
}
