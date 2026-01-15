#include <iostream> // Include the iostream library
using namespace std; // Use the namespace

int main () {

    int num1, num2; // Variables for two numbers
    cout << "Input number 1. "; // Prompt user for first number
    cin >> num1; // Read user input for first number
    cout << "Input number 2. "; // Prompt user for second number
    cin >> num2; // Read user input for second number
    cout << "The difference of the two numbers is " << num1 - num2 << endl; // Print the difference of the two numbers
    cout << "The sum of the two numbers is " << num1 + num2; // Print the sum of the two numbers
    return 0; // Returns 0 to main function to indicate successful execution
}