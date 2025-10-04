#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key;
    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Element not found";
    return 0;
}

//Explaination of Linear Search 

// int arr[] = {10, 20, 30, 40, 50};
// → Initialize a sorted array with 5 elements.

// int n = 5, key;
// → 'n' stores the number of elements in the array.
// → 'key' will store the value to search for.

// cout << "Enter element to search: ";
// cin >> key;
// → Prompt the user to enter the element to search and store it in 'key'.

// bool found = false;
// → Initialize a boolean flag 'found' to false, to track if the element is found.

// for (int i = 0; i < n; i++)
// → Loop through each element of the array from index 0 to n-1.

// if (arr[i] == key)
// → Check if the current element matches the key.

// cout << "Element found at index " << i;
// → If a match is found, print the index where the element is located.

// found = true;
// → Set the 'found' flag to true indicating the element was found.

// break;
// → Exit the loop immediately after finding the element, no need to check further.

// if (!found)
// → After the loop, check if the element was not found (flag is still false).

// cout << "Element not found";
// → If the element was not found, print a message.

// return 0;
// → End the program successfully.

// Example output:
// Enter element to search: 30
// Element found at index 2
