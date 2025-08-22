# Lecture 18: Time and Space Complexity (From Zero To Advance)

## 🔹 Introduction
Time and Space Complexity measure how efficient an algorithm is in terms of execution time and memory usage.

---

## 🔹 Key Concepts

- **Time Complexity** → how execution time grows as input size increases.  
- **Space Complexity** → how much memory is required during program execution.  
- Both depend on:
  - Input size (`n`)  
  - Algorithm design  

---

## 🔹 Best, Worst, Average Case
- **Best Case (Ω)** → Minimum steps (e.g., element found at first position).  
- **Worst Case (O)** → Maximum steps (e.g., element found at last position).  
- **Average Case (Θ)** → Expected number of steps.  

---

## 🔹 Asymptotic Notations
- **Big O (O)** → Upper Bound (Worst Case).  
- **Theta (Θ)** → Tight Bound (Average Case).  
- **Omega (Ω)** → Lower Bound (Best Case).  

---

## 🔹 Rules for finding Time Complexity
1. Ignore **constants**.  
2. Ignore **lower-order terms**.  
3. Focus only on **highest-order term**.  

---

## 🔹 Examples
- **Linear Search**  
  - Best Case: Ω(1)  
  - Worst Case: O(n)  
  - Average Case: Θ(n)  

- **Sum of n numbers**  
  - Using loop → O(n)  
  - Using formula `n*(n+1)/2` → O(1)  

- **Nested loops**  
  - 2 loops → O(n²)  
  - 3 loops → O(n³)  

- **Two independent inputs**  
  - O(n + m), not O(n*m).  

---

## 🔹 Space Complexity
- **Fixed part** → independent of input (variables, program size).  
- **Variable part** → depends on input size (arrays, dynamic allocations).  

---

## 🔹 Common Complexities
| Complexity | Example |
|------------|---------|
| **O(1)**   | Accessing an array element |
| **O(log n)** | Binary Search |
| **O(n)**   | Linear Search |
| **O(n log n)** | Merge Sort, Quick Sort (avg) |
| **O(n²)**  | Bubble Sort, Selection Sort |
| **O(2ⁿ)**  | Recursive Fibonacci |
| **O(n!)**  | Traveling Salesman brute-force |

---

## ✅ Summary
- Focus on **growth with `n`**, not exact time.  
- Worst-case is most important in competitive programming.  
- Strive for balance between **time efficiency** and **space usage**.  
