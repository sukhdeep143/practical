# Data Structure Operations: Arrays and Stacks

## 1. Introduction

This document provides a comprehensive overview of common operations performed on two fundamental data structures: Arrays and Stacks. Understanding these operations is essential for efficient algorithm design and implementation.

Arrays are linear data structures that store elements in contiguous memory locations, allowing for direct access to elements through indices. Stacks, on the other hand, follow the Last-In-First-Out (LIFO) principle, where the last element added is the first one to be removed.

Each section details the purpose, algorithm, common use cases, and time complexity of operations specific to these data structures.

## 2. Array Operations

Arrays are versatile data structures that support various operations. Here, we explore the most fundamental array operations.

### Insertion

**Purpose:**
- To add a new element at a specific position within the array.

**Basic Algorithm:**
1. Check if the array has space for a new element
2. Shift all elements from the insertion point one position to the right
3. Insert the new element at the specified position
4. Increment the size counter of the array

**Common Use Cases:**
- Adding an element in a sorted array while maintaining order
- Inserting data into a specific position based on priority or sequence
- Building a dataset incrementally

**Time Complexity:**
- Best Case: O(1) - Insertion at the end of an unsorted array
- Average Case: O(n) - Need to shift elements
- Worst Case: O(n) - Insertion at the beginning requires shifting all elements

### Deletion

**Purpose:**
- To remove an element from a specific position within the array.

**Basic Algorithm:**
1. Locate the element to be deleted
2. Shift all elements after the deletion point one position to the left
3. Decrement the size counter of the array
4. Optionally reset the last position to a default value

**Common Use Cases:**
- Removing outdated or invalid data
- Implementing filtering operations
- Managing dynamic collections

**Time Complexity:**
- Best Case: O(1) - Deletion from the end
- Average Case: O(n) - Need to shift elements
- Worst Case: O(n) - Deletion from the beginning requires shifting all elements

### Traversal

**Purpose:**
- To visit and potentially process each element in the array exactly once.

**Basic Algorithm:**
1. Start from the first element (index 0)
2. Process the current element
3. Move to the next element
4. Repeat steps 2-3 until all elements are processed

**Common Use Cases:**
- Searching for specific elements
- Computing aggregate values (sum, average, etc.)
- Transforming array elements
- Printing or displaying array contents

**Time Complexity:**
- O(n) - Each element must be visited once

### Update

**Purpose:**
- To modify the value of an element at a specific position.

**Basic Algorithm:**
1. Access the element directly using its index
2. Replace the current value with the new value

**Common Use Cases:**
- Correcting erroneous data
- Updating values based on new information
- Implementing algorithms that require in-place modifications

**Time Complexity:**
- O(1) - Direct access through indexing

## 3. Stack Operations

Stacks are abstract data structures that follow the Last-In-First-Out (LIFO) principle and support the following operations.

### Push

**Purpose:**
- To add an element to the top of the stack.

**Basic Algorithm:**
1. Check if the stack has space for a new element
2. Increment the top pointer
3. Add the new element at the position indicated by the top pointer

**Common Use Cases:**
- Function call management in programming languages
- Expression evaluation
- Backtracking algorithms
- Undo mechanisms in applications

**Time Complexity:**
- O(1) - Constant time operation

### Pop

**Purpose:**
- To remove and return the top element from the stack.

**Basic Algorithm:**
1. Check if the stack is empty
2. Retrieve the element at the top pointer
3. Decrement the top pointer
4. Return the retrieved element

**Common Use Cases:**
- Implementing undo functionality
- Expression evaluation
- Managing recursive function calls
- Syntax parsing

**Time Complexity:**
- O(1) - Constant time operation

### Peek

**Purpose:**
- To view the top element without removing it from the stack.

**Basic Algorithm:**
1. Check if the stack is empty
2. Return the element at the top pointer without modifying the stack

**Common Use Cases:**
- Checking conditions before performing operations
- Preview of the next element to be processed
- Implementing lookahead in parsing algorithms

**Time Complexity:**
- O(1) - Constant time operation

### All Stack Operations

Here's a summary of all stack operations and their implementations:

| Operation | Description | Time Complexity |
|-----------|-------------|-----------------|
| Push | Adds an element to the top | O(1) |
| Pop | Removes and returns the top element | O(1) |
| Peek | Returns the top element without removing it | O(1) |
| isEmpty | Checks if the stack is empty | O(1) |
| isFull | Checks if the stack is full (for bounded stacks) | O(1) |
| Size | Returns the number of elements in the stack | O(1) |

**Implementation Considerations:**
- Stacks can be implemented using arrays or linked lists
- Array implementation provides faster access but has a fixed size
- Linked list implementation allows dynamic sizing but has additional memory overhead
- Most programming languages provide built-in stack implementations

**Common Stack Applications:**
1. Function call management (call stack)
2. Expression evaluation and syntax parsing
3. Backtracking algorithms
4. Browser history management
5. Undo functionality in applications
6. Depth-first search algorithm implementation

