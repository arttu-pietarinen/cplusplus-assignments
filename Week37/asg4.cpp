// Arttu Pietarinen
// Week 37 / Assignment 4

#include <iostream> // Include the iostream library
#include <cmath> // Include the cmath library for mathematical functions
using namespace std; // Use the namespace
const double pii=3.141592654; // Define a constant for pi

int main() { // Main function

    float r; // Variable for radius
    cout << "Anna ympyrän säde: "; // Prompt user for radius
    cin >> r; // Read user input for radius
    cout << "Ympyrän pinta-ala on: " << pii * pow(r, 2); // Print the area of the circle

    return 0; // Returns 0 to main function to indicate successful execution
}