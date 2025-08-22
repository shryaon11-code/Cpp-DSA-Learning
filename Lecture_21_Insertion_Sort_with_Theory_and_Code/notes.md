# Lecture 21: Insertion Sort Algorithm (Theory + Code)

## 🔹 Introduction
Insertion Sort is a simple and efficient algorithm for **small or nearly sorted datasets**.  
It works similarly to how people sort playing cards in their hands.

---

## 🔹 Working Principle
1. Assume the **first element is already sorted**.  
2. Pick the next element and **insert it into the correct position** in the sorted part.  
3. Repeat until all elements are sorted.

---

## 🔹 Example
Array: `[5, 3, 4, 1, 2]`

- Step 1: `[3, 5, 4, 1, 2]` (insert 3 before 5)  
- Step 2: `[3, 4, 5, 1, 2]` (insert 4 between 3 & 5)  
- Step 3: `[1, 3, 4, 5, 2]` (insert 1 at beginning)  
- Step 4: `[1, 2, 3, 4, 5]` (insert 2 in correct place)  

---

## 🔹 Time & Space Complexity
- **Best Case (Already Sorted):** O(n)  
- **Worst Case (Reverse Sorted):** O(n²)  
- **Average Case:** O(n²)  
- **Space Complexity:** O(1) (in-place)  

---

## 🔹 Advantages
- Simple to implement.  
- Efficient for small arrays or nearly sorted arrays.  
- Stable sorting algorithm (does not change the relative order of equal elements).  

---

## 🔹 Disadvantages
- Inefficient for large arrays.  
- Higher time complexity than advanced algorithms (Merge Sort, Quick Sort, etc.).

---

## 🔹 Summary
- Good for small datasets.  
- Useful when array is almost sorted.  
- Not practical for large datasets.  

---

## 🔹 Code Implementation
See `code.cpp` file for C++ implementation.
