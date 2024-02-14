#include <iostream>

// This program demonstrates different ways to write output to the console

// The 'using namespace std;' directive allows using elements from the 'std' namespace without explicitly specifying it
using namespace std;

int main() {
    // Declare and initialize an integer variable 'x' with the value 10
    int x = 10;

    // Declare and initialize another integer variable 'y' with the value 20
    int y = 20;

    // This is an example of chaining multiple insertion operations together in a single line.
    // It outputs the value of 'x' preceded by "x = " and the value of 'y' preceded by "y = " to the console.
    cout << "x = " << x << endl
         << "y = " << y;

    // Indicates successful program execution by returning 0 to the operating system
    return 0;
}
