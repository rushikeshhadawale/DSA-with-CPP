#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val) {
    Node* node = new Node();
    node->data = val;
    node->left = node->right = NULL;
    return node;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Inorder Traversal: ";
    inorder(root);
}

//Explaination of Binary Tree Traversal

// struct Node { int data; Node* left; Node* right; };
// → Defines a structure for a binary tree node.
// → 'data' stores the value of the node.
// → 'left' points to the left child node.
// → 'right' points to the right child node.

// Node* newNode(int val) { ... }
// → Function to create a new node with the given value.
// → Allocates memory for a node, sets its data to 'val', and initializes left and right children as NULL.
// → Returns the pointer to the new node.

// void inorder(Node* root) { ... }
// → Recursive function to perform inorder traversal of the binary tree.
// → If 'root' is NULL, the function returns (base case).
// → First, recursively visit the left subtree.
// → Then, print the current node's data.
// → Finally, recursively visit the right subtree.

// int main() { ... }
// → Main function to create the binary tree and call traversal.

// Node* root = newNode(1);
// → Creates the root node with value 1.

// root->left = newNode(2);
// root->right = newNode(3);
// → Creates left and right child nodes of the root (2 and 3).

// root->left->left = newNode(4);
// root->left->right = newNode(5);
// → Adds children to the left child of root (node 2) → left child 4, right child 5.

// cout << "Inorder Traversal: ";
// → Prints a heading before the traversal output.

// inorder(root);
// → Calls the inorder traversal function starting from the root node.
// → This prints the tree nodes in inorder sequence: left subtree → root → right subtree.

// Output of this program:
// Inorder Traversal: 4 2 5 1 3
