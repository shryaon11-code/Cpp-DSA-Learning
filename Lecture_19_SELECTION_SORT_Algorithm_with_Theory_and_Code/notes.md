# Lecture 19: Selection Sort Algorithm (Theory + Code)

## 🔹 Introduction
Sorting means arranging data in a particular order (ascending or descending).  
Examples from real life:  
- Arranging books on a shelf in alphabetical order.  
- Sorting marks of students in increasing order.

---

## 🔹 Selection Sort Concept
- Selection Sort repeatedly finds the **smallest element** (for ascending order) or **largest element** (for descending order) and places it at the correct position.  
- Works by **dividing the array** into:
  - **Sorted part**  
  - **Unsorted part**  

---

## 🔹 Algorithm (Ascending Order)
1. Start with the first element.  
2. Find the smallest element in the unsorted array.  
3. Swap it with the first element.  
4. Move the boundary of the sorted part by one step.  
5. Repeat until the array is sorted.  

---

## 🔹 Example
Array: `[64, 25, 12, 22, 11]`

- Pass 1 → smallest = 11 → swap with 64 → `[11, 25, 12, 22, 64]`  
- Pass 2 → smallest = 12 → swap with 25 → `[11, 12, 25, 22, 64]`  
- Pass 3 → smallest = 22 → swap with 25 → `[11, 12, 22, 25, 64]`  
- Pass 4 → smallest = 25 → already correct → `[11, 12, 22, 25, 64]`

Sorted ✅

---

## 🔹 Time & Space Complexity
- **Time Complexity**  
  - Best Case: O(n²)  
  - Worst Case: O(n²)  
  - Average Case: O(n²)  
- **Space Complexity**: O(1) → In-place sorting.  

---

## 🔹 Code Implementation
See `code.cpp` file for runnable C++ implementation.

---

## 🔹 Summary
- Selection Sort is simple and easy to implement.  
- Works well for **small datasets** but inefficient for large ones.  
- Always O(n²), no matter the input order.  
- Used mainly for learning, not for practical large-scale applications.  
