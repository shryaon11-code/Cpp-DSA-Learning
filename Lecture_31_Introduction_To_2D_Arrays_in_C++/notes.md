# Lecture 31: Introduction to 2D Arrays in C++

## 🔹 What is a 2D Array?
- A **2D array** is an array of arrays.
- It is used to store data in **rows and columns** format (like a matrix).
- Syntax:
  ```cpp
  data_type array_name[rows][cols];
  
Example:

int arr[3][4]; // 3 rows, 4 columns

🔹 Memory Layout

Elements are stored in row-major order (row by row).

arr[i][j] → i = row index, j = column index.

Indices start from 0.

🔹 Initializing a 2D Array

Static Initialization

int arr[2][3] = { {1,2,3}, {4,5,6} };


Partial Initialization

int arr[2][3] = { {1}, {4,5} };


Default Initialization

If values are not provided, remaining elements are initialized to 0.

🔹 Taking Input in 2D Array

Use nested loops:

for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        cin >> arr[i][j];
    }
}

🔹 Printing a 2D Array
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

🔹 Example Problems

Input & print a matrix

Find the sum of all elements

Row-wise and Column-wise printing

🔹 Summary

2D arrays are useful for matrices, grids, tables.

Accessed with [row][col].

Input/output requires nested loops.
