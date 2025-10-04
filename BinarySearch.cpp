#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key;
    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Element found at index " << mid;
            return 0;
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << "Element not found";
    return 0;
}

//explaination of the Binary Search

// int arr[] = {10, 20, 30, 40, 50};
// → A sorted array named arr is created with 5 elements.

// int n = 5, key;
// → 'n' stores the number of elements in the array.
// → 'key' will store the element entered by the user to search for.

// cout << "Enter element to search: ";
// cin >> key;
// → The program asks the user to enter the element to search.
// → The entered value is stored in 'key'.

// int low = 0, high = n - 1, mid;
// → 'low' stores the starting index of the array (0).
// → 'high' stores the ending index of the array (n-1 = 4).
// → 'mid' will store the middle index during the search.

// while (low <= high)
// → Loop continues as long as the search range is valid (low ≤ high).

// mid = (low + high) / 2;
// → Calculate the middle index of the current search range.

// if (arr[mid] == key)
// → Check if the middle element is equal to the key.

// cout << "Element found at index " << mid;
// return 0;
// → If key is found, print its index and end the program.

// else if (arr[mid] < key)
// → If key is greater than middle element, ignore left half of the array.

// low = mid + 1;
// → Move 'low' to mid + 1 to search in the right half.

// else
// → If key is smaller than middle element, ignore right half of the array.

// high = mid - 1;
// → Move 'high' to mid - 1 to search in the left half.

// cout << "Element not found";
// → If the loop ends without finding the key, print "Element not found".

// return 0;
// → Ends the program successfully.

// Example output:
// Enter element to search: 30
// Element found at index 2

