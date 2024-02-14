#include <iostream>

// Switching values problem practice
int main () {
    int a = 34; // intial value of A 

    int b = 36; // intial value of b

    int temp = a; // intialize temp with a now making the value of temp 34. A is now empty

    a = b; // making A's new value 36 and emptying b's. 

    b = temp; // b's value is now 34 due to passing A's into vairable(Temp)

    std::cout << a; //prints 36 to the console. Reminder cout means consoles out!
    
    return 0;

}