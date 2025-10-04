#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
//Explaination of Array Traversal

// int arr[] = {10, 20, 30, 40, 50};
// → An array named arr is created with 5 elements.
// (These are stored in consecutive memory locations.)

// int n = sizeof(arr) / sizeof(arr[0]);
// → This calculates how many elements are in the array.

// sizeof(arr) gives the total size of the array in bytes.

// sizeof(arr[0]) gives the size of one element.

// Dividing both gives the number of elements → here, n = 5.

// for (int i = 0; i < n; i++)
// → A loop runs from i = 0 to i = 4 (5 times).

// cout << arr[i] << " ";
// → In each loop, it prints the element at position i of the array.

// return 0;
// → Ends the program successfully.

//output = Array elements: 10 20 30 40 50