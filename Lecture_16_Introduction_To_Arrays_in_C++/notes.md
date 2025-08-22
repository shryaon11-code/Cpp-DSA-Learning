# Lecture 16: Introduction to Arrays in C++

## 🔹 Key Concepts
- **Array** → A collection of elements of the same data type stored in **contiguous memory locations**.  
- **Need for Arrays** → Instead of storing multiple variables separately, arrays allow storing and accessing them efficiently.  

## 🔹 Topics Covered
- Declaring & Initializing Arrays → `int arr[5] = {1,2,3,4,5};`  
- Indexing → Arrays are **zero-based**, meaning first element is at index `0`.  
- User Input → Values can be entered in arrays using loops.  
- Multiple ways of initialization:
  - `int arr[5] = {1,2,3};` → remaining initialized as `0`.  
  - `int arr[] = {10,20,30};` → size inferred automatically.  

- Printing elements of arrays with loops.  
- Memory layout → arrays occupy **contiguous blocks** in memory.  
- Arrays can hold different types (`int`, `char`, `float`).  
- **Finding elements in arrays**:
  - Remove minimum element.  
  - Find maximum element.  

## 🔹 Advantages
- Random access with indexing.  
- Efficient traversal.  
- Easy to perform aggregate operations like sum, max, min.  
