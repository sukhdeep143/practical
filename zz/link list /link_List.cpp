#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Insert at specific position
    void insertAtPosition(int val, int pos) {
        if (pos <= 0) {
            cout << "Invalid position!\n";
            return;
        }
        if (pos == 1) {
            insertAtBeginning(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Position out of range\n";
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete from beginning
    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Delete from end
    void deleteFromEnd() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    // Delete at specific position
    void deleteAtPosition(int pos) {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }
        if (pos == 1) {
            deleteFromBeginning();
            return;
        }
        Node* temp = head;
        Node* prev = nullptr;
        for (int i = 1; i < pos && temp != nullptr; i++) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Position out of range\n";
            return;
        }
        prev->next = temp->next;
        delete temp;
    }

    // Search for a value
    bool search(int key) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    list.insertAtEnd(50);
    list.insertAtEnd(60);
    list.insertAtEnd(70);
    list.insertAtBeginning(40);
    list.insertAtPosition(55, 3);

    cout << "Linked List after insertions: ";
    list.display();

    list.deleteFromBeginning();
    cout << "After deleting from beginning: ";
    list.display();

    list.deleteFromEnd();
    cout << "After deleting from end: ";
    list.display();

    list.deleteAtPosition(2);
    cout << "After deleting at position 2: ";
    list.display();

    int searchKey = 60;
    if (list.search(searchKey)) {
        cout << searchKey << " is present in the list.\n";
    } else {
        cout << searchKey << " is not found in the list.\n";
    }

    return 0;
}
