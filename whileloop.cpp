#include <iostream>

using namespace std;

int main() {
    
     // Initialize variable 'a' with a value of 10
    int a = 10;
     // While loop will continue as long as the condition 'a < 30' is true
    while (a <= 30)
    {
        // Output the current value of 'a'
        cout << "Value of a is :" << a << endl;
        // incrementing "a" by 1 in each iteration 
        a++;
    }
    // After the while loop, when the condition is no longer true
    cout << "out of loop" << endl;

    return 0;

}