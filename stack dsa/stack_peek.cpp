#include <iostream>
using namespace std;

// A simple array-based stack implementation
const int MAX_SIZE = 10;
int stack[MAX_SIZE]; // Array to store stack elements
int top = -1;        // Top points to the top element (-1 when empty)

// Function to push an element onto the stack
void push(int x) {
    if (top < MAX_SIZE - 1) {
        stack[++top] = x;
    }
}

// Function to peek at the top element without removing it
int peek() {
    if (top >= 0) {
        return stack[top];
    }
    return -1; // Indicates empty stack
}

int main() {
    // Push some elements onto the stack
    push(10);
    push(20);
    push(30);
    
    // Peek operation - view the top element without removing it
    cout << "Top element is: " << peek() << endl;
    
    return 0;
}

