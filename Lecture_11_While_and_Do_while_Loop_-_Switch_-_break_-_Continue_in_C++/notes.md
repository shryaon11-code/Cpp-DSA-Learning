# Lecture 11: While & Do-While Loop || Switch || Break & Continue in C++

### Key Concepts

1. **While Loop**
   - Syntax: `while(condition) { // code }`
   - Condition is checked **before** execution.
   - Example: printing numbers from 1 to n.
   - Can be used for multiplication tables, factors of a number, even/odd sequences.

2. **Do-While Loop**
   - Syntax: `do { // code } while(condition);`
   - Condition is checked **after** execution → guarantees at least **one run**.
   - Often used when input-driven execution is needed.
   - Disadvantage: executes code once even if the condition is false.

3. **Increment Operators in Loops**
   - Pre-increment (`++i`) vs Post-increment (`i++`) behavior inside loops.

4. **Break & Continue**
   - **Break** → terminates loop immediately.  
   - **Continue** → skips current iteration, goes to the next.  
   - Useful for handling conditional skips and early exits.

5. **Switch Statement**
   - Alternative to multiple `if-else`.  
   - Syntax:
     ```cpp
     switch(variable) {
         case value1: // code; break;
         case value2: // code; break;
         default: // code;
     }
     ```
   - Often used for menu-driven programs.
   - Scope of variables inside switch must be carefully managed.

---

### Programs Discussed
- Print numbers from 1 to n using while loop.
- Multiplication table using while loop.
- Find factors of a given number.
- Print even & odd numbers up to n.
- Sum of first n natural numbers (while vs do-while).
- Demonstration of `break` and `continue`.
- Menu-driven program using `switch`.
- Scope of variables inside loops/switch.

