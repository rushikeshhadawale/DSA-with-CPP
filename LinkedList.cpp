#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void display(Node* head) {
    Node* temp = head;
    cout << "Linked List: ";
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    display(head);
}

//Explaination of Linked List

// struct Node { int data; Node* next; };
// → Defines a structure for a linked list node.
// → 'data' stores the value of the node.
// → 'next' points to the next node in the list.

// void insert(Node*& head, int val) { ... }
// → Function to insert a new node at the beginning of the linked list.
// → 'head' is passed by reference to update the starting node of the list.
// → 'val' is the value to be inserted.

// Node* newNode = new Node();
// → Allocate memory for a new node.

// newNode->data = val;
// → Store the given value in the new node's data field.

// newNode->next = head;
// → Link the new node to point to the current head node.

// head = newNode;
// → Update head to point to the new node, making it the first node in the list.

// void display(Node* head) { ... }
// → Function to display all nodes of the linked list starting from 'head'.

// Node* temp = head;
// → Use a temporary pointer to traverse the list.

// cout << "Linked List: ";
// → Print heading before displaying the list.

// while (temp) { ... }
// → Traverse the list until the end (NULL) is reached.

// cout << temp->data << " -> ";
// → Print the data of the current node followed by an arrow.

// temp = temp->next;
// → Move to the next node in the list.

// cout << "NULL\n";
// → Indicate the end of the linked list.

// int main() { ... }
// → Main function to test insertion and display functions.

// Node* head = NULL;
// → Initialize an empty linked list with head as NULL.

// insert(head, 10); insert(head, 20); insert(head, 30);
// → Insert nodes at the beginning of the list. The list becomes: 30 -> 20 -> 10 -> NULL

// display(head);
// → Call the display function to print the linked list.

