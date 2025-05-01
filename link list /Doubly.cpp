// Algorithm InsertAtBeginningDLL(head, data):
// 1. Create newNode with data
// 2. newNode.next = head
// 3. newNode.prev = NULL
// 4. If head is not NULL:
//        head.prev = newNode
// 5. head = newNode
// 6. Return head


// Algorithm InsertAtEndDLL(head, data):
// 1. Create newNode with data
// 2. If head is NULL:
//        head = newNode
//        Return head
// 3. Traverse to last node (temp)
// 4. temp.next = newNode
// 5. newNode.prev = temp
// 6. Return head


// Algorithm DeleteByValueDLL(head, key):
// 1. If head is NULL, return NULL
// 2. If head.data == key:
//        head = head.next
//        If head != NULL: head.prev = NULL
//        Return head
// 3. Traverse to find node with data = key (temp)
// 4. If found:
//        temp.prev.next = temp.next
//        If temp.next != NULL:
//            temp.next.prev = temp.prev
// 5. Return head


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Insert at beginning
Node* insertAtBeginning(Node* head, int data) {
    Node* newNode = new Node{data, NULL, head};
    if (head != NULL)
        head->prev = newNode;
    return newNode;
}

// Insert at end
Node* insertAtEnd(Node* head, int data) {
    Node* newNode = new Node{data, NULL, NULL};
    if (head == NULL)
        return newNode;
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

// Delete by value
Node* deleteByValue(Node* head, int key) {
    if (head == NULL)
        return NULL;
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        if (head) head->prev = NULL;
        delete temp;
        return head;
    }
    Node* temp = head;
    while (temp != NULL && temp->data != key)
        temp = temp->next;
    if (temp == NULL) return head;
    if (temp->prev) temp->prev->next = temp->next;
    if (temp->next) temp->next->prev = temp->prev;
    delete temp;
    return head;
}

// Traverse
void traverse(Node* head) {
    Node* temp = head;
    cout << "Forward: ";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Main
int main() {
    Node* head = NULL;
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtBeginning(head, 5);
    traverse(head);  // 5 <-> 10 <-> 20 <-> NULL

    head = deleteByValue(head, 10);
    traverse(head);  // 5 <-> 20 <-> NULL

    return 0;
}
