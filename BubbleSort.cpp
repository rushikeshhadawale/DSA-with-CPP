#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 5};
    int n = 7;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

//Explaination of Bubble Sort 

// int arr[] = {64, 34, 25, 12, 22, 11, 5};
// → Initialize an array with 7 unsorted elements.

// int n = 7;
// → Store the number of elements in the array.

// for (int i = 0; i < n - 1; i++)
// → Outer loop runs from 0 to n-2. 
// → Controls the number of passes required to sort the array.

// for (int j = 0; j < n - i - 1; j++)
// → Inner loop runs through the unsorted part of the array in each pass.
// → Compares adjacent elements.

// if (arr[j] > arr[j + 1])
// → Check if the current element is greater than the next element.

// swap(arr[j], arr[j + 1]);
// → If the current element is greater, swap them to move the larger element towards the end.
// → This is the main operation of Bubble Sort.

// cout << "Sorted array: ";
// → Print heading for the sorted array output.

// for (int i = 0; i < n; i++)
// → Loop through the array to print all sorted elements.

// cout << arr[i] << " ";
// → Print each element separated by a space.

// Output of this program:
// Sorted array: 5 11 12 22 25 34 64

