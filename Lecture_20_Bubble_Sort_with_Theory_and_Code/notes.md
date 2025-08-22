# Lecture 20: Bubble Sort Algorithm (Theory + Code)

## 🔹 Introduction
Bubble Sort is one of the simplest sorting algorithms.  
It works by **repeatedly swapping adjacent elements** if they are in the wrong order.  
The process continues until the array is completely sorted.

---

## 🔹 How Bubble Sort Works
1. Compare the first two elements.  
2. If the first is greater than the second, swap them.  
3. Move to the next pair and repeat.  
4. After one full pass, the largest element moves to the end (like a "bubble" rising).  
5. Repeat for the remaining array until sorted.  

---

## 🔹 Example
Array: `[5, 1, 4, 2, 8]`

- Pass 1: `[1, 4, 2, 5, 8]`  
- Pass 2: `[1, 2, 4, 5, 8]`  
- Pass 3: `[1, 2, 4, 5, 8]` (already sorted, stops early ✅)

---

## 🔹 Key Observations
- After **k passes**, the last **k elements** are already in correct position.  
- Outer loop controls number of passes.  
- Inner loop performs adjacent comparisons.

---

## 🔹 Time & Space Complexity
- **Best Case** (Already Sorted): O(n) (with optimization)  
- **Worst Case** (Reverse Sorted): O(n²)  
- **Average Case**: O(n²)  
- **Space Complexity**: O(1) → In-place algorithm  

---

## 🔹 Bubble Sort vs Selection Sort
- Both have **O(n²)** time complexity.  
- Bubble Sort can stop early if no swaps are needed (optimized version).  
- Selection Sort always scans full array even if sorted.

---

## 🔹 Code Implementation
See `code.cpp` file for runnable C++ implementation.

---

## 🔹 Summary
- Bubble Sort is intuitive and easy to implement.  
- Works better on small or nearly sorted datasets.  
- Rarely used in real-world due to inefficiency on large datasets.  
