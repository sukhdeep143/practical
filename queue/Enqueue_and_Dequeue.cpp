#include <iostream>
using namespace std;

int main() {
    int queue[5];  // Fixed-size queue
    int front = -1, rear = -1;  // Initialize front and rear

    // --------------- Enqueue Block ---------------
    if (rear == 4) {
        cout << "Queue is full!" << endl;
    } else {
        rear++;
        queue[rear] = 10;
        if (front == -1) front = 0;
    }

    if (rear == 4) {
        cout << "Queue is full!" << endl;
    } else {
        rear++;
        queue[rear] = 20;
    }

    if (rear == 4) {
        cout << "Queue is full!" << endl;
    } else {
        rear++;
        queue[rear] = 30;
    }

    // Display queue elements after Enqueue
    if (front == -1) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue after Enqueue: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }

    // --------------- Dequeue Block ---------------
    if (front == -1 || front > rear) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Dequeued: " << queue[front] << endl;
        front++;
    }

    if (front == -1 || front > rear) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Dequeued: " << queue[front] << endl;
        front++;
    }

    // Display queue elements after Dequeue
    if (front == -1 || front > rear) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue after Dequeue: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
