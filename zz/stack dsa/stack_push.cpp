#include <iostream>
using namespace std;

#define MAX_SIZE 5  // Maximum size of stack

// Global variables
int stack[MAX_SIZE];  // Array to implement stack
int top = -1;         // Top pointer, -1 indicates empty stack

// Function to push an element onto the stack
void push(int value) {
    if (top >= MAX_SIZE-1) {
        cout << "Stack Overflow" << endl;
        return;
    }
    stack[++top] = value;  // Increment top, then add value
    cout << value << " pushed to stack" << endl;
}

// Display all elements in the stack
void display() {
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";
    cout << endl;
}

int main() {
    push(10);  // Push some values to stack
    push(20);
    push(30);
    display(); // Show stack contents
    return 0;
}

