#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector
    vector<int> v;

    // Insert elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // Size and capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // Remove last element
    v.pop_back();
    cout << "After pop_back, elements: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // Access elements
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    cout << "Element at index 0: " << v.at(0) << endl;

    // Insert more elements to test capacity growth
    for (int i = 1; i <= 10; i++) v.push_back(i * 5);
    cout << "After inserting more elements, Size: " << v.size()
         << ", Capacity: " << v.capacity() << endl;

    // Remove specific element (erase second element)
    v.erase(v.begin() + 1);
    cout << "After erasing index 1: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // Clear vector
    v.clear();
    cout << "After clear, Size: " << v.size()
         << ", Capacity: " << v.capacity() << endl;

    return 0;
}
