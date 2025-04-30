#include <iostream>
using namespace std;

#define MAX 5  // Maximum stack size

// Global variables
int stack[MAX];  // Array implementation of stack
int top = -1;    // Initialize top of stack

// Push function to add elements to stack
void push(int x) {
    if (top < MAX - 1) {
        stack[++top] = x;  // Increment top and add element
    }
}

// Pop function to remove element from top of stack
int pop() {
    if (top >= 0) {
        return stack[top--];  // Return element and decrement top
    }
    return -1;  // If stack is empty
}

int main() {
    // Push elements to the stack
    push(10); push(20); push(30);
    
    // Display initial stack
    cout << "Stack after pushes: ";
    for (int i = 0; i <= top; i++) cout << stack[i] << " ";
    
    // Demonstrate pop operations
    cout << "\nPopped: " << pop();
    cout << "\nPopped: " << pop();
    
    // Display final stack state
    cout << "\nStack after pops: ";
    for (int i = 0; i <= top; i++) cout << stack[i] << " ";
    
    return 0;
}

