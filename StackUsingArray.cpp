#include <iostream>
using namespace std;
#define SIZE 5

int stack[SIZE], top = -1;

void push(int val) {
    if (top == SIZE - 1)
        cout << "Stack Overflow\n";
    else
        stack[++top] = val;
}

void pop() {
    if (top == -1)
        cout << "Stack Underflow\n";
    else
        cout << "Popped: " << stack[top--] << endl;
}

void display() {
    if (top == -1)
        cout << "Stack is empty\n";
    else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
}

//Explaination Stack Using Array

// #define SIZE 5
// → Define the maximum size of the stack as 5.

// int stack[SIZE], top = -1;
// → Create an array 'stack' to store stack elements.
// → 'top' stores the index of the top element, initialized to -1 (empty stack).

// void push(int val) { ... }
// → Function to insert (push) an element onto the stack.

// if (top == SIZE - 1)
// → Check if the stack is full (overflow condition).

// cout << "Stack Overflow\n";
// → Print message if no more elements can be pushed.

// else stack[++top] = val;
// → If stack is not full, increment 'top' and insert the new value at stack[top].

// void pop() { ... }
// → Function to remove (pop) the top element from the stack.

// if (top == -1)
// → Check if the stack is empty (underflow condition).

// cout << "Stack Underflow\n";
// → Print message if there are no elements to pop.

// else cout << "Popped: " << stack[top--] << endl;
// → Print the top element being popped and decrement 'top'.

// void display() { ... }
// → Function to display all elements of the stack from top to bottom.

// if (top == -1) cout << "Stack is empty\n";
// → If the stack is empty, print a message.

// else { for (int i = top; i >= 0; i--) cout << stack[i] << " "; cout << endl; }
// → Loop from top to 0 and print each element, showing the stack contents.

// int main() { ... }
// → Main function to test push, pop, and display operations.

// push(10); push(20); push(30);
// → Push three elements onto the stack.

// display();
// → Display current elements in the stack: 30 20 10

// pop();
// → Remove the top element (30) from the stack and print it.

// display();
// → Display current elements in the stack after pop: 20 10

