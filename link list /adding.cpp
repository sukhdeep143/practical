#include <iostream>
using namespace std;

// Step 1: Define Node structure
struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;  // Initially, the list is empty

// Function to add element at the end
void addElement(int value) {
    Node* newNode = new Node{value, nullptr}; // Create new node

    if (head == nullptr) {
        head = newNode;  // If list is empty, new node becomes head
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;  // Move to the last node
        }
        temp->next = newNode;  // Link new node at the end
    }
}

// Function to display the list
void displayList() {
    Node* temp = head;
    cout << "List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    addElement(10);
    addElement(20);
    addElement(30);
    displayList();  // Output: List: 10 20 30

    return 0;
}
