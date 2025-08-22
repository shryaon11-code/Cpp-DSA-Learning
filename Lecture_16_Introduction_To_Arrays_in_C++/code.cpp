#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {10, 20};  // rest will be initialized as 0
    int arr3[] = {7, 8, 9};  // size auto-calculated

    // Print elements of arr1
    cout << "Elements of arr1: ";
    for(int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Take user input
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int userArr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> userArr[i];
    }

    // Print user input array
    cout << "You entered: ";
    for(int i = 0; i < n; i++) {
        cout << userArr[i] << " ";
    }
    cout << endl;

    // Find minimum and remove it (set to -1 for example)
    int minIndex = 0;
    for(int i = 1; i < n; i++) {
        if(userArr[i] < userArr[minIndex]) {
            minIndex = i;
        }
    }
    cout << "Minimum element: " << userArr[minIndex] << endl;
    userArr[minIndex] = -1; // removing by marking
    cout << "Array after removing min: ";
    for(int i = 0; i < n; i++) {
        cout << userArr[i] << " ";
    }
    cout << endl;

    // Find maximum element
    int maxVal = userArr[0];
    for(int i = 1; i < n; i++) {
        if(userArr[i] > maxVal) {
            maxVal = userArr[i];
        }
    }
    cout << "Maximum element: " << maxVal << endl;

    // Character array example
    char name[6] = {'C','o','d','e','r','\0'};
    cout << "Character array: " << name << endl;

    return 0;
}
