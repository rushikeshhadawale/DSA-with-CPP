#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Factorial = " << factorial(n);
}

//Explaination of Recursion 

// int factorial(int n) { ... }
// → Define a recursive function to calculate the factorial of 'n'.

// if (n == 0) return 1;
// → Base case: factorial of 0 is 1.

// return n * factorial(n - 1);
// → Recursive case: multiply 'n' by factorial of (n-1).

// int main() { ... }
// → Main function to get input from the user and display result.

// int n;
// → Variable to store the number entered by the user.

// cout << "Enter number: ";
// cin >> n;
// → Prompt the user to enter a number and store it in 'n'.

// cout << "Factorial = " << factorial(n);
// → Call the factorial function and print the result.
