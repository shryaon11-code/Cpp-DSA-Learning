# Lecture 27: What is STL & Vector in C++

## 🔹 Introduction to STL
STL (Standard Template Library) in C++ provides ready-to-use data structures and algorithms.  
It mainly consists of:
- **Containers** (Vector, List, Set, Map, etc.)
- **Algorithms** (sort, find, binary_search, etc.)
- **Iterators** (to traverse containers)

---

## 🔹 Static vs Dynamic Memory Allocation
- **Static Allocation**  
  - Size fixed at compile time.  
  - Example: `int arr[5];`  
  - Cannot resize once declared.  

- **Dynamic Allocation**  
  - Memory allocated at runtime.  
  - Resizable and flexible.  
  - Example: `vector<int> v;`  

---

## 🔹 Vector in C++
A **vector** is a dynamic array that can resize itself automatically.  

### Key Features:
1. **Dynamic Size** → Doubles when capacity is full.  
2. **Contiguous Memory** → Like arrays, elements are stored continuously.  
3. **Direct Access** → Supports indexing like arrays.  

---

## 🔹 Common Vector Functions
- `push_back(x)` → Insert element at end  
- `pop_back()` → Remove last element  
- `size()` → Number of elements present  
- `capacity()` → Allocated memory size  
- `front()` → First element  
- `back()` → Last element  
- `at(index)` → Access element safely  
- `clear()` → Removes all elements  
- `erase(iterator)` → Remove element at specific position  

---

## 🔹 Important Notes
- Vector capacity increases **geometrically (mostly doubles)** when exceeded.  
- Removing an element shifts the rest to maintain order.  
- Efficient when accessing elements (O(1)), but insertions/deletions in the middle are O(n).  

---

## 🔹 Summary
- STL simplifies coding with pre-built structures.  
- Vectors are powerful alternatives to arrays.  
- They offer flexibility, built-in functions, and automatic memory management.  

---

## 🔹 Code Implementation
See `code.cpp` file for vector operations.
