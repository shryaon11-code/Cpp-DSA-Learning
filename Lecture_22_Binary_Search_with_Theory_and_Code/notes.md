# Lecture 22: Binary Search (Theory + Code)

## 🔹 Introduction
Binary Search is a **searching algorithm** used to find the position of a target element in a **sorted array**.  
It works by repeatedly dividing the search range into halves.

---

## 🔹 Working Principle
1. Start with the middle element of the sorted array.
2. If the target matches the middle element → return the index.
3. If the target is smaller → search the left half.
4. If the target is larger → search the right half.
5. Repeat until the element is found or the search range is empty.

---

## 🔹 Example
Array: `[2, 4, 6, 8, 10, 12, 14]`  
Target: `10`

- Step 1: mid = 6 → target > 6 → search right half.  
- Step 2: mid = 10 → target found at index 4.  

---

## 🔹 Time & Space Complexity
- **Best Case:** O(1) (if middle element is the target)  
- **Worst Case:** O(log n)  
- **Average Case:** O(log n)  
- **Space Complexity:** O(1) for iterative, O(log n) for recursive  

---

## 🔹 Advantages
- Much faster than Linear Search for large datasets.  
- Time complexity grows logarithmically.  

---

## 🔹 Disadvantages
- Requires the array to be **sorted**.  
- Not suitable for linked lists (since random access is not efficient).  

---

## 🔹 Summary
- Binary Search reduces search space by half at each step.  
- Works only on **sorted arrays**.  
- Iterative method is more space-efficient than recursion.  

---

## 🔹 Code Implementation
See `code.cpp` file for iterative and recursive approaches.
