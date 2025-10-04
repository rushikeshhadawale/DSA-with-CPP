#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = 5;

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

//Explaination of Insertion Sort 

// int arr[] = {12, 11, 13, 5, 6};
// → Initialize an array with 5 unsorted elements.

// int n = 5;
// → Store the number of elements in the array.

// for (int i = 1; i < n; i++)
// → Outer loop starts from index 1 and goes to the end of the array.
// → Each element at index 'i' is treated as the 'key' to insert into the sorted part of the array (indices 0 to i-1).

// int key = arr[i];
// → Store the current element in 'key' to be placed at the correct position.

// int j = i - 1;
// → Initialize 'j' to the index just before 'i', to traverse the sorted portion of the array.

// while (j >= 0 && arr[j] > key)
// → Move elements that are greater than 'key' one position ahead to make space for 'key'.

// arr[j + 1] = arr[j];
// → Shift element at index 'j' to index 'j+1'.

// j--;
// → Move to the previous element in the sorted portion.

// arr[j + 1] = key;
// → Place the 'key' at its correct position in the sorted part of the array.

// cout << "Sorted array: ";
// → Print heading for the sorted array output.

// for (int i = 0; i < n; i++)
// → Loop through the array to print all sorted elements.

// cout << arr[i] << " ";
// → Print each element separated by a space.

// Output of this program:
// Sorted array: 5 6 11 12 13
