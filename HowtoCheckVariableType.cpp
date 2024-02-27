#include <iostream>

using namespace std;

int main() {
    // Whole numbers - int
    20; 500; -100; 0; // These are integers (int), which represent whole numbers

    // Floating-point numbers - float 
    //you can specify a literal as a float by appending an 'f' or 'F' to the number
    1.5f; 9.99f; 3.14f; 10.0f; // These are floating-point numbers (float) with 7 decimal place precision. when you use the float type for a number, you are specifying a single-precision floating-point variable.

    // Double precision floating-point numbers - double
    1.5; 9.99; 3.14; 10.0; // These are double precision floating-point numbers (double) with 15 decimal place precision

    // Boolean values - bool
    true; false; // These are boolean values (bool), representing true or false

    // Characters - char
    'a'; 'b'; '$'; '5'; // These are characters (char) enclosed in single quotes

    // Variable declarations and assignments
    int age = 25; // Declaring an integer variable 'age' and assigning the value 25
    float price = 24.99f; // Declaring a float variable 'price' and assigning the value 24.99
    double pi = 3.14; // Declaring a double variable 'pi' and assigning the value 3.14
    bool hungry = true; // Declaring a boolean variable 'hungry' and assigning the value true
    char dollar = '$'; // Declaring a character variable 'dollar' and assigning the value '$'

    // Printing the types of variables using typeid
    cout << typeid(age).name() << endl; // Displaying the type of 'age' variable
    cout << typeid(price).name() << endl; // Displaying the type of 'price' variable
    cout << typeid(hungry).name() << endl; // Displaying the type of 'hungry' variable
    cout << typeid(pi).name() << endl; // Displaying the type of 'pi' variable
    cout << typeid(dollar).name() << endl; // Displaying the type of 'dollar' variable
} 
