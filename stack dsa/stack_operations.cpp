#include <iostream>
using namespace std;

// Stack size
#define MAX 5

class Stack {
private:
    int stack[MAX]; // Array to store stack elements
    int top;        // Index of top element
    
public:
    // Constructor to initialize stack
    Stack() { 
        top = -1; // Empty stack has top = -1
    }
    
    // Check if stack is full
    bool isFull() {
        return top == MAX - 1;
    }
    
    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }
    
    // Push an element onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        stack[++top] = value; // Increment top, then add element
        cout << value << " pushed to stack" << endl;
    }
    
    // Pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop from empty stack" << endl;
            return -1;
        }
        return stack[top--]; // Return element, then decrement top
    }
    
    // Return the top element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return stack[top];
    }
    
    // Display all elements in stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    
    // Demonstrate isEmpty
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    
    // Demonstrate push operation
    cout << "\n--- Pushing elements ---" << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    
    // Demonstrate isFull
    cout << "\nIs stack full? " << (s.isFull() ? "Yes" : "No") << endl;
    
    // Demonstrate peek operation
    cout << "\n--- Peek operation ---" << endl;
    cout << "Top element is: " << s.peek() << endl;
    
    // Demonstrate pop operation
    cout << "\n--- Popping elements ---" << endl;
    cout << s.pop() << " popped from stack" << endl;
    s.display();
    
    // Push more elements
    cout << "\n--- Pushing more elements ---" << endl;
    s.push(40);
    s.push(50);
    s.push(60); // This should cause overflow
    s.display();
    
    // Empty the stack
    cout << "\n--- Emptying the stack ---" << endl;
    while (!s.isEmpty()) {
        cout << s.pop() << " popped from stack" << endl;
    }
    
    // Try to pop from empty stack
    cout << "\n--- Try pop from empty stack ---" << endl;
    s.pop(); // This should show underflow error
    
    return 0;
}

