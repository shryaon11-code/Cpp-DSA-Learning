#include <iostream>
using namespace std;

// Iterative Binary Search
int binarySearchIterative(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // target not found
}

// Recursive Binary Search
int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) return mid;
    else if (arr[mid] < target) return binarySearchRecursive(arr, mid + 1, right, target);
    else return binarySearchRecursive(arr, left, mid - 1, target);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Iterative
    int indexIter = binarySearchIterative(arr, n, target);
    if (indexIter != -1) cout << "Iterative: Found " << target << " at index " << indexIter << endl;
    else cout << "Iterative: " << target << " not found." << endl;

    // Recursive
    int indexRec = binarySearchRecursive(arr, 0, n - 1, target);
    if (indexRec != -1) cout << "Recursive: Found " << target << " at index " << indexRec << endl;
    else cout << "Recursive: " << target << " not found." << endl;

    return 0;
}
