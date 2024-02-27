#include <iostream>

using namespace std;

int main() {
    // Initialize variable 'a' with the value 1
    int a = 1;

    // Execute the loop at least once, and continue while 'a' is less than 10
    //do-while loop will always loop thru once regardless if the condition is true or not!
    do {
        // loop body
        // Output the current value of 'a' to the console
        cout << " Value of a is : " << a << endl;

        // Increment the value of 'a' by 1
        a++;
    } while (a < 10);// Continue looping while 'a' is less than 10

    return 0;
}
