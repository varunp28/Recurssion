# Recurssion
Recursion in C++

Recursion is a process where a function calls itself to solve a problem.
It is used to break a big, complex problem into smaller and simpler sub-problems, until we reach a point where the solution is direct.

# Concept of Recursion

Every recursive function follows two main parts:

Base Case

The condition that stops the recursion.

Without a base case, recursion would go on forever and cause a program crash.

Recursive Case

The part of the function where it calls itself with a smaller or simpler input.

Each call brings the problem closer to the base case.

# How Recursion Works (Step-by-Step)

Imagine solving a problem step by step:

Step 1: Break the big problem into smaller versions of the same problem.

Step 2: Solve the smallest version directly (base case).

Step 3: Go back step by step, combining all the smaller solutions to get the final answer.

This process is similar to solving a puzzle where you first solve the smaller pieces and then assemble them together.

# Key Characteristics of Recursion

Self-Calling: The function keeps calling itself.

Base Case is Crucial: Without it, recursion becomes infinite.

Stack Memory Usage: Each recursive call is stored in memory until it returns a result.

Backtracking: After reaching the base case, the program "goes back" step by step to finish execution.

# Real-Life Analogy

Think of recursion like stacking boxes:

You keep stacking boxes (function calls) until you reach the smallest box (base case).

Then you start unstacking one by one, until you are back at the first box (final answer).

# When to Use Recursion

When the problem can be divided into smaller sub-problems of the same type.

When iterative solutions (loops) are harder to understand or implement.

Commonly used for:

Mathematical problems (factorial, Fibonacci)

Searching and sorting (merge sort, quick sort)

Tree and graph traversal

Backtracking problems (maze solving, Sudoku)

# Points to Remember

Recursion should always have a base case.

Too many recursive calls can cause stack overflow error.

Iterative solutions can be faster and use less memory in some cases, but recursion is often easier to write and understand for hierarchical problems.
