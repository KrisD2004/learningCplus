#include <iostream>

using namespace std;

// The following program is a simple console calculator that takes two input values 'x' and 'y' from the user,
// adds them together, and outputs the result.

int main() {
    // Output a prompt to the console, asking the user to enter values for x and y.
    cout << "Enter values for x and y: ";

    double x;  // Declare a double variable named 'x' to store the first user input.
    double y;  // Declare a double variable named 'y' to store the second user input.
    
    // Read the user input from the console and store it in the variables 'x' and 'y'.
    // The '>>' operator is used to chain the input in a single line for both variables.
    cin >> x >> y;  
    
    // Output the sum of x and y to the console.
    cout << "Sum of x and y: " << x + y;

    return 0; 
}
