#include <iostream>

using namespace std;

int main() {
    // int i = 1; - Initialization, executed once at the beginning 
    // but if int i = more than 11 it will not run due to it being bigger than 10
    // i <= 10; - Condition, checked before each iteration, loop continues as long as it's true
    // i++ - increment statment, executed after each iteration....After each iteration of the loop, the value of i will be incremented by 1.
    for (int i = 1; i <= 10; i++) {
        // The body of the loop
        // This block of code will be executed repeatedly as long as the condition (i <= 10) is true
        // In this case, it prints the value of 'i' followed by a newline character
        cout << " Value of i is: " << i << endl;
    }

    // This statement is outside the loop and will be executed once the loop finishes
    cout << "Out of the loop" << endl;

    return 0;
}
