# 🔄 Recursion in C++
# 🎯 Aim
To study and understand the concept of recursion in C++, and explore how problems can be solved by functions calling themselves until a base condition is reached.

# 📚 Theory
Recursion is a programming technique in which a function calls itself directly or indirectly to solve a problem.

The problem is broken into smaller subproblems of the same type, and the process continues until a base case is satisfied.

# 🔑 Key Points

Recursive Function: A function that calls itself.

Base Case: The terminating condition that stops recursion.

Recursive Case: The part of the function where it calls itself with a smaller/simpler input.

Call Stack: Each recursive call is stored in memory; when the base case is reached, the stack unwinds and results are returned.

# 🏗️ Types of Recursion

Direct Recursion – Function calls itself directly.

Indirect Recursion – Function A calls B, and B calls A.

Tail Recursion – Recursive call is the last operation.

Non‑Tail Recursion – Recursive call is followed by extra work.

Linear Recursion – Only one recursive call per step.

Tree Recursion – Multiple recursive calls per step.

# 📋 Algorithms
# 🧾 Factorial using Recursion
    Start
    Input an integer n.
    Define recursive function fact(n):
    If n == 0, return 1 (base case).
    Else, return n * fact(n-1) (recursive case).
    Call fact(n) from main().
    Display the result.
    End

# 🧾 Sum of Natural Numbers using Recursion
    Start
    Input an integer n.
    Define recursive function sum(n):
    If n <= 1, return n (base case).
    Else, return n + sum(n-1) (recursive case).
    Call sum(n) from main().
    Display the result.
    End

# 🧾 String Reversal using Recursion
    Start
    Input a string str.
    Find the length of the string n.
    Define recursive function reverse(str, i, n):
    If i == n, stop (base case).
    Else, call reverse(str, i+1, n) (recursive case).
    After returning, print str[i].
    Call reverse(str, 0, n) from main().
    Display the reversed string.
    End

# 🚀 Applications of Recursion
Recursion is widely used in mathematics, algorithms, and data structures. Some key applications include:

Mathematical Computations

Factorial, Fibonacci series, power functions, GCD.

Searching and Sorting

Binary Search, Merge Sort, Quick Sort.

Data Structures

Traversal of trees (preorder, inorder, postorder).

Graph traversal (DFS).

Linked list operations.

Backtracking Problems

N‑Queens problem.

Sudoku solver.

Maze pathfinding.

String and Array Operations

Reversing strings.

Palindrome checking.

Generating permutations and combinations.

# 🧠 Conclusion
This study of recursion in C++ demonstrates:

Self‑Referential Nature – Functions can call themselves to solve problems.
Base Case Importance – Prevents infinite recursion and stack overflow.
Code Simplification – Complex problems become easier to express.
Applications – Factorial, sum of numbers, string reversal, sorting, searching, and tree/graph traversal.
Recursion is elegant and powerful, but must be used carefully due to memory and performance considerations.
