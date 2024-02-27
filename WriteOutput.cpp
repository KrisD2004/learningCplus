#include <iostream>

// different ways to write output to console

using namespace std; // The 'using namespace std;' directive allows using elements from the 'std' namespace without explicitly specifying it

int main()
{
    int x = 10; // Declare and initialize an integer variable 'x' with the value 10

    int y = 20;

    //// This is an example of chaining multiple insertion operations together in a single line.
    // It outputs the value of 'x' preceded by "x = " and the value of 'y' preceded by "y = " to the console. 
    //endl is used only after the first line, so the output buffer is flushed after the first line is printed. The second line is then printed without immediately flushing the buffer again.
    cout << "x = " << x << endl
         << "y= " << y;

    return 0;     // Indicates successful program execution by returning 0 to the operating system

}