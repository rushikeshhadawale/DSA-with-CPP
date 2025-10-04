#include <iostream>
using namespace std;
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void enqueue(int val) {
    if (rear == SIZE - 1)
        cout << "Queue Overflow\n";
    else {
        if (front == -1) front = 0;
        queue[++rear] = val;
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        cout << "Queue Underflow\n";
    else
        cout << "Dequeued: " << queue[front++] << endl;
}

void display() {
    if (front == -1 || front > rear)
        cout << "Queue is empty\n";
    else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}

//Explaination of Queue USing Array
// #define SIZE 5
// → Define the maximum size of the queue as 5.

// int queue[SIZE], front = -1, rear = -1;
// → Create an array 'queue' to store elements.
// → 'front' points to the first element in the queue, initialized to -1 (empty).
// → 'rear' points to the last element in the queue, initialized to -1 (empty).

// void enqueue(int val) { ... }
// → Function to insert an element into the queue (enqueue).

// if (rear == SIZE - 1)
// → Check if the queue is full (overflow condition).

// cout << "Queue Overflow\n";
// → Print message if queue is full and insertion is not possible.

// else { if (front == -1) front = 0; queue[++rear] = val; }
// → If queue is not full:
// → If queue is empty (front == -1), set front = 0.
// → Increment rear and insert the new value at queue[rear].

// void dequeue() { ... }
// → Function to remove an element from the queue (dequeue).

// if (front == -1 || front > rear)
// → Check if the queue is empty (underflow condition).

// cout << "Queue Underflow\n";
// → Print message if queue is empty and removal is not possible.

// else cout << "Dequeued: " << queue[front++] << endl;
// → Print the front element being dequeued and increment front to remove it from the queue.

// void display() { ... }
// → Function to display all elements currently in the queue.

// if (front == -1 || front > rear) cout << "Queue is empty\n";
// → If queue is empty, print a message.

// else { for (int i = front; i <= rear; i++) cout << queue[i] << " "; cout << endl; }
// → Loop through the queue from front to rear and print each element.

// int main() { ... }
// → Main function to test enqueue, dequeue, and display operations.

// enqueue(10); enqueue(20); enqueue(30);
// → Insert three elements into the queue.

// display();
// → Display the current elements in the queue: 10 20 30

// dequeue();
// → Remove the front element (10) from the queue and print it.

// display();
// → Display the current elements in the queue after dequeue: 20 30

