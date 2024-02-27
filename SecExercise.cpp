#include <iostream>

using namespace std;

int main() {
    // Prompt the user to enter the temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";

    // Declare a variable to store the Fahrenheit temperature entered by the user
    int Fahrenheit;
    
    // Read the user input for the Fahrenheit temperature
    //the entered number from the user is stored in farenheit 
    cin >> Fahrenheit;

    // Convert Fahrenheit to Celsius using the conversion formula
    double celsius = (Fahrenheit - 32) / 1.8;

    // Display the converted temperature in Celsius
    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}
